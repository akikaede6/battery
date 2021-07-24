#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
#include <QStackedWidget>
#include <QPainter>

namespace Ui {


class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
//    int num;
//    void createControls(const QString &title);
//    int m_currentValue;
};

#endif // MAINWINDOW_H
