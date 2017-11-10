#ifndef UNZIPMGRWINDOW_H
#define UNZIPMGRWINDOW_H

#include <QMainWindow>

namespace Ui {
class UnzipMgrWindow;
}

class UnzipMgrWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UnzipMgrWindow(QWidget *parent = 0);
    ~UnzipMgrWindow();

private:
    Ui::UnzipMgrWindow *ui;
};

#endif // UNZIPMGRWINDOW_H
