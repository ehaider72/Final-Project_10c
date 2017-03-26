#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#inc

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //void chnageTitle(QString newTitle);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
