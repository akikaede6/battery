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
    this->m_currentValue = 50;
    int minvalue = 0;
    int maxvalue = 200;
    int step = 1;

    Battery *b = new Battery;
//    QSlider *slider = new QSlider;
    ui->horizontalSlider->setTracking(true);
    ui->horizontalSlider->setRange(minvalue, maxvalue);
    ui->horizontalSlider->setSingleStep(step);
    connect(ui->horizontalSlider, &QSlider::valueChanged, b, &Battery::setValue);

    QHBoxLayout* mainLayout = new QHBoxLayout(ui->widget);
    mainLayout->addWidget(b);
//    mainLayout->addWidget(slider);
}


MainWindow::~MainWindow()
{
    delete ui;
}
