/********************************************************************************
** Form generated from reading UI file 'startmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTMENU_H
#define UI_STARTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartMenu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;

    void setupUi(QWidget *StartMenu)
    {
        if (StartMenu->objectName().isEmpty())
            StartMenu->setObjectName(QStringLiteral("StartMenu"));
        StartMenu->resize(600, 400);
        widget = new QWidget(StartMenu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(227, 12, 146, 148));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/newgame.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(100, 30));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(StartMenu);

        QMetaObject::connectSlotsByName(StartMenu);
    } // setupUi

    void retranslateUi(QWidget *StartMenu)
    {
        StartMenu->setWindowTitle(QApplication::translate("StartMenu", "Form", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("StartMenu", "Options", 0));
        pushButton_4->setText(QApplication::translate("StartMenu", "Connect", 0));
        pushButton_3->setText(QApplication::translate("StartMenu", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class StartMenu: public Ui_StartMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
