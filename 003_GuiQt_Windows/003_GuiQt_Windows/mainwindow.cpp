#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Setting up a Widget in the complete Application */
    setCentralWidget((ui->plainTextEdit));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    /* Can interact with the other windows */
    mDialog = new Dialog(this);
    mDialog->show();

    /* Cant interact with the other windows */
    Dialog nDialog;
    nDialog.setModal(false);
    nDialog.exec();
}
