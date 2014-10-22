#ifndef QKEYCOLLIDE_H
#define QKEYCOLLIDE_H

#include <QtWidgets>
#include <QStackedWidget>
#include "draw.h"
#include "startmenu.h"

class QKeyCollide : public QWidget
{
    Q_OBJECT

public:
    explicit QKeyCollide(QWidget *parent = 0);

private:
    QStackedWidget *windows;
    Draw *drawWidget;
    QLineEdit *line;
    StartMenu *startmenu;


protected:
    void keyPressEvent(QKeyEvent *e);
    void paintEvent(QPaintEvent *e);
};

#endif // QKEYCOLLIDE_H
