#include <QtWidgets>
#include "move.h"

void debugOn(QGraphicsScene &scene);


class SimpleItem : public QGraphicsItem
{
public:
    QRectF boundingRect() const
    {
        qreal penWidth = 1;
        return QRectF(-10 - penWidth / 2, -10 - penWidth / 2,
                      20 + penWidth, 20 + penWidth);
    }

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget)
    {
        painter->drawRoundedRect(-10, -10, 20, 20, 5, 5);
    }
};

QTimer *timer;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    move *klasse = new move();

    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));

    SimpleItem *si = new SimpleItem;
    si->boundingRect();

    scene.addWidget(klasse);
    scene.setSceneRect(0, 0, 800, 600);
    scene.setBackgroundBrush(Qt::white);
    scene.addItem(si);


    debugOn(scene);

    //QGraphicsItem::grabMouse();
    //QGraphicsItem::ungrabMouse();

    //scene.addRect(QRectF(0, 0, 100, 200), QPen(Qt::black), QBrush(Qt::green));

    scene.setItemIndexMethod(QGraphicsScene::NoIndex);

    QGraphicsView view(&scene);
    view.setRenderHint(QPainter::Antialiasing);

    view.setCacheMode(QGraphicsView::CacheBackground);
    view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    //view.setDragMode(QGraphicsView::ScrollHandDrag);

    view.setWindowTitle(QT_TRANSLATE_NOOP(QGraphicsView, "Title"));
    view.resize(800, 600);
    view.show();

    QTimer timer;
    QObject::connect(&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
    timer.start(1000 / 33);


    return app.exec();
}

void debugOn(QGraphicsScene &scene) {
    for (int x = 0; x <= 800; x = x + 50) {
        scene.addLine(QLineF(x, 0, x, 10), QPen(Qt::red));
    }
    for (int y = 0; y <= 600; y = y +50) {
        scene.addLine(QLineF(0, y, 10, y), QPen(Qt::red));
    }
}
