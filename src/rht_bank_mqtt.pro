QT -= gui

CONFIG += console #c++11
CONFIG -= app_bundle

include(MqttAdapter\mqttadapter.pri)

SOURCES += main.cpp \
    rhtbankmqtt.cpp

HEADERS += \
    rhtbankmqtt.h
