#include "qkeycollide.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QKeyCollide w;
    w.show();

    return a.exec();
}
