#include "mainwindow.h"
#include "filemgrwindow.h"
#include <QApplication>

#include "filemgr.h"
#include "zlibinterface.h"

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    FileMgrWindow f;
//    f.show();
//    return a.exec();

    FileMgr *fm = new FileMgr(QDir(QString("D:/")));
    ZlibInterface *zi = new ZlibInterface();
    zi->compressFile("D:/test.txt", "D:/test.zip");
    zi->uncompressFile("D:/test.zip", "D:/test.txt");

    return 0;
}

