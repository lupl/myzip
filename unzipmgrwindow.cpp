#include "unzipmgrwindow.h"
#include "ui_unzipmgrwindow.h"

UnzipMgrWindow::UnzipMgrWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UnzipMgrWindow)
{
    ui->setupUi(this);
}

UnzipMgrWindow::~UnzipMgrWindow()
{
    delete ui;
}
