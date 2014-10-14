#include "widget.h"
#include "ui_widget.h"
#include "frame.h"

#include <QtWidgets>

Widget::Widget()
{
    frame = new Frame;

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(frame);
    setLayout(layout);

    setFixedSize(800, 600);
    //resize(800, 600);
}
