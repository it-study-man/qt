#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include"weatherData.h"
#include<QLabel>
#include<QtCharts>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QMenu *m_menu;
    QAction *m_action;
    QPoint m_offset;//偏移量
    QNetworkAccessManager *networkaccessmanage;

    //今天和6天的天气
    Today m_today;
    Day m_day[6];

    //星期和日期
    QList<QLabel*>mWeekList;
    QList<QLabel*>mDateList;

    //天气和天气图标
    QList<QLabel*>mTypeList;
    QList<QLabel*>mTypeIconList;

    //天气污染指数
    QList<QLabel*>mAqiList;

    //风力和风向
    QList<QLabel*>mFlList;
    QList<QLabel*>mFxList;

    QMap<QString,QString>mTypeMap;


    void getweatherinfo(QString cityName);
    void parseJson(QByteArray &byteArray);
    void updateUi();
    void paintHighseries();//绘制高温曲线
    void paintLowseries();//绘制低温曲线
private slots:
    void onReplyed(QNetworkReply *reply);
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    // QWidget interface
protected:
    virtual void contextMenuEvent(QContextMenuEvent *event) override;

    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;

    // QObject interface
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;
};





#endif // MAINWINDOW_H
