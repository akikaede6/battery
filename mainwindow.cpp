#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "battery.h"

#include <QPainter>
#include <QSlider>
#include <QWidget>
#include <QString>
#include <QGridLayout>
#include <QObject>

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int minvalue = 0;
    int maxvalue = 100;
    int step = 1;

    Battery *b = new Battery;
    ui->horizontalSlider->setTracking(true);
    ui->horizontalSlider->setRange(minvalue, maxvalue);
    ui->horizontalSlider->setValue(50);
    ui->horizontalSlider->setSingleStep(step);
    connect(ui->horizontalSlider, &QSlider::valueChanged, b, &Battery::setValue);

    QHBoxLayout* mainLayout = new QHBoxLayout(ui->widget);
    mainLayout->addWidget(b);
}


MainWindow::~MainWindow()
{
    delete ui;
}
