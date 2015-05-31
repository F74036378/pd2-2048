/********************************************************************************
** Form generated from reading UI file 'loose.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOSE_H
#define UI_LOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_loose
{
public:

    void setupUi(QDialog *loose)
    {
        if (loose->objectName().isEmpty())
            loose->setObjectName(QStringLiteral("loose"));
        loose->resize(400, 300);

        retranslateUi(loose);

        QMetaObject::connectSlotsByName(loose);
    } // setupUi

    void retranslateUi(QDialog *loose)
    {
        loose->setWindowTitle(QApplication::translate("loose", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class loose: public Ui_loose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOSE_H
