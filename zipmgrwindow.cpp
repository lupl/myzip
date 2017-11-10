#include "zipmgrwindow.h"
#include "ui_zipmgrwindow.h"

ZipMgrWindow::ZipMgrWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZipMgrWindow)
{
    ui->setupUi(this);
}

ZipMgrWindow::~ZipMgrWindow()
{
    delete ui;
}
