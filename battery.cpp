#include "battery.h"


int Battery::getValue() const
{
    return value;
}

void Battery::setValue(int value)
{
    this->value = value;
    update();
}

void Battery::paintEvent(QPaintEvent *) {
    QPainter *painter = new QPainter(this);
    painter->setRenderHint(QPainter::Antialiasing, true);
    QLinearGradient linearGradient_body(100, 100, 100, 200);
    QLinearGradient linearGradient_head(10,10,100,100);//设置垂直渐变
    painter->setPen(QPen(Qt::black, 4));//设置画笔形式
    painter->drawRect(30, 40, 300, 200);//画电池本体
    linearGradient_head.setColorAt(1.0,Qt::black);//设置电池头填充色
    painter->setBrush(QBrush(linearGradient_head)); //设置填充形式
    painter->drawRect(330,115,50,50);//画电池头
    linearGradient_body.setColorAt(0.5, Qt::green);
    linearGradient_body.setColorAt(1, Qt::black);//设置电池颜色填充色
    painter->setPen(QPen(Qt::white, 5));//设置电池边框和填充色中间空白
    painter->setBrush(QBrush(linearGradient_body));//设置填充形式

    if (value < 50) {
        painter->fillRect(QRect(50,40,value,180),  QBrush(QColor(Qt::red)));
    } else {
        painter->drawRect(35, 15,value,190);//画电池填充色
    }
}
