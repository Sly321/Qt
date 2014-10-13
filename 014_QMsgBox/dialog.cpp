#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
#include <QtGui>
#include <QtCore>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //Info
    QMessageBox::information(this, "title", "This are some Information.");
}

void Dialog::on_pushButton_2_clicked()
{
    //Question
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "title", "Do you think sauron should have give gollum a cookie?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QMessageBox::information(this, "FOOL!", "Sauron was Golum!");
    } else {
        QMessageBox::information(this, "FOOL!", "Good Choice!");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    //Warning
    QMessageBox::warning(this, "title", "This are some Warnings.");
}

void Dialog::on_pushButton_4_clicked()
{
    //Custom
    QMessageBox::question(this, "title", "Text is awesome",
                          QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::NoToAll);
}
