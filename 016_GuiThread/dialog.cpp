#include "dialog.h"
#include "ui_dialog.h"
#include "mythread.h"
#include <QMessageBox>
#include <qDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    mThread = new MyThread(this);
    connect(mThread,SIGNAL(NumberChanged(int)), this, SLOT(onNumberChanged(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onNumberChanged(int Number) {
    ui->label->setText(QString::number(Number));
    //QMessageBox::information(this, "title", "bla");
}

void Dialog::on_pushButton_clicked()
{
    //Started
    mThread->stop = false;
    mThread->start();

    //mThread->wait(); //waiting until you do smth else

    //qDebug() << "done"; //output when the thread is done

    //QMessageBox::information(this, "title", "started");
}

void Dialog::on_pushButton_2_clicked()
{
    //Stop
    mThread->stop = true;
}
