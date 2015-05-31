/********************************************************************************
** Form generated from reading UI file 'maingame.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGAME_H
#define UI_MAINGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_maingame
{
public:

    void setupUi(QDialog *maingame)
    {
        if (maingame->objectName().isEmpty())
            maingame->setObjectName(QStringLiteral("maingame"));
        maingame->resize(600, 650);

        retranslateUi(maingame);

        QMetaObject::connectSlotsByName(maingame);
    } // setupUi

    void retranslateUi(QDialog *maingame)
    {
        maingame->setWindowTitle(QApplication::translate("maingame", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class maingame: public Ui_maingame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGAME_H
