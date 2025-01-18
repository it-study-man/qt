#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMenu>
#include<QMessageBox>
#include<QJsonDocument>
#include<QJsonArray>
#include<QJsonObject>
#include<weatherTool.h>
#include<QPainter>

#define increment 3 //温度每升高/降低一度，就移动3个像素
#define point_radius 3 //圆点的大小
#define TEXT_OFFSET_X 12 //温度数据值的偏移量
#define TEXT_OFFSET_Y 12

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);//无窗口栏显示
    setFixedSize(this->width(),this->height());
    ui->plainTextEdit->setEnabled(false);
    m_menu=new QMenu(this);
    m_action=new QAction();
    m_action->setText("退出");
    m_action->setIcon(QIcon(":/res/close.png"));
    m_menu->addAction(m_action);
    connect(m_menu,&QMenu::triggered,this,[=](){
        this->close();
    });
    ui->lineEdit->setFocus();
    ui->lineEdit->setPlaceholderText("城市");

    //将控件添加到控件数组中
    //星期和日期
    mWeekList<<ui->label_43<<ui->label_46<<ui->label_47<<ui->label_48<<ui->label_49<<ui->label_50;
    mDateList<<ui->labelDate1<<ui->labelDate2<<ui->labelDate3<<ui->labelDate4<<ui->labelDate5<<ui->labelDate6;

    //天气和天气图标
    mTypeList<<ui->label_20<<ui->label_22<<ui->label_24<<ui->label_26<<ui->label_28<<ui->label_30;
    mTypeIconList<<ui->label_19<<ui->label_21<<ui->label_23<<ui->label_25<<ui->label_27<<ui->label_29;

    //天气指数
    mAqiList<<ui->label_31<<ui->label_32<<ui->label_33<<ui->label_34<<ui->label_35<<ui->label_36;

    //风力和风向
    mFxList<<ui->label_51<<ui->label_52<<ui->label_53<<ui->label_54<<ui->label_55<<ui->label_56;
    mFlList<<ui->labelFl_1<<ui->labelFl_2<<ui->labelFl_3<<ui->labelFl_4<<ui->labelFl_5<<ui->labelFl_6;

    mTypeMap.insert("暴雪",":/res/type/BaoXue.png");
    mTypeMap.insert("暴雨",":/res/type/BaoYu.png");
    mTypeMap.insert("暴雨到大暴雨",":/res/type/BaoYuDaoDaBaoYu.png");
    mTypeMap.insert("大暴雨",":/res/type/DaBaoYu.png");
    mTypeMap.insert("大暴雨到特大暴雨",":/res/type/DaBaoYuDaoTeDaBaoYu.png");
    mTypeMap.insert("大到暴雪",":/res/type/DaDaoBaoXue.png");
    mTypeMap.insert("大雪",":/res/type/DaXue.png");
    mTypeMap.insert("大雨",":/res/type/DaYu.png");
    mTypeMap.insert("冻雨",":/res/type/DongYu.png");
    mTypeMap.insert("多云",":/res/type/DuoYun.png");
    mTypeMap.insert("浮沉",":/res/type/FuChen.png");
    mTypeMap.insert("雷阵雨",":/res/type/LeiZhenYu.png");
    mTypeMap.insert("雷阵雨伴有冰雹",":/res/type/LeiZhenYuBanYouBingBao.png");
    mTypeMap.insert("霾",":/res/type/Mai.png");
    mTypeMap.insert("强沙尘暴",":/res/type/QiangShaChenBao.png");
    mTypeMap.insert("晴",":/res/type/Qing.png");
    mTypeMap.insert("沙尘暴",":/res/type/ShaChenBao.png");
    mTypeMap.insert("特大暴雨",":/res/type/TeDaBaoYu.png");
    mTypeMap.insert("undefined",":/res/type/undefined.png");
    mTypeMap.insert("雾",":/res/type/Wu.png");
    mTypeMap.insert("小到中雪",":/res/type/XiaoDaoZhongXue.png");
    mTypeMap.insert("小到中雨",":/res/type/XiaoDaoZhongYu.png");
    mTypeMap.insert("小雪",":/res/type/XiaoXue.png");
    mTypeMap.insert("小雨",":/res/type/XiaoYu.png");
    mTypeMap.insert("雪",":/res/type/Xue.png");
    mTypeMap.insert("扬沙",":/res/type/YangSha.png");
    mTypeMap.insert("阴",":/res/type/Yin.png");
    mTypeMap.insert("雨",":/res/type/Yu.png");
    mTypeMap.insert("雨夹雪",":/res/type/YuJiaXue.png");
    mTypeMap.insert("阵雪",":/res/type/ZhenXue.png");
    mTypeMap.insert("阵雨",":/res/type/ZhenYu.png");
    mTypeMap.insert("中到大雪",":/res/type/ZhongDaoDaXue.png");
    mTypeMap.insert("中到大雨",":/res/type/ZhongDaoDaYu.png");
    mTypeMap.insert("中雪",":/res/type/ZhongXue.png");
    mTypeMap.insert("中雨",":/res/type/ZhongYu.png");
    //网络请求
    networkaccessmanage=new QNetworkAccessManager(this);
    connect(networkaccessmanage,&QNetworkAccessManager::finished,this,&MainWindow::onReplyed);
    //设置城市编码
    //getweatherinfo("101010100");//北京城市编码
    getweatherinfo("隆昌");

    //给标签添加事件过滤器
    ui->labelhigh->installEventFilter(this);
    ui->labellow->installEventFilter(this);


}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    m_offset=event->globalPos()-this->pos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos()-m_offset);
}
void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    //右键app程序退出
    m_menu->exec(QCursor::pos());//鼠标追踪
    event->accept();
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getweatherinfo(QString cityName)
{
    QString citycode=WeatherTool::getcitycode(cityName);
    if(citycode.isEmpty())
    {
        QMessageBox::warning(this,"警告","请检查输入的城市是否正确！",QMessageBox::Ok);
        return;
    }
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+citycode);
    networkaccessmanage->get(QNetworkRequest(url));
}

void MainWindow::parseJson(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument doc=QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError)
        return;
    QJsonObject rootObj=doc.object();
    qDebug()<<rootObj.value("message").toString();

    //1.解析日期和城市
    m_today.city=rootObj.value("cityInfo").toObject().value("city").toString();
    m_today.date=rootObj.value("date").toString();

    //2.解析yesterday
    QJsonObject objData=rootObj.value("data").toObject();
    QJsonObject yesterObj=objData.value("yesterday").toObject();
    m_day[0].week=yesterObj.value("week").toString();
    m_day[0].date=yesterObj.value("ymd").toString();
    m_day[0].type=yesterObj.value("type").toString();

    QString s;
    s=yesterObj.value("high").toString().split(" ").at(1);//以空白为分割 取后面一位
    s.left(s.length()-1);//18
    m_day[0].high=s.toInt();

    s=yesterObj.value("low").toString().split(" ").at(1);//以空白为分割 取后面一位
    s.left(s.length()-1);//18
    m_day[0].low=s.toInt();

    //风向风力
    m_day[0].fx=yesterObj.value("fx").toString();
    m_day[0].fl=yesterObj.value("fl").toString();

    //污染指数
    m_day[0].aqi=yesterObj.value("aqi").toDouble();


    //3.解析forecast中5天的数据
    QJsonArray forecastArray=objData.value("forecast").toArray();
    for(int i=0;i<5;i++)
    {
        QJsonObject forecastObj=forecastArray[i].toObject();
        m_day[i+1].week=forecastObj.value("week").toString();
        m_day[i+1].date=forecastObj.value("ymd").toString();

        //天气类型
        m_day[i+1].type=forecastObj.value("type").toString();

        //高温低温
        QString s;
        s=forecastObj.value("high").toString().split(" ").at(1);//以空白为分割 取后面一位
        s=s.left(s.length()-1);//18
        m_day[i+1].high=s.toInt();

        s=forecastObj.value("low").toString().split(" ").at(1);//以空白为分割 取后面一位
        s=s.left(s.length()-1);//18
        m_day[i+1].low=s.toInt();

        //风向风力
        m_day[i+1].fx=forecastObj.value("fx").toString();
        m_day[i+1].fl=forecastObj.value("fl").toString();

        //污染指数
        m_day[i+1].aqi=forecastObj.value("aqi").toDouble();
    }

    //4.解析今天的数据
    m_today.ganmao=objData.value("ganmao").toString();
    m_today.shidu=objData.value("shidu").toString();
    m_today.pm25=objData.value("pm25").toDouble();
    m_today.quality=objData.value("quality").toString();
    m_today.wendu=objData.value("wendu").toString().toDouble();

    //5.forcast 中的第一个数组元素 ，也就是今天的数据
    m_today.type=m_day[1].type;

    m_today.fx=m_day[1].fx;
    m_today.fl=m_day[1].fl;

    m_today.high=m_day[1].high;
    m_today.low=m_day[1].low;

    //6.更新界面UI
    updateUi();

    //7.更新温度曲线数据
    ui->labelhigh->update();
    ui->labellow->update();
}

void MainWindow::updateUi()
{
    //1.更新城市和日期
    ui->label_44->setText(QDateTime::fromString(m_today.date,"yyyyMMdd").toString("yyyy/MM/dd")+" "+m_day[1].week);
    ui->label_4->setText(m_today.city);

    //2.更新今天
    ui->label_2->setText(QString::number(m_today.wendu)+"°");
    ui->label->setPixmap(mTypeMap[m_today.type]);
    ui->label_3->setText(m_today.type+"  "+QString::number(m_today.low)+"~"+QString::number(m_today.high)+"℃");
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("感冒指数: "+m_today.ganmao);
    ui->label_13->setText(m_today.fx+"\n"+m_today.fl);
    ui->label_10->setText("PM2.5\n"+QString::number(m_today.pm25));
    ui->label_11->setText("湿度\n"+m_today.shidu);
    ui->label_12->setText("空气质量\n"+m_today.quality);

    //3.更新六天
    for(int i=0;i<6;i++)
    {
        //更新时间和日期
        mWeekList[i]->setText("周"+m_day[i].week.right(1));
        ui->label_43->setText("昨天");
        ui->label_46->setText("今天");
        ui->label_47->setText("明天");

        QStringList ymdList=m_day[i].date.split("-");
        mDateList[i]->setText(ymdList[1]+"/"+ymdList[2]);

        //更新天气气候
        mTypeList[i]->setText(m_day[i].type);
        mTypeIconList[i]->setPixmap(mTypeMap[m_day[i].type]);

        //更新空气质量
        if(m_day[i].aqi>=0 && m_day[i].aqi<=50)
        {
            mAqiList[i]->setText("优");
            mAqiList[i]->setStyleSheet("background-color:rgb(121,184,0);");
        }
        else if(m_day[i].aqi>=50 && m_day[i].aqi<=100)
        {
            mAqiList[i]->setText("良");
            mAqiList[i]->setStyleSheet("background-color:rgb(255,187,23);");
        }
        else if(m_day[i].aqi>=100 && m_day[i].aqi<=150)
        {
            mAqiList[i]->setText("轻度");
            mAqiList[i]->setStyleSheet("background-color:rgb(255,87,93);");
        }
        else if(m_day[i].aqi>=150 && m_day[i].aqi<=200)
        {
            mAqiList[i]->setText("中度");
            mAqiList[i]->setStyleSheet("background-color:rgb(235,17,27);");
        }
        else if(m_day[i].aqi>=200 && m_day[i].aqi<=250)
        {
            mAqiList[i]->setText("重度");
            mAqiList[i]->setStyleSheet("background-color:rgb(170,0,0);");
        }
        else
        {
            mAqiList[i]->setText("严重");
            mAqiList[i]->setStyleSheet("background-color:rgb(110,0,0);");
        }

        //更新风力和风向
        mFxList[i]->setText(m_day[i].fx);
        mFlList[i]->setText(m_day[i].fl);

    }
}


void MainWindow::onReplyed(QNetworkReply *reply)
{
    //响应码 200为成功
    int status_code=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    // qDebug()<<"status code"<<status_code;
    // qDebug()<<"url:"<<reply->url();
    // qDebug()<<"Raw header"<<reply->rawHeaderList();
    if(status_code!=200||reply->error()!=QNetworkReply::NoError)
    {
        qDebug()<<reply->errorString();
        QMessageBox::warning(this,"警告","请求数据失败",QMessageBox::Ok);

    }
    else
    {
        QByteArray bytearray=reply->readAll();
        qDebug()<<"read all:"<<bytearray.data();
        parseJson(bytearray);
    }

}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->labelhigh && event->type()==QEvent::Paint)
        paintHighseries();
    if(watched==ui->labellow && event->type()==QEvent::Paint)
        paintLowseries();
    return QWidget::eventFilter(watched,event);
}
void MainWindow::paintHighseries()
{
    QPainter painter(ui->labelhigh);
    painter.setRenderHint(QPainter::Antialiasing);//抗锯齿

    //1.获取X的坐标
    int pointX[6]={0};
    for(int i=0;i<6;i++)
    {
        pointX[i]=mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
    }
    //2.获取Y的坐标
    int tempSum=0;
    int tempAverage=0;
    for(int i=0;i<6;i++)
    {
        tempSum+=m_day[i].high;
    }
    tempAverage=tempSum/6;//最高温度的平均值

    //计算y轴坐标
    int pointY[6]={0};
    int yCenter=ui->labelhigh->height()/2;
    for(int i=0;i<6;i++)
    {
        pointY[i]=yCenter-((m_day[i].high-tempAverage) * increment);
    }

    //3.开始绘制
    //3.1绘制笔的设置
    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::red);
    painter.setPen(pen);
    painter.setBrush(Qt::red);

    //3.2 画点和数据注释
    for(int i=0;i<6;i++)
    {
        //显示点
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),point_radius,point_radius);

        //显示温度数据
        painter.drawText(pointX[i]-TEXT_OFFSET_X,pointY[i]-TEXT_OFFSET_Y,QString::number(m_day[i].high)+"°");
    }

    //3.3绘制曲线
    for(int i=0;i<5;i++)
    {
        if(i==0)
        {
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        }
        else{
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(pointX[i],pointY[i],pointX[i+1],pointY[i+1]);
    }
}

void MainWindow::paintLowseries()
{
    QPainter painter(ui->labellow);
    painter.setRenderHint(QPainter::Antialiasing);//抗锯齿

    //1.获取X的坐标
    int pointX[6]={0};
    for(int i=0;i<6;i++)
    {
        pointX[i]=mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
    }
    //2.获取Y的坐标
    int tempSum=0;
    int tempAverage=0;
    for(int i=0;i<6;i++)
    {
        tempSum+=m_day[i].low;
    }
    tempAverage=tempSum/6;//最高温度的平均值

    //计算y轴坐标
    int pointY[6]={0};
    int yCenter=ui->labellow->height()/2;
    for(int i=0;i<6;i++)
    {
        pointY[i]=yCenter-((m_day[i].low-tempAverage) * increment);
    }

    //3.开始绘制
    //3.1绘制笔的设置
    QPen pen;
    pen.setWidth(1);
    pen.setColor(QColor(0,255,255));
    painter.setPen(pen);
    painter.setBrush(QColor(0,255,255));

    //3.2 画点和数据注释
    for(int i=0;i<6;i++)
    {
        //显示点
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),point_radius,point_radius);

        //显示温度数据
        painter.drawText(pointX[i]-TEXT_OFFSET_X,pointY[i]-TEXT_OFFSET_Y,QString::number(m_day[i].low)+"°");
    }

    //3.3绘制曲线
    for(int i=0;i<5;i++)
    {
        if(i==0)
        {
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        }
        else{
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(pointX[i],pointY[i],pointX[i+1],pointY[i+1]);
    }
}
void MainWindow::on_pushButton_clicked()
{
    QString text=ui->lineEdit->text();
    getweatherinfo(text);
}

