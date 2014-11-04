#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QString>

#include "field.h"
#include "ui_field.h"

Field::Field(QWidget *parent) : QWidget(parent), ui(new Ui::Field)
{
    color1 = 0;
    color2 = 0;
    color3 = 0;

    ui->setupUi(this);
    ui->pushButton_1->setStyleSheet("QPushButton { background-color: #4ff635; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    ui->pushButton_2->setStyleSheet("QPushButton { background-color: #4ff635; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    ui->pushButton_3->setStyleSheet("QPushButton { background-color: #4ff635; border-width: 1px; border-color: darkCyan; border-style: groove;}");
}

Field::~Field()
{
    delete ui;
}

void Field::Write(QString Filename, QString Text) {
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

void Field::Read(QString Filename) {
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
/*
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



    //Read(":/MyFiles/009_Files.pro");

    return a.exec();
}*/

void Field::on_pushButton_1_clicked()
{
    color1++;
    if (color1 == 3) {
        color1 = 0;
    }

    if (color1 == 0) {
        ui->pushButton_1->setStyleSheet("QPushButton { background-color: #4ff635; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    } else if (color1 == 1) {
        ui->pushButton_1->setStyleSheet("QPushButton { background-color: yellow; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    } else if (color1 == 2) {
        ui->pushButton_1->setStyleSheet("QPushButton { background-color: red; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    }

}

void Field::on_pushButton_2_clicked()
{
    color2++;
    if (color2 == 3) {
        color2 = 0;
    }

    if (color2 == 0) {
        ui->pushButton_2->setStyleSheet("QPushButton { background-color: #4ff635; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    } else if (color2 == 1) {
        ui->pushButton_2->setStyleSheet("QPushButton { background-color: yellow; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    } else if (color2 == 2) {
        ui->pushButton_2->setStyleSheet("QPushButton { background-color: red; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    }
}

void Field::on_pushButton_3_clicked()
{
    color3++;
    if (color3 == 3) {
        color3 = 0;
    }

    if (color3 == 0) {
        ui->pushButton_3->setStyleSheet("QPushButton { background-color: #4ff635; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    } else if (color3 == 1) {
        ui->pushButton_3->setStyleSheet("QPushButton { background-color: yellow; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    } else if (color3 == 2) {
        ui->pushButton_3->setStyleSheet("QPushButton { background-color: red; border-width: 1px; border-color: darkCyan; border-style: groove;}");
    }
}
