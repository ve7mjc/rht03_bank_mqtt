QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# DEFINES += QT_BUILD_MQTT_LIB
include(MqttAdapter\mqttadapter.pri)

SOURCES += main.cpp \
    rhtbankmqtt.cpp

HEADERS += \
    rhtbankmqtt.h
