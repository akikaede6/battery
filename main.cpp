#include "mainwindow.h"
#include "battery.h"

#include <QApplication>
#include <QPicture>
#include <QPainter>
#include <QLabel>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
//    QLabel label("hello, world");
//    label.show();
//    QPainter painter;
//    painter.fillRect(10, 10, 50, 100, Qt::red);
//    painter.save();
    w.show();
    return a.exec();
}
