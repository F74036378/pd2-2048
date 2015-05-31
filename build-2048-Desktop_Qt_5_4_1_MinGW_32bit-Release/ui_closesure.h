/********************************************************************************
** Form generated from reading UI file 'closesure.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSESURE_H
#define UI_CLOSESURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_closesure
{
public:

    void setupUi(QDialog *closesure)
    {
        if (closesure->objectName().isEmpty())
            closesure->setObjectName(QStringLiteral("closesure"));
        closesure->resize(350, 200);

        retranslateUi(closesure);

        QMetaObject::connectSlotsByName(closesure);
    } // setupUi

    void retranslateUi(QDialog *closesure)
    {
        closesure->setWindowTitle(QApplication::translate("closesure", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class closesure: public Ui_closesure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSESURE_H
