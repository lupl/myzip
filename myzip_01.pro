#-------------------------------------------------
#
# Project created by QtCreator 2017-10-23T18:02:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myzip_01
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    filemgrwindow.cpp \
    zipmgrwindow.cpp \
    unzipmgrwindow.cpp

HEADERS  += mainwindow.h \
    filemgrwindow.h \
    zipmgrwindow.h \
    unzipmgrwindow.h

FORMS    += mainwindow.ui \
    filemgrwindow.ui \
    zipmgrwindow.ui \
    unzipmgrwindow.ui
