#include "startmenu.h"
#include "ui_startmenu.h"

#include <QDebug>

StartMenu::StartMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartMenu)
{
    ui->setupUi(this);
}

StartMenu::~StartMenu()
{
    delete ui;
}

void StartMenu::on_pushButton_clicked()
{
    qDebug() << "clicked";
}
