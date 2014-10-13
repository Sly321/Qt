#include "mytimer.h"
#include <QTCore>
#include <QDebug>
#include <QDate>
#include <QTime>

myTimer::myTimer()
{
    timer = new QTimer(this);
    date = new QDate();
    time = new QTime();
    connect(timer, SIGNAL(timeout()),this,SLOT(MySlots()));

    timer->start(1000);
}

void myTimer::MySlots() {
    qDebug() << date->currentDate().toString() + " "
                + time->currentTime().toString();
}
