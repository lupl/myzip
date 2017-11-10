#include "mainwindow.h"
#include "filemgrwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FileMgrWindow f;
    f.show();

    return a.exec();
}
