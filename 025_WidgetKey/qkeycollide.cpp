#include "qkeycollide.h"
#include "draw.h"
#include "startmenu.h"

#include <QStackedWidget>
#include <QtWidgets>
#include <qDebug>
#include <QMessageBox>
#include <QPalette>
#include <QLayout>


QKeyCollide::QKeyCollide(QWidget *parent)
{
    QGraphicsScene scene;
    scene.addRect(QRectF(0, 0, 100, 200), QPen(Qt::black), QBrush(Qt::green));

    this->setWindowTitle("QKeyCollide");
    this->setMinimumSize(QSize(600, 400));
    //this->setStyleSheet("QWidget { opacity: 10; }");

    windows = new QStackedWidget(this);
    startmenu = new StartMenu();

    QWidget *test2 = new QWidget();
    test2->setWindowTitle("test2");

    QLabel *label2 = new QLabel("Test2\nIn the terminal, you can also see all keys i registered.");
    QVBoxLayout *test2Layout = new QVBoxLayout;
    test2Layout->addWidget(label2);
    test2->setLayout(test2Layout);

    drawWidget = new Draw();
    drawWidget->setWindowTitle("test3");

    QLabel *label3 = new QLabel("Test3\nLast Widget, implemented pantEvent here");
    QVBoxLayout *test3Layout = new QVBoxLayout;
    test3Layout->addWidget(label3);
    drawWidget->setLayout(test3Layout);

    windows->addWidget(startmenu);
    windows->addWidget(test2);
    windows->addWidget(drawWidget);

    QLabel *description = new QLabel("Use also the keys 1 - 3 to switch window content\nuse Enter to get into the console line, enter '/help' for infos");

    //QLabel *testImage = new QLabel();
    //testImage->setPixmap("/images/background/hills_clean.png");
    //testImage->setPixmap(QPixmap(":/images/background/hills_clean.png"));

    windows->setGeometry(QRect(0,0,600,400));
    QVBoxLayout *wdg1 = new QVBoxLayout;
    wdg1->addWidget(windows);

    QVBoxLayout *mainLayout = new QVBoxLayout(windows);

    line = new QLineEdit;
    line->setStyleSheet("QLineEdit { background-color: rgba(0,0,0, 70%); color: white; }");
    line->setVisible(false);
    //connect(line, SIGNAL(returnPressed()), this, SLOT(chatLostFocus()));

    text = new QTextEdit;
    text->setStyleSheet("QTextEdit { background-color: rgba(0,0,0, 70%); color: white; }");
    text->setVisible(false);
    text->setReadOnly(true);
    text->setText("Welcome!");

    mainLayout->addSpacing(300);
    mainLayout->addWidget(description);
    mainLayout->addWidget(text);
    mainLayout->addWidget(line);
    this->setLayout(mainLayout);
}

void QKeyCollide::keyPressEvent(QKeyEvent *e) {
    switch (e->key()) {

        /* Numeric Keys */
    case Qt::Key_0:
        qDebug() << "keyPressEvent: 0";
        break;
    case Qt::Key_1:
        qDebug() << "keyPressEvent: 1";
        windows->setCurrentIndex(0);
        break;
    case Qt::Key_2:
        qDebug() << "keyPressEvent: 2";
        windows->setCurrentIndex(1);
        break;
    case Qt::Key_3:
        qDebug() << "keyPressEvent: 3";
        windows->setCurrentIndex(2);
        break;
    case Qt::Key_4:
        qDebug() << "keyPressEvent: 4";
        break;
    case Qt::Key_5:
        qDebug() << "keyPressEvent: 5";
        break;
    case Qt::Key_6:
        qDebug() << "keyPressEvent: 6";
        break;
    case Qt::Key_7:
        qDebug() << "keyPressEvent: 7";
        break;
    case Qt::Key_8:
        qDebug() << "keyPressEvent: 8";
        break;
    case Qt::Key_9:
        qDebug() << "keyPressEvent: 9";
        break;

        /* Arrow Keys */
    case Qt::Key_Left:
        qDebug() << "keyPressEvent: left";
        drawWidget->moveLeft();
        break;
    case Qt::Key_Right:
        qDebug() << "keyPressEvent: right";
        drawWidget->moveRight();
        break;
    case Qt::Key_Down:
        qDebug() << "keyPressEvent: down";
        drawWidget->moveDown();
        break;
    case Qt::Key_Up:
        qDebug() << "keyPressEvent: up";
        drawWidget->moveUp();
        break;

        /* Alphabetic Keys */
    case Qt::Key_A:
        qDebug() << "keyPressEvent: A";
        break;
    case Qt::Key_B:
        qDebug() << "keyPressEvent: B";
        break;
    case Qt::Key_C:
        qDebug() << "keyPressEvent: C";
        break;
    case Qt::Key_D:
        qDebug() << "keyPressEvent: D";
        break;
    case Qt::Key_E:
        qDebug() << "keyPressEvent: E";
        break;
    case Qt::Key_F:
        qDebug() << "keyPressEvent: F";
        break;
    case Qt::Key_G:
        qDebug() << "keyPressEvent: G";
        break;
    case Qt::Key_H:
        qDebug() << "keyPressEvent: H";
        break;
    case Qt::Key_I:
        qDebug() << "keyPressEvent: I";
        break;
    case Qt::Key_J:
        qDebug() << "keyPressEvent: J";
        break;
    case Qt::Key_K:
        qDebug() << "keyPressEvent: K";
        break;
    case Qt::Key_L:
        qDebug() << "keyPressEvent: L";
        break;
    case Qt::Key_M:
        qDebug() << "keyPressEvent: M";
        break;
    case Qt::Key_N:
        qDebug() << "keyPressEvent: N";
        break;
    case Qt::Key_O:
        qDebug() << "keyPressEvent: O";
        break;
    case Qt::Key_P:
        qDebug() << "keyPressEvent: P";
        break;
    case Qt::Key_Q:
        qDebug() << "keyPressEvent: Q";
        break;
    case Qt::Key_R:
        qDebug() << "keyPressEvent: R";
        break;
    case Qt::Key_S:
        qDebug() << "keyPressEvent: S";
        break;
    case Qt::Key_T:
        qDebug() << "keyPressEvent: T";
        break;
    case Qt::Key_U:
        qDebug() << "keyPressEvent: U";
        break;
    case Qt::Key_V:
        qDebug() << "keyPressEvent: V";
        break;
    case Qt::Key_W:
        qDebug() << "keyPressEvent: W";
        break;
    case Qt::Key_X:
        qDebug() << "keyPressEvent: X";
        break;
    case Qt::Key_Y:
        qDebug() << "keyPressEvent: Y";
        text->setVisible(true);
        break;
    case Qt::Key_Z:
        qDebug() << "keyPressEvent: Z";
        break;

        /* General Keys */
    case Qt::Key_Space:
        qDebug() << "keyPressEvent: space";
        break;
    case Qt::Key_Escape:
        qDebug() << "keyPressEvent: esc";
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Closing", "Do you really want to close?",  QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            qApp->quit();
        }
        break;
    case Qt::Key_Return:
        qDebug() << "keyPressEvent: enter";        
        if(line->isVisible()) {
            hideChat();
        } else {
            line->setVisible(true);
            text->setVisible(true);
            line->setFocus();
        }
        break;
    default:
        QWidget::keyPressEvent(e);
    }
}

void QKeyCollide::paintEvent(QPaintEvent *e) {
    //qDebug() << "paintEvent in qkeycollide.cpp";
}

void QKeyCollide::hideChat() {
    if (line->isVisible()) {
        /* Chat wird kleiner manchmal ?! */

        if (line->text() != "") {
            text->setText(text->toPlainText() + "\n" + line->text());
        }
        text->verticalScrollBar()->setValue(text->verticalScrollBar()->maximum());

        if(line->text() == "/1") {
            windows->setCurrentIndex(0);
        } else if (line->text() == "/2") {
            windows->setCurrentIndex(1);
        } else if (line->text() == "/3") {
            windows->setCurrentIndex(2);
        } else if (line->text() == "/fps") {
            drawWidget->setFpsVisible(!drawWidget->isFpsVisible());
        } else if (line->text() == "/quit") {
            this->close();
        } else if (line->text() == "/help") {
            QMessageBox::information(this, "Help",
            "This Console line supports: \n\n/1 - /3 : for switching window states\n/quit  : for closing the window\n/fps   : for showing the fps in the 3rd window\n/clearchat : for clearing the chat window");
        } else if (line->text() == "/clearchat") {
            text->clear();
        }

        line->clear();
        qDebug() << "hideChat()";
        line->setVisible(false);
        text->setVisible(false);
        this->setFocus();
    }
}

void QKeyCollide::keyReleaseEvent(QKeyEvent *e) {
    switch (e->key()) {
    case Qt::Key_Y:
        qDebug() << "keyReleaseEvent: Y";
        if (!line->isVisible()) {
            text->setVisible(false);
        }
        break;
    }
}

void QKeyCollide::chatLostFocus() {
    qDebug() << "chatLostFocus()";
    line->setVisible(false);
    text->setVisible(false);
    this->setFocus();
}
