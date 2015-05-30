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
    closesure.cpp \
    loose.cpp \
    mainmode.cpp \
    mode2.cpp

HEADERS  += mainwindow.h \
    maingame.h \
    closesure.h \
    loose.h \
    mainmode.h \
    mode2.h

FORMS    += mainwindow.ui \
    maingame.ui \
    closesure.ui \
    loose.ui \
    mainmode.ui \
    mode2.ui

RESOURCES += \
    resource.qrc
