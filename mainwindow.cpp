#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    debugBox = new QMessageBox(this);

    connect(ui->zipBtn, &QPushButton::clicked, this, &MainWindow::zipFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::zipFile() {
    debugBox->setText(ui->zipDirLineEdit->text());
    debugBox->show();
}
