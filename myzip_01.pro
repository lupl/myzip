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
    unzipmgrwindow.cpp \
    filemgr.cpp \
    zlibinterface.cpp \
    filemanager.cpp \
    zlib/unzip.c \
    zlib/zip.c

HEADERS  += mainwindow.h \
    filemgrwindow.h \
    zipmgrwindow.h \
    unzipmgrwindow.h \
    zlib/zlib.h \
    filemgr.h \
    myzipconf.h \
    zlibinterface.h \
    zlib/unzip.h \
    zlib/zip.h

FORMS    += mainwindow.ui \
    filemgrwindow.ui \
    zipmgrwindow.ui \
    unzipmgrwindow.ui

DISTFILES +=

LIBS += "D:/workspace/Qt/MyZip/myzip_01/zlib/libz.dll.a"
