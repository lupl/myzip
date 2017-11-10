#ifndef ZIPMGRWINDOW_H
#define ZIPMGRWINDOW_H

#include <QMainWindow>

namespace Ui {
class ZipMgrWindow;
}

class ZipMgrWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ZipMgrWindow(QWidget *parent = 0);
    ~ZipMgrWindow();

private:
    Ui::ZipMgrWindow *ui;
};

#endif // ZIPMGRWINDOW_H
