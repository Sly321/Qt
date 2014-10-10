#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mStr = "String World";

    qDebug() << mStr;               //no ""
    qDebug() << "No String World";  //with ""

    return a.exec();
}
