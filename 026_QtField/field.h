#ifndef FIELD_H
#define FIELD_H

#include <QWidget>

namespace Ui {
class Field;
}

class Field : public QWidget
{
    Q_OBJECT

public:
    explicit Field(QWidget *parent = 0);
    ~Field();

    void Schleife();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    int color1;
    int color2;
    int color3;
    Ui::Field *ui;
    void Read(QString Filename);
    void Write(QString Filename, QString Text);

};

#endif // FIELD_H
