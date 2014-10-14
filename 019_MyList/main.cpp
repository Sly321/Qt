#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    for (int i = -10; i < 10; i++) {
        List.append(i);
    }

    List.removeOne(5);

    foreach (int mNumber, List) {
        qDebug() << "List" << mNumber;
    }

    //QListIterator<int> Iter(List);
    QMutableListIterator<int> Iter(List); //This can Configure the List

    Iter.toBack();

    while(Iter.hasPrevious()) {
        qDebug() << Iter.previous();
        if (Iter.hasPrevious()) {
            qDebug() << "next ... " <<Iter.peekPrevious();
        }
    }

    Iter.toFront();

    while(Iter.hasNext()) {
        if (Iter.next() < 0) {
            Iter.remove();
        }
    }

    Iter.toFront();

    while(Iter.hasNext()) {
        qDebug() << Iter.next();
    }

    return a.exec();
}
