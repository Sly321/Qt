#ifndef QKEYCOLLIDE_H
#define QKEYCOLLIDE_H

#include <QtWidgets>
#include <QStackedWidget>
#include "draw.h"
#include "startmenu.h"
#include "chat.h"
#include "choosemenu.h"

class QKeyCollide : public QWidget
{
    Q_OBJECT

public:
    explicit QKeyCollide(QWidget *parent = 0);

private:
    QStackedWidget *windows;
    Draw *drawWidget;
    QLineEdit *line;
    QTextEdit *text;
    StartMenu *startmenu;
    Chat *chat;
    ChooseMenu *chooseMenu;


private slots:
    void setChooseMenu(int a);

protected:
    void keyPressEvent(QKeyEvent *e);
    void keyReleaseEvent(QKeyEvent *e);
    void paintEvent(QPaintEvent *e);

};

#endif // QKEYCOLLIDE_H
