#-------------------------------------------------
#
# Project created by QtCreator 2016-12-10T23:31:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = samp6_3
TEMPLATE = app


SOURCES += main.cpp\
        qwmainwindow.cpp \
    qformtable.cpp \
    qformdoc.cpp \
    qwdialogheaders.cpp \
    qwdialogsize.cpp

HEADERS  += qwmainwindow.h \
    qformtable.h \
    qformdoc.h \
    qwdialogheaders.h \
    qwdialogsize.h

FORMS    += qwmainwindow.ui \
    qformtable.ui \
    qformdoc.ui \
    qwdialogheaders.ui \
    qwdialogsize.ui

RESOURCES += \
    res.qrc
