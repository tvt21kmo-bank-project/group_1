/********************************************************************************
** Form generated from reading UI file 'pinkoodinvaihto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINKOODINVAIHTO_H
#define UI_PINKOODINVAIHTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinKoodinVaihto
{
public:

    void setupUi(QWidget *PinKoodinVaihto)
    {
        if (PinKoodinVaihto->objectName().isEmpty())
            PinKoodinVaihto->setObjectName(QStringLiteral("PinKoodinVaihto"));
        PinKoodinVaihto->resize(400, 300);

        retranslateUi(PinKoodinVaihto);

        QMetaObject::connectSlotsByName(PinKoodinVaihto);
    } // setupUi

    void retranslateUi(QWidget *PinKoodinVaihto)
    {
        PinKoodinVaihto->setWindowTitle(QApplication::translate("PinKoodinVaihto", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PinKoodinVaihto: public Ui_PinKoodinVaihto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODINVAIHTO_H
