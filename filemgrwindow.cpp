#include "filemgrwindow.h"
#include "ui_filemgrwindow.h"

FileMgrWindow::FileMgrWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileMgrWindow)
{
    ui->setupUi(this);
}

FileMgrWindow::~FileMgrWindow()
{
    delete ui;
}
