/********************************************************************************
** Form generated from reading UI file 'mode2.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODE2_H
#define UI_MODE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_mode2
{
public:

    void setupUi(QDialog *mode2)
    {
        if (mode2->objectName().isEmpty())
            mode2->setObjectName(QStringLiteral("mode2"));
        mode2->resize(600, 650);

        retranslateUi(mode2);

        QMetaObject::connectSlotsByName(mode2);
    } // setupUi

    void retranslateUi(QDialog *mode2)
    {
        mode2->setWindowTitle(QApplication::translate("mode2", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class mode2: public Ui_mode2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE2_H
