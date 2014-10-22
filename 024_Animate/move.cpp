#include "move.h"
#include <QtWidgets>
#include <qDebug>
#include <QMessageBox>

move::move()
{

}

void move::keyPressEvent(QKeyEvent *e) {
    switch (e->key()) {
    case Qt::Key_Left:
        qDebug() << "keyPressEvent: left";
        break;
    case Qt::Key_Right:
        qDebug() << "keyPressEvent: right";
        break;
    case Qt::Key_Down:
        qDebug() << "keyPressEvent: down";
        break;
    case Qt::Key_Up:
        qDebug() << "keyPressEvent: up";
        break;
    case Qt::Key_Space:
        qDebug() << "keyPressEvent: space";
        break;
    case Qt::Key_Q:
        qDebug() << "keyPressEvent: q";
        break;
    case Qt::Key_W:
        qDebug() << "keyPressEvent: w";
        break;
    case Qt::Key_E:
        qDebug() << "keyPressEvent: e";
        break;
    case Qt::Key_R:
        qDebug() << "keyPressEvent: r";
        break;
    case Qt::Key_D:
        qDebug() << "keyPressEvent: d";
        break;
    case Qt::Key_F:
        qDebug() << "keyPressEvent: f";
        break;
    case Qt::Key_Escape:
        qDebug() << "keyPressEvent: esc";
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Closing", "Do you really want to close?", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            qApp->quit();
        }
        break;
    default:
        QWidget::keyPressEvent(e);
    }
}

void move::move_item(SimpleItem &itm) {
    qDebug() << "function called: void move_item";
}

void move::test() {
    qDebug() << "i like to, MOVE IT";
}
