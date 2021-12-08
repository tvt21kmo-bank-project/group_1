/********************************************************************************
** Form generated from reading UI file 'saldokysely.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDOKYSELY_H
#define UI_SALDOKYSELY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Saldokysely
{
public:
    QPushButton *BtnPaluuValikkoon;
    QLabel *label;
    QLabel *txtSaldo;

    void setupUi(QWidget *Saldokysely)
    {
        if (Saldokysely->objectName().isEmpty())
            Saldokysely->setObjectName(QStringLiteral("Saldokysely"));
        Saldokysely->resize(398, 356);
        BtnPaluuValikkoon = new QPushButton(Saldokysely);
        BtnPaluuValikkoon->setObjectName(QStringLiteral("BtnPaluuValikkoon"));
        BtnPaluuValikkoon->setGeometry(QRect(30, 210, 341, 31));
        QFont font;
        font.setPointSize(12);
        BtnPaluuValikkoon->setFont(font);
        label = new QLabel(Saldokysely);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 121, 21));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        txtSaldo = new QLabel(Saldokysely);
        txtSaldo->setObjectName(QStringLiteral("txtSaldo"));
        txtSaldo->setGeometry(QRect(30, 80, 341, 81));
        txtSaldo->setFont(font1);

        retranslateUi(Saldokysely);

        QMetaObject::connectSlotsByName(Saldokysely);
    } // setupUi

    void retranslateUi(QWidget *Saldokysely)
    {
        Saldokysely->setWindowTitle(QApplication::translate("Saldokysely", "Form", Q_NULLPTR));
        BtnPaluuValikkoon->setText(QApplication::translate("Saldokysely", "Takaisin valikkoon", Q_NULLPTR));
        label->setText(QApplication::translate("Saldokysely", "Tilin Saldo", Q_NULLPTR));
        txtSaldo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Saldokysely: public Ui_Saldokysely {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDOKYSELY_H
