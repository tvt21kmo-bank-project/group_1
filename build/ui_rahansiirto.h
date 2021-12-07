/********************************************************************************
** Form generated from reading UI file 'rahansiirto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAHANSIIRTO_H
#define UI_RAHANSIIRTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rahansiirto
{
public:

    void setupUi(QWidget *rahansiirto)
    {
        if (rahansiirto->objectName().isEmpty())
            rahansiirto->setObjectName(QStringLiteral("rahansiirto"));
        rahansiirto->resize(400, 300);

        retranslateUi(rahansiirto);

        QMetaObject::connectSlotsByName(rahansiirto);
    } // setupUi

    void retranslateUi(QWidget *rahansiirto)
    {
        rahansiirto->setWindowTitle(QApplication::translate("rahansiirto", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rahansiirto: public Ui_rahansiirto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAHANSIIRTO_H
