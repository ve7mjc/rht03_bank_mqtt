#include <QCoreApplication>

#include "rhtbankmqtt.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RHTBankMqtt app;

    return a.exec();
}
