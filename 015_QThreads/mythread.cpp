#include "mythread.h"
#include <QtCore>
#include <QDebug>

mythread::mythread()
{
}

void mythread::run()
{
    qDebug() << this->name << "Running";

    for (int i = 0; i < 1000; i++) {
        QMutex mutex;
        mutex.lock();         //When this section of code is accessed, no other thread can configure this variables

        if(this->stop) {
            break;
        }

        mutex.unlock();       //Unlock
        //this->sleep(1);     //Seconds, not ms
        qDebug() << this->name << i;
    }
}
