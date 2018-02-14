#ifndef RHTBANKMQTT_H
#define RHTBANKMQTT_H

#include <QObject>
#include <QDebug>
#include <QList>

#include "mqttadapter.h"

class RHTBankMqtt : public QObject
{
    Q_OBJECT
public:
    explicit RHTBankMqtt(QObject *parent = nullptr);

private:

    MqttAdapter *adapter;

signals:

public slots:

    void tcpLineReceived(QByteArray line);
    void mqttMessageReceived(QByteArray topic, QByteArray payload);
};

#endif // RHTBANKMQTT_H
