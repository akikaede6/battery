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
    w.show();
    return a.exec();
}
