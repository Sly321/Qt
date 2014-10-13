#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTCore>

class myTimer : public QObject
{
        Q_OBJECT
public:
    myTimer();
    QTimer *timer;
    QDate *date;
    QTime *time;

public slots:
    void MySlots();

};





#endif // MYTIMER_H
