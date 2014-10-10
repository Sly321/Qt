#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QtGui>
#include <QtCore>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("Untitled Application");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("Label1");
    QLineEdit *txt1 = new QLineEdit;

    QLabel *label2 = new QLabel("Label2");
    QLineEdit *txt2 = new QLineEdit;

    QLabel *label3 = new QLabel("Label3");
    QLineEdit *txt3 = new QLineEdit;

    QPushButton *button1 = new QPushButton("button1");

    layout->addWidget(label1, 0, 0);        // Row 0, Column 0
    layout->addWidget(txt1, 0, 1);          // Row 1, Column 0
    layout->addWidget(label2, 1, 0);        // Etc.
    layout->addWidget(txt2, 1, 1);
    layout->addWidget(label3, 2, 0);
    layout->addWidget(txt3, 2, 1);
    layout->addWidget(button1, 3, 0, 1, 3); // Row 3, Coloumn 0, Size of 1 Row, Size of 3 Coloumns

    window->setLayout(layout);

    window->show();
    return a.exec();
}
