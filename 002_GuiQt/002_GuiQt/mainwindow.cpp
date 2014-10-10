#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //ui->pushButton->setText("");

    /* Connects 2 UI Objects with action and reaction */
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->progressBar,SLOT(setValue(int)));
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->progressBar_2,SLOT(setValue(int)));
    /* Disconnects 2 UI Objects with action and reaction */
    disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->progressBar,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
