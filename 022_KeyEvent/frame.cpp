#include "frame.h"
#include <QtWidgets>
#include <qDebug>
#include <QMessageBox>

Frame::Frame(QWidget *parent) : QFrame(parent)
{
    setFrameStyle(QFrame::Panel | QFrame::Sunken);
    setFocusPolicy(Qt::StrongFocus);

    qDebug() << "Frame Konstruktor";
    qApp->quit();
}

void Frame::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_Left:
        qDebug() << "Key left press Event";
        break;
    case Qt::Key_Right:
        qDebug() << "Key right press Event";
        break;
    case Qt::Key_Down:
        qDebug() << "Key down press Event";
        break;
    case Qt::Key_Up:
        qDebug() << "Key up press Event";
        break;
    case Qt::Key_Space:
        qDebug() << "Space key press Event";
        break;
    case Qt::Key_Q:
        qDebug() << "Q key press Event";
        break;
    case Qt::Key_W:
        qDebug() << "W key press Event";
        break;
    case Qt::Key_E:
        qDebug() << "E key press Event";
        break;
    case Qt::Key_R:
        qDebug() << "R key press Event";
        break;
    case Qt::Key_D:
        qDebug() << "D key press Event";
        break;
    case Qt::Key_F:
        qDebug() << "F key press Event";
        break;
    case Qt::Key_Escape:
        qDebug() << "Escape key press Event";
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Closing", "Do you really want to close?", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            qApp->quit();
        }
        break;
    default:
        QFrame::keyPressEvent(event);
    }
}
