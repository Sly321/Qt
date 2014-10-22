/********************************************************************************
** Form generated from reading UI file 'qkeycollide.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QKEYCOLLIDE_H
#define UI_QKEYCOLLIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QKeyCollide
{
public:

    void setupUi(QWidget *QKeyCollide)
    {
        if (QKeyCollide->objectName().isEmpty())
            QKeyCollide->setObjectName(QStringLiteral("QKeyCollide"));
        QKeyCollide->resize(400, 300);

        retranslateUi(QKeyCollide);

        QMetaObject::connectSlotsByName(QKeyCollide);
    } // setupUi

    void retranslateUi(QWidget *QKeyCollide)
    {
        QKeyCollide->setWindowTitle(QApplication::translate("QKeyCollide", "QKeyCollide", 0));
    } // retranslateUi

};

namespace Ui {
    class QKeyCollide: public Ui_QKeyCollide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QKEYCOLLIDE_H
