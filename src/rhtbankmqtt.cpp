#include "rhtbankmqtt.h"

RHTBankMqtt::RHTBankMqtt(QObject *parent) : QObject(parent)
{

    adapter = new MqttAdapter();

    connect(adapter, SIGNAL(tcpLineReceived(QByteArray)),
            this, SLOT(tcpLineReceived(QByteArray)));
//    connect(adapter, SIGNAL(mqttMessageReceived(QByteArray,QByteArray)),
//            this, SLOT(mqttMessageReceived(QByteArray,QByteArray)));

    adapter->start();

}

void RHTBankMqtt::tcpLineReceived(QByteArray line)
{
    if (line.left(5) == "RHT03") {

        QList<QByteArray> rht = line.split(',');

        unsigned int chan = rht.at(1).toInt();
        double temp = rht.at(2).toDouble() / 10;
        double rh = rht.at(3).toDouble() / 10;

        qDebug() << qPrintable(QString("CH%1 %2 %3").arg(chan).arg(temp).arg(rh));

        adapter->mqttPublish(QString("rht03/%1/temp").arg(chan), QString("%1").arg(temp).toUtf8());

    }

}

void RHTBankMqtt::mqttMessageReceived(QByteArray topic, QByteArray payload)
{

}
