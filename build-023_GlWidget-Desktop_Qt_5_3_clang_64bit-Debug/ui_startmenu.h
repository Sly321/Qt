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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startmenu
{
public:

    void setupUi(QWidget *startmenu)
    {
        if (startmenu->objectName().isEmpty())
            startmenu->setObjectName(QStringLiteral("startmenu"));
        startmenu->resize(400, 300);

        retranslateUi(startmenu);

        QMetaObject::connectSlotsByName(startmenu);
    } // setupUi

    void retranslateUi(QWidget *startmenu)
    {
        startmenu->setWindowTitle(QApplication::translate("startmenu", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class startmenu: public Ui_startmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
