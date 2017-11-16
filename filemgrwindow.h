#ifndef FILEMGRWINDOW_H
#define FILEMGRWINDOW_H

#include <QMainWindow>

#include "filemgr.h"

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
    FileMgr *flieMgr;
};

#endif // FILEMGRWINDOW_H
