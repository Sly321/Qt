#ifndef WIDGET_H
#define WIDGET_H

#include <QFrame>
#include <QWidget>

class Frame;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget();

private:
    Frame *frame;

};

#endif // WIDGET_H
