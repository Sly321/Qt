#include "dialog.h"
#include "ui_dialog.h"
#include <QtGui>
#include <QtCore>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //ui->label->setText("<i>bla</i>");

    for(int i = 0; i < 9; i++) {
        ui->comboBox->addItem(QString::number(i) + " item");
    }

    for(int i = 0; i < 9; i++) {
        ui->listWidget->addItem(QString::number(i) + " QListWidgetItem");
    }

    ui->treeWidget->setHeaderLabel("Col 1");
    ui->treeWidget->setHeaderLabels(QStringList() << "This is" << "Sparta");

    ui->treeWidget->setColumnCount(2);
    AddRoot("Hello", "World");

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    ui->label->setText("<b>Button 1</b>");
}

void Dialog::on_pushButton_2_clicked()
{
    ui->label->setText("<b>Button 2</b>");
}

void Dialog::on_pushButton_pressed()
{
    ui->lineEdit->setText("Ja");
    //QMessageBox::information(this, "Title", "You must click, not press.");
}

void Dialog::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    ui->lineEdit->setText("cursorPositionChanged: From "  + QString::number(arg1) + " to " + QString::number(arg2));
}

void Dialog::on_lineEdit_2_editingFinished()
{
    ui->lineEdit->setText("editFinished");
}

void Dialog::on_lineEdit_2_returnPressed()
{
    ui->lineEdit->setText("returnPressed");
}

void Dialog::on_lineEdit_2_selectionChanged()
{
    ui->lineEdit->setText("sectionChanged");
}

void Dialog::on_lineEdit_2_textChanged(const QString &arg1)
{
    ui->lineEdit_3->setText("TextChanged to: " + arg1);
}

void Dialog::on_lineEdit_2_textEdited(const QString &arg1)
{
    ui->lineEdit_3->setText("TextEdited to: " + arg1);
}

void Dialog::on_checkBox_clicked()
{
    if (ui->checkBox->isChecked()) {
        ui->lineEdit_3->setText("Checkbox, checked");
    } else {
        ui->lineEdit_3->setText("Checkbox, unchecked");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "TITLE", ui->comboBox->currentText());
}

void Dialog::on_pushButton_4_clicked()
{
    QListWidgetItem *itm = ui->listWidget->currentItem();
    itm->setText("TEXT GEÄNDERT");
    itm->setTextColor(Qt::red);
    itm->setBackgroundColor(Qt::black);
}

void Dialog::AddRoot(QString name, QString description) {
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    itm->setText(1, description);

    ui->treeWidget->addTopLevelItem(itm);

    AddChild(itm, "one", "hello");
    AddChild(itm, "two", "world");

}

void Dialog::AddChild(QTreeWidgetItem *parent, QString name, QString description) {
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, description);
    parent->addChild(itm);
}

void Dialog::on_pushButton_5_clicked()
{
    AddRoot("Hello", "World");

    ui->treeWidget->currentItem()->setBackgroundColor(0, Qt::red);
    ui->treeWidget->currentItem()->setBackgroundColor(1, Qt::green);
}

