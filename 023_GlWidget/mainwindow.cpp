#include <QtWidgets>

#include "mainwindow.h"
#include "startmenu.h"

MainWindow::MainWindow()
{
    //StartMenu startmenu;



    setWindowTitle(tr("MainWindow"));
}

void MainWindow::keyPressEvent(QKeyEvent *e) {
    switch (e->key()) {
    case Qt::Key_Escape:
        qDebug() << "keyPressEvent 'Escape'";
        close();
        break;
    case Qt::Key_Q:
        qDebug() << "keyPressEvent 'Q'";
        break;
    default:
        QWidget::keyPressEvent(e);
        break;
    }
}

void MainWindow::close() {
    qApp->quit();
}
