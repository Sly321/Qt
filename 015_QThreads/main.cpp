#include <QCoreApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    mythread mThread1;
    mThread1.name = "mThread1";

    mythread mThread2;
    mThread2.name = "mThread2";

    mythread mThread3;
    mThread3.name = "mThread3";

    // Standard
    /*
    mThread1.start();
    mThread2.start();
    mThread3.start();
    */

    //Priority
    mThread1.start(QThread::HighestPriority);   //Fastest Thread
    mThread2.start(QThread::LowestPriority);    //Slowest Thread
    mThread3.start(QThread::HighestPriority);   //Fastest Thread too

    mThread1.stop = true;

    return a.exec();
}
