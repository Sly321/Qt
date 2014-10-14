#ifndef FRAME_H
#define FRAME_H

#include <QFrame>

class Frame : public QFrame
{
    Q_OBJECT

public:
    Frame(QWidget *parent = 0);

signals:

protected:
    void keyPressEvent(QKeyEvent *event);

public slots:

};

#endif // FRAME_H
