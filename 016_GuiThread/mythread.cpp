#include "mythread.h"
#include <QtCore>
#include <QMessageBox>

MyThread::MyThread(QObject *parent) :
    QThread(parent)
{
}

void MyThread::run() {
    for(int i = 0; i < 1000000; i++) {
        QMutex mutex;
        mutex.lock();
        if(this->stop) {
            break;
        }
        mutex.unlock();

        emit NumberChanged(i);

        this->msleep(100);
    }
}
