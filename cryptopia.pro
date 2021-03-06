#-------------------------------------------------
#
# Project created by QtCreator 2017-12-29T22:39:31
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cryptopia
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    network.cpp \
    currentpair.cpp \
    hystorypair.cpp \
    orders.cpp \
    pairs.cpp \
    graphics.cpp \
    openordrers.cpp \
    trade.cpp

HEADERS  += mainwindow.h \
    network.h \
    mythread.h \
    currentpair.h \
    hystorypair.h \
    orders.h \
    pairs.h \
    graphics.h \
    openordrers.h \
    trade.h

FORMS    += mainwindow.ui
