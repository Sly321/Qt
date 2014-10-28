#include "choosemenu.h"

#include <QtWidgets>

ChooseMenu::ChooseMenu(QWidget *parent) : QWidget(parent)
{
    parentWindow = parent;
    pushButtonBack = new QPushButton("Back", this);
    rectChoose = new QPushButton("Choose", this);
    machine = new QStateMachine;

    /* States */
    topleft = new QState(machine);
    topleft->assignProperty(rectChoose, "geometry", QRect(245, 145, 100, 100));

    top = new QState(machine);
    top->assignProperty(rectChoose, "geometry", QRect(350, 145, 100, 100));

    topright = new QState(machine);
    topright->assignProperty(rectChoose, "geometry", QRect(455, 145, 100, 100));

    midleft = new QState(machine);
    midleft->assignProperty(rectChoose, "geometry", QRect(245, 250, 100, 100));

    mid = new QState(machine);
    mid->assignProperty(rectChoose, "geometry", QRect(350, 250, 100, 100));

    midright = new QState(machine);
    midright->assignProperty(rectChoose, "geometry", QRect(455, 250, 100, 100));

    botleft = new QState(machine);
    botleft->assignProperty(rectChoose, "geometry", QRect(245, 355, 100, 100));

    bot = new QState(machine);
    bot->assignProperty(rectChoose, "geometry", QRect(350, 355, 100, 100));

    botright = new QState(machine);
    botright->assignProperty(rectChoose, "geometry", QRect(455, 355, 100, 100));

    /* Set First State */
    machine->setInitialState(topleft);

    /* Animation for the States */
    animation = new QPropertyAnimation(rectChoose, "geometry");
    animation->setDuration(300);    // ANIMATIONS DURATION
    animation->setEasingCurve(QEasingCurve::OutElastic); // ANIMATIONS ... ANIMATION

    /* Topleft Right */
    tlr = topleft->addTransition(this, SIGNAL(right()), top);
    tlr->addAnimation(animation);

    /* Topleft Down */
    tld = topleft->addTransition(this, SIGNAL(down()), midleft);
    tld->addAnimation(animation);

    /* Top Left */
    tl = top->addTransition(this, SIGNAL(left()), topleft);
    tl->addAnimation(animation);

    /* Top Right */
    tri = top->addTransition(this, SIGNAL(right()), topright);
    tri->addAnimation(animation);

    /* Top Down */
    td = top->addTransition(this, SIGNAL(down()), mid);
    td->addAnimation(animation);

    /* Topright Left */
    trl = topright->addTransition(this, SIGNAL(left()), top);
    trl->addAnimation(animation);

    /* Topright Down */
    trd = topright->addTransition(this, SIGNAL(down()), midright);
    trd->addAnimation(animation);

    /* Midleft Up */
    mlu = midleft->addTransition(this, SIGNAL(up()), topleft);
    mlu->addAnimation(animation);

    /* Midleft Right */
    mlr = midleft->addTransition(this, SIGNAL(right()), mid);
    mlr->addAnimation(animation);

    /* Midleft Down */
    mld = midleft->addTransition(this, SIGNAL(down()), botleft);
    mld->addAnimation(animation);

    /* Mid Left */
    ml = mid->addTransition(this, SIGNAL(left()), midleft);
    ml->addAnimation(animation);

    /* Mid Up */
    mu = mid->addTransition(this, SIGNAL(up()), top);
    mu->addAnimation(animation);

    /* Mid Right */
    mr = mid->addTransition(this, SIGNAL(right()), midright);
    mr->addAnimation(animation);

    /* Mid Down */
    md = mid->addTransition(this, SIGNAL(down()), bot);
    md->addAnimation(animation);

    /* Midright Up */
    mru = midright->addTransition(this, SIGNAL(up()), topright);
    mru->addAnimation(animation);

    /* Midright Left */
    mrl = midright->addTransition(this, SIGNAL(left()), mid);
    mrl->addAnimation(animation);

    /* Midright Down */
    mrd = midright->addTransition(this, SIGNAL(down()), botright);
    mrd->addAnimation(animation);

    /* Botleft Up */
    blu = botleft->addTransition(this, SIGNAL(up()), midleft);
    blu->addAnimation(animation);

    /* Botleft Right */
    blr = botleft->addTransition(this, SIGNAL(right()), bot);
    blr->addAnimation(animation);

    /* Bot Left */
    bl = bot->addTransition(this, SIGNAL(left()), botleft);
    bl->addAnimation(animation);

    /* Bot Up */
    bu = bot->addTransition(this, SIGNAL(up()), mid);
    bu->addAnimation(animation);

    /* Bot Right */
    br = bot->addTransition(this, SIGNAL(right()), botright);
    br->addAnimation(animation);

    /* Botright Left */
    brl = botright->addTransition(this, SIGNAL(left()), bot);
    brl->addAnimation(animation);

    /* Botright Up */
    bru = botright->addTransition(this, SIGNAL(up()), midright);
    bru->addAnimation(animation);

    machine->start();

    connect(pushButtonBack, SIGNAL(clicked()), this, SLOT(backToStartmenu()));
}

void ChooseMenu::paintEvent(QPaintEvent *e) {
    QSize rectSize(100, 100);
    QPainter painter(this);
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            int posX = 245 + (100 * x) + (5 * x);
            int posY = 145 + (100 * y) + (5 * y);
            QRect rect(QPoint(posX, posY), rectSize);
            painter.drawRect(rect);
        }
    }
    QPen pen(QBrush(Qt::green), 2);


    painter.setPen(pen);
    painter.drawRect(245,145,100,100);


}

void ChooseMenu::keyPressEvent(QKeyEvent *e) {
    switch(e->key()) {
    case Qt::Key_Left:
        qDebug() << "keyPressEvent: left in chooseMenu";
        emit left();
        break;
    case Qt::Key_Right:
        qDebug() << "keyPressEvent: right in chooseMenu";
        emit right();
        break;
    case Qt::Key_Down:
        qDebug() << "keyPressEvent: down in chooseMenu";
        emit down();
        break;
    case Qt::Key_Up:
        qDebug() << "keyPressEvent: up in chooseMenu";
        emit up();
        break;
    case Qt::Key_Escape:
        qDebug() << "keyPressEvent: escape in chooseMenu";
        backToStartmenu();
        break;
    }

}

void ChooseMenu::backToStartmenu() {
    emit setCurrent(0);
}
