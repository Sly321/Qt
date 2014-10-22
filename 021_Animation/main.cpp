#include <QtCore>
#include <QtWidgets>

class StateSwitchEvent: public QEvent
{
public:
    StateSwitchEvent()
        : QEvent(Type(StateSwitchType))
    {
    }

    explicit StateSwitchEvent(int rand)
        : QEvent(Type(StateSwitchType)),
          m_rand(rand)
    {
    }

    enum { StateSwitchType = QEvent::User + 256 };

    int rand() const { return m_rand; }

private:
    int m_rand;
};

class QGraphicsRectWidget : public QGraphicsWidget
{
public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *,
               QWidget *)
    {
        painter->fillRect(rect(), Qt::blue);
    }
};

class QGraphicsCircleWidget : public QGraphicsWidget
{
public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *,
               QWidget *)
    {
        painter->setBrush(Qt::black);
        painter->setPen(Qt::black);
        painter->drawEllipse(rect());
    }
};

class StateSwitchTransition: public QAbstractTransition
{
public:
    StateSwitchTransition(int rand)
        : QAbstractTransition(),
          m_rand(rand)
    {
    }

protected:
    virtual bool eventTest(QEvent *event)
    {
        return (event->type() == QEvent::Type(StateSwitchEvent::StateSwitchType))
            && (static_cast<StateSwitchEvent *>(event)->rand() == m_rand);
    }

    virtual void onTransition(QEvent *) {}

private:
    int m_rand;
};

class StateSwitcher : public QState
{
    Q_OBJECT
public:
    StateSwitcher(QStateMachine *machine)
        : QState(machine), m_stateCount(0), m_lastIndex(0)
    { }

    virtual void onEntry(QEvent *)
    {
        int n;
        while ((n = (qrand() % m_stateCount + 1)) == m_lastIndex)
        { }
        m_lastIndex = n;
        machine()->postEvent(new StateSwitchEvent(n));
    }
    virtual void onExit(QEvent *) {}

    void addState(QState *state, QAbstractAnimation *animation) {
        StateSwitchTransition *trans = new StateSwitchTransition(++m_stateCount);
        trans->setTargetState(state);
        addTransition(trans);
        trans->addAnimation(animation);
    }

private:
    int m_stateCount;
    int m_lastIndex;
};

QState *createGeometryState(QObject *w1, const QRect &rect1,
                            QObject *w2, const QRect &rect2,
                            QObject *w3, const QRect &rect3,
                            QObject *w4, const QRect &rect4,
                            QObject *w5, const QRect &rect5,
                            QObject *w6, const QRect &rect6,
                            QObject *w7, const QRect &rect7,
                            QObject *w8, const QRect &rect8, QState *parent)
{
    QState *result = new QState(parent);
    result->assignProperty(w1, "geometry", rect1);
    result->assignProperty(w2, "geometry", rect2);
    result->assignProperty(w3, "geometry", rect3);
    result->assignProperty(w4, "geometry", rect4);
    result->assignProperty(w5, "geometry", rect5);
    result->assignProperty(w6, "geometry", rect6);
    result->assignProperty(w7, "geometry", rect7);
    result->assignProperty(w8, "geometry", rect8);
    return result;
}

class GraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    GraphicsView(QGraphicsScene *scene, QWidget *parent = NULL) : QGraphicsView(scene, parent)
    {
    }

protected:
    virtual void resizeEvent(QResizeEvent *event)
    {
        fitInView(scene()->sceneRect());
        QGraphicsView::resizeEvent(event);
    }
};



int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QGraphicsCircleWidget *button1 = new QGraphicsCircleWidget;
    QGraphicsCircleWidget *button2 = new QGraphicsCircleWidget;
    QGraphicsCircleWidget *button3 = new QGraphicsCircleWidget;
    QGraphicsCircleWidget *button4 = new QGraphicsCircleWidget;
    QGraphicsCircleWidget *button5 = new QGraphicsCircleWidget;
    QGraphicsCircleWidget *button6 = new QGraphicsCircleWidget;
    QGraphicsCircleWidget *button7 = new QGraphicsCircleWidget;
    QGraphicsCircleWidget *button8 = new QGraphicsCircleWidget;

    QGraphicsScene scene(0, 0, 800, 600);
    scene.setBackgroundBrush(Qt::white);
    scene.addItem(button1);
    scene.addItem(button2);
    scene.addItem(button3);
    scene.addItem(button4);
    scene.addItem(button5);
    scene.addItem(button6);
    scene.addItem(button7);
    scene.addItem(button8);

    GraphicsView window(&scene);
    window.setFrameStyle(0);
    window.setAlignment(Qt::AlignLeft | Qt::AlignTop);
    window.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    window.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QStateMachine machine;

    QState *group = new QState();
    group->setObjectName("group");
    QTimer timer;
    timer.setInterval(1250);
    timer.setSingleShot(true);
    QObject::connect(group, SIGNAL(entered()), &timer, SLOT(start()));

    QState *state1;
    QState *state2;

    state1 = createGeometryState(button1, QRect(12, 0, 25, 25),
                                 button2, QRect(37, 0, 50, 50),
                                 button3, QRect(87, 0, 25, 25),
                                 button4, QRect(112, 0, 50, 50),
                                 button5, QRect(162, 0, 25, 25),
                                 button6, QRect(187, 0, 50, 50),
                                 button7, QRect(237, 0, 25, 25),
                                 button8, QRect(262, 0, 50, 50), group);
    state2 = createGeometryState(button1, QRect(0, 250, 50, 50),
                                 button2, QRect(50, 280, 25, 25),
                                 button3, QRect(75, 250, 50, 50),
                                 button4, QRect(125, 280, 25, 25),
                                 button5, QRect(150, 250, 50, 50),
                                 button6, QRect(200, 280, 25, 25),
                                 button7, QRect(225, 250, 50, 50),
                                 button8, QRect(275, 280, 25, 25), group);
    group->setInitialState(state1);

    QParallelAnimationGroup animationGroup;
    QSequentialAnimationGroup *subGroup;

    subGroup = new QSequentialAnimationGroup(&animationGroup);
    subGroup->addPause(200);
    QPropertyAnimation *anim = new QPropertyAnimation(button1, "geometry");
    anim->setDuration(1000);
    anim->setEasingCurve(QEasingCurve::OutInBounce);
    subGroup->addAnimation(anim);

    subGroup = new QSequentialAnimationGroup(&animationGroup);
    subGroup->addPause(200);
    anim = new QPropertyAnimation(button2, "geometry");
    anim->setDuration(1000);
    anim->setEasingCurve(QEasingCurve::OutBounce);
    subGroup->addAnimation(anim);

    subGroup = new QSequentialAnimationGroup(&animationGroup);
    subGroup->addPause(200);
    anim = new QPropertyAnimation(button3, "geometry");
    anim->setDuration(1000);
    anim->setEasingCurve(QEasingCurve::OutCirc);
    subGroup->addAnimation(anim);

    subGroup = new QSequentialAnimationGroup(&animationGroup);
    subGroup->addPause(200);
    anim = new QPropertyAnimation(button4, "geometry");
    anim->setDuration(1000);
    anim->setEasingCurve(QEasingCurve::OutCubic);
    subGroup->addAnimation(anim);

    subGroup = new QSequentialAnimationGroup(&animationGroup);
    subGroup->addPause(200);
    anim = new QPropertyAnimation(button5, "geometry");
    anim->setDuration(1000);
    anim->setEasingCurve(QEasingCurve::OutCurve);
    subGroup->addAnimation(anim);

    subGroup = new QSequentialAnimationGroup(&animationGroup);
    subGroup->addPause(200);
    anim = new QPropertyAnimation(button6, "geometry");
    anim->setDuration(1000);
    anim->setEasingCurve(QEasingCurve::OutElastic);
    subGroup->addAnimation(anim);

    subGroup = new QSequentialAnimationGroup(&animationGroup);
    subGroup->addPause(200);
    anim = new QPropertyAnimation(button7, "geometry");
    anim->setDuration(1000);
    anim->setEasingCurve(QEasingCurve::OutQuad);
    subGroup->addAnimation(anim);

    subGroup = new QSequentialAnimationGroup(&animationGroup);
    subGroup->addPause(200);
    anim = new QPropertyAnimation(button8, "geometry");
    anim->setDuration(500);
    anim->setEasingCurve(QEasingCurve::OutSine);
    subGroup->addAnimation(anim);

    StateSwitcher *stateSwitcher = new StateSwitcher(&machine);
    stateSwitcher->setObjectName("stateSwitcher");
    group->addTransition(&timer, SIGNAL(timeout()), stateSwitcher);
    stateSwitcher->addState(state1, &animationGroup);
    stateSwitcher->addState(state2, &animationGroup);

    machine.addState(group);
    machine.setInitialState(group);
    machine.start();

    window.resize(800, 600);
    window.show();

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

    return app.exec();
}

void keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Left:
        break;
    case Qt::Key_Right:
        break;
    case Qt::Key_Down:
        break;
    case Qt::Key_Up:
        break;
    case Qt::Key_Space:
        break;
    case Qt::Key_D:
        qDebug() << "keyPressEvent: D";
        break;
    default:
        break;
    }
}

#include "main.moc"
