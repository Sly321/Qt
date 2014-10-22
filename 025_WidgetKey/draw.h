#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include <QTimer>

class Draw : public QWidget
{
    Q_OBJECT
public:
    explicit Draw(QWidget *parent = 0);
    void moveRight();
    void moveLeft();
    void moveDown();
    void moveUp();
    void setFpsVisible(bool b);
    bool isFpsVisible();

signals:

public slots:
    int fps();

private:
    bool showFps;
    int xpos;
    int ypos;
    int high;
    int width;
    int fpsInt;
    int i;
    QImage cleanHills;
    QTimer *timerUpdate;
    QTimer *seconds;

protected:
    void paintEvent(QPaintEvent *e);

};

#endif // DRAW_H
