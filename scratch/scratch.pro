#-------------------------------------------------
#
# Project created by QtCreator 2015-06-29T07:47:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = scratch
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

@
QMAKE_CXXFLAGS += -std=gnu++0x
@
