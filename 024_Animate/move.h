#ifndef MOVE_H
#define MOVE_H

#include <QWidget>

class SimpleItem;

class move : public QWidget
{
    Q_OBJECT

public:
    move();

protected:
    void keyPressEvent(QKeyEvent *e);

public slots:
    void move_item(SimpleItem &itm);
    void test();

};

#endif // MOVE_H
