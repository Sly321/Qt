#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Statlabel = new QLabel(this);
    Statbar = new QProgressBar(this);

    ui->statusBar->addPermanentWidget(Statlabel);
    ui->statusBar->addPermanentWidget(Statbar);
    Statbar->setTextVisible(false);
    Statlabel->setText("Hello");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    QMessageBox::information(this, "ActionTriggered", "Git");
}

void MainWindow::on_actionOpen_triggered()
{
    ui->statusBar->showMessage("Hello");
    ui->statusBar->setVisible(!ui->statusBar->isVisible());
    Statbar->setValue(45);
}
