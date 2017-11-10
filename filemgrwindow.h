#ifndef FILEMGRWINDOW_H
#define FILEMGRWINDOW_H

#include <QMainWindow>

namespace Ui {
class FileMgrWindow;
}

class FileMgrWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FileMgrWindow(QWidget *parent = 0);
    ~FileMgrWindow();

private:
    Ui::FileMgrWindow *ui;
};

#endif // FILEMGRWINDOW_H
