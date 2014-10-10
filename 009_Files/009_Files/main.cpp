#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QString>

void Write(QString Filename, QString Text) {
    QFile mFile(Filename);

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "Could not open file for writing.";
        qDebug() << Filename;
    }

    QTextStream out(&mFile);
    out << Text;

    mFile.flush();
    mFile.close();
}

void Read(QString Filename) {
    QFile mFile(Filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Could not open file for reading.";
        qDebug() << Filename;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    mFile.flush();
    mFile.close();

    qDebug() << "\nThe File" << Filename << "contains:";
    qDebug() << mText;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir home;
    QString homePath = home.homePath();

    QString filePath = homePath + "/Documents/test.txt";

    Write(filePath, "Yeah");
    Read(filePath);
    Write(filePath, "Hello Worlds Greatest");
    Read(filePath);

    Read(":/MyFiles/009_Files.pro");

    return a.exec();
}
