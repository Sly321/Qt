#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /* Label with HTML Code */
    //QLabel *lbl = new QLabel("<h1>Yoloworld</h1><p>paragraph1</p><p>paragraph2</p><font size=16 color=red>HEY</font><i><b>BOY</i></b>"); // Can use HTML
    //lbl->show();

    QWidget *window = new QWidget;

    window->setWindowTitle("Untitled Application of the glorious");
    /*
    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");

    QHBoxLayout *hlayout = new QHBoxLayout; // Horizontal Layout
    QVBoxLayout *vlayout = new QVBoxLayout; // Vertikal Layout

    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);

    window->setLayout(vlayout);
    */
    window->show();

    return a.exec();
}
