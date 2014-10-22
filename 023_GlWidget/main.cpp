#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;
    window.resize(window.sizeHint());
    //int desktopSize = QApplication::desktop()->width() *
    //        QApplication::desktop()->height();
    //int widgetSize = window.width() * window.height();


    window.show();

    return a.exec();
}
