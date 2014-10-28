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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartMenu
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_6;

    void setupUi(QWidget *StartMenu)
    {
        if (StartMenu->objectName().isEmpty())
            StartMenu->setObjectName(QStringLiteral("StartMenu"));
        StartMenu->resize(800, 600);
        gridLayout = new QGridLayout(StartMenu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(StartMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(StartMenu);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(StartMenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(StartMenu);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(StartMenu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(305, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(305, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(StartMenu);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 2, 1, 1, 1);


        retranslateUi(StartMenu);

        QMetaObject::connectSlotsByName(StartMenu);
    } // setupUi

    void retranslateUi(QWidget *StartMenu)
    {
        StartMenu->setWindowTitle(QApplication::translate("StartMenu", "Form", 0));
        pushButton->setText(QApplication::translate("StartMenu", "Player vs KI", 0));
        pushButton_5->setText(QApplication::translate("StartMenu", "Player vs Player", 0));
        pushButton_2->setText(QApplication::translate("StartMenu", "Options", 0));
        pushButton_4->setText(QApplication::translate("StartMenu", "Connect", 0));
        pushButton_3->setText(QApplication::translate("StartMenu", "Quit", 0));
        pushButton_6->setText(QApplication::translate("StartMenu", "test - Auswahlmenu", 0));
    } // retranslateUi

};

namespace Ui {
    class StartMenu: public Ui_StartMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
