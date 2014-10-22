#include "draw.h"
#include <QtWidgets>

Draw::Draw(QWidget *parent) : QWidget(parent)
{
    /* Bools initialization */
    showFps = false;

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
}

void Draw::paintEvent(QPaintEvent *e) {
    //qDebug() << "paintEvent in draw.cpp";

    QRect rect(xpos, ypos, 80, 60);

    QPainter painter(this);
    painter.setPen(QPen(Qt::green));
    painter.setBrush(QBrush(Qt::blue));
    painter.drawRect(rect);

    QPainter textPainter(this);
    textPainter.setPen(QPen(Qt::red));
    textPainter.setBrush(QBrush(Qt::black));

    //textPainter.drawPicture(0,0, cleanHills);
    textPainter.drawImage(0, 200, cleanHills);

    textPainter.drawText(rect, "Block motherfucker D\nAbsatzapproved");

    i++;
    if(showFps) { textPainter.drawText(QRect(500,0,80,20), "FPS: " + QString::number(fpsInt)); }
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
