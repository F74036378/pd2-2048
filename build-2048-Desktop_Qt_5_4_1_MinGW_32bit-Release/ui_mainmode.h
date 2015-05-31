/********************************************************************************
** Form generated from reading UI file 'mainmode.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMODE_H
#define UI_MAINMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_mainmode
{
public:

    void setupUi(QDialog *mainmode)
    {
        if (mainmode->objectName().isEmpty())
            mainmode->setObjectName(QStringLiteral("mainmode"));
        mainmode->resize(400, 300);

        retranslateUi(mainmode);

        QMetaObject::connectSlotsByName(mainmode);
    } // setupUi

    void retranslateUi(QDialog *mainmode)
    {
        mainmode->setWindowTitle(QApplication::translate("mainmode", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class mainmode: public Ui_mainmode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMODE_H
