#include "rhtbankmqtt.h"

RHTBankMqtt::RHTBankMqtt(QObject *parent) : QObject(parent)
{
    adapter = new MqttAdapter();
}

void RHTBankMqtt::tcpLineReceived(QByteArray line)
{
    qDebug() << line;
}

void RHTBankMqtt::mqttMessageReceived(QByteArray topic, QByteArray payload)
{

}
