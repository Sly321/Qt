#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>
#include <QtCore>
#include <QTreeWidget>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

    void AddRoot(QString name, QString description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString description);

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_pressed();

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_2_selectionChanged();

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_checkBox_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
