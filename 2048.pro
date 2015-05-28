#-------------------------------------------------
#
# Project created by QtCreator 2015-05-27T10:52:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2048
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    maingame.cpp \
    closesure.cpp

HEADERS  += mainwindow.h \
    maingame.h \
    closesure.h

FORMS    += mainwindow.ui \
    maingame.ui \
    closesure.ui

RESOURCES += \
    resource.qrc
