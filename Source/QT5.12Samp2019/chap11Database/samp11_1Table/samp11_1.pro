#-------------------------------------------------
#
# Project created by QtCreator 2017-03-12T20:08:33
#
#-------------------------------------------------

QT       += core gui

QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = samp11_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qwcomboboxdelegate.cpp

HEADERS  += mainwindow.h \
    qwcomboboxdelegate.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
