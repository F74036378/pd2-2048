/********************************************************************************
** Form generated from reading UI file 'panick.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANICK_H
#define UI_PANICK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_panick
{
public:

    void setupUi(QDialog *panick)
    {
        if (panick->objectName().isEmpty())
            panick->setObjectName(QStringLiteral("panick"));
        panick->resize(600, 650);

        retranslateUi(panick);

        QMetaObject::connectSlotsByName(panick);
    } // setupUi

    void retranslateUi(QDialog *panick)
    {
        panick->setWindowTitle(QApplication::translate("panick", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class panick: public Ui_panick {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANICK_H
