#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
QT_END_NAMESPACE

class StartMenu;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();

protected:
    void keyPressEvent(QKeyEvent *e);
    void close();

private:

};

#endif // MAINWINDOW_H
