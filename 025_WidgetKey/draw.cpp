#include "draw.h"
#include <QtWidgets>

Draw::Draw(QWidget *parent) : QWidget(parent)
{
    /* Bools initialization */
    showFps = false;

    parentWindow = parent;

    animRect.setCoords(10,10,10,10);
    animRect.setSize(QSize(50,50));

    /* Int initialization */
    xpos = 0;
    ypos = 0;
    fpsInt = 0;
    i = 0;
    timerUpdate = new QTimer(this);
    connect(timerUpdate, SIGNAL(timeout()), this, SLOT(update()));
    timerUpdate->start(20);

    seconds = new QTimer(this);
    connect(seconds, SIGNAL(timeout()), this, SLOT(fps()));
    seconds->start(1000);

    cleanHills.load(":/images/background/hills_clean.png");
    water.load(":/images/background/water.png");
    forrest.load(":/images/background/forrest_clean.png");
    hills.load(":/images/background/forrest.png");

    /* Animation */
    animation = new QPropertyAnimation(this, "q_animRect");
    animation->setEndValue(QRect(10,300,50,50));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->setDuration(2000);
    animation->setLoopCount(5);

    connect(animation, SIGNAL(currentLoopChanged(int)), animation, SLOT(pause()));

}

void Draw::paintEvent(QPaintEvent *e) {
    //qDebug() << "paintEvent in draw.cpp";

    QRect rect(xpos, ypos, 80, 60);

    QPainter painter(this);
    painter.setPen(QPen(Qt::green));
    painter.setBrush(QBrush(Qt::blue));
    //painter.drawRect(rect);

    //QPainter textPainter(this);
    //textPainter.setPen(QPen(Qt::red));
    //textPainter.setBrush(QBrush(Qt::black));

    //textPainter.drawPicture(0,0, cleanHills);
    /*
    textPainter.drawImage(0, 0, forrest); //253 × 162
    textPainter.drawImage(253, 0, forrest);
    textPainter.drawImage(506, 0, forrest);
    textPainter.drawImage(0, 172, hills); //190 × 186
    textPainter.drawImage(190, 172, hills);
    textPainter.drawImage(380, 172, hills);
    textPainter.drawImage(570, 172, hills);
    textPainter.drawImage(0, 340, water); //129 × 57
    textPainter.drawImage(129, 340, water);
    textPainter.drawImage(258, 340, water);
    textPainter.drawImage(387, 340, water);
    textPainter.drawImage(516, 340, water);
    textPainter.drawImage(100, 200, cleanHills);*/

    //textPainter.drawText(rect, "Block motherfucker D\nAbsatzapproved");

    //painter.draw

    i++;
    //if(showFps) { textPainter.drawText(QRect(500,0,80,20), "FPS: " + QString::number(fpsInt)); }

    painter.drawRect(animRect);

}

void Draw::moveRight() {
    xpos++;
    qDebug() << "void Draw::move()";
    this->update();
    //ypos++;
}

void Draw::moveLeft() {
    xpos--;
    qDebug() << "void Draw::move()";
    this->update();
    //ypos++;
}

void Draw::moveDown() {
    ypos++;
    qDebug() << "void Draw::move()";
    this->update();
    //ypos++;
}

void Draw::moveUp() {
    ypos--;
    qDebug() << "void Draw::move()";
    this->update();
    //ypos++;
}

int Draw::fps() {
    fpsInt = i;
    i = 0;
}

void Draw::setFpsVisible(bool b) {
    showFps = b;
}

bool Draw::isFpsVisible() {
    return showFps;
}

void Draw::f_animation() {
    animation->start();
}

void Draw::e_animation() {
    animation->resume();
}

void Draw::keyPressEvent(QKeyEvent *e) {

        switch (e->key()) {

            /* Numeric Keys */
        case Qt::Key_0:
            qDebug() << "keyPressEvent: 0 in Draw";
            break;
        case Qt::Key_1:
            qDebug() << "keyPressEvent: 1 in Draw";
            parentWindow->setFocus();
            qDebug() << "Focus switched to ParentWidget";
            break;
        }
}
