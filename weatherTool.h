#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H
#include<QString>
#include<QJsonDocument>
#include<QJsonArray>
#include<QJsonParseError>
#include<QJsonValue>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>
class WeatherTool{
private:
    static QMap<QString,QString>m_cityMap;

    static void initcityMap()
    {
        //1.读取文件
        QString filePath="D:/json城市天气数据包/china_city.json";
        QFile file(filePath);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray json=file.readAll();
        file.close();

        //2.解析，并写入到map中
        QJsonParseError err;
        QJsonDocument doc=QJsonDocument::fromJson(json,&err);
        if(err.error!=QJsonParseError::NoError)
            return;
        if(!doc.isArray())
            return;
        QJsonArray cites=doc.array();
        for(int i=0;i<cites.size();i++)
        {
            QString name=cites[i].toObject().value("city_name").toString();
            QString code=cites[i].toObject().value("city_code").toString();
            if(code.size()>0)
            {
               m_cityMap.insert(name,code);
            }
        }

    }

public:
    static QString getcitycode(QString cityName)
    {
        if(m_cityMap.isEmpty())
        {
            initcityMap();
        }
        QMap<QString,QString>::iterator it=m_cityMap.find(cityName);
        if(it==m_cityMap.end())
        {
            it=m_cityMap.find(cityName+"市");
        }
        if(it==m_cityMap.end())
        {
            it=m_cityMap.find(cityName+"县");
        }
        if(it==m_cityMap.end())
        {
            it=m_cityMap.find(cityName+"区");
        }
        if(it!=m_cityMap.end())
        {
            return it.value();
        }
        return "";
    }
};
QMap<QString,QString>WeatherTool::m_cityMap={};

#endif // WEATHERTOOL_H
