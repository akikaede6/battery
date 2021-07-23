#ifndef BATTERY_H
#define BATTERY_H

#include <QObject>
#include <QSlider>
#include <QPainter>

class Battery : public QWidget
{
    Q_OBJECT

private:
    int maxvalue; //最大电量
    int minvalue; //最小电量
    int value{50};    //拖动电量
    int alarmvalue;  //红色电量值

    int board_angle;       //边框矩形圆角角度
    int back_angle;        //背景矩形圆角角度
    int head_angle;        //电池头部圆角角度
    QColor normal;      //电池正常颜色
    QColor alarm;       //电池报警颜色
    QColor change;      //电池渐变颜色
    int longside;           //电池长度
    int board;              //电池宽度坐标


//    void print(int param) {
//        printf("%d",param);
//        printf("hello world");
//    }


public slots:
    int getValue() const;
    void setValue(int value);

protected:
    void paintEvent(QPaintEvent *);

};


#endif // BATTERY_H

