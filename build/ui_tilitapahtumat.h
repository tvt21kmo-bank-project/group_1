/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QPushButton *btnTakaisinValikkoon;
    QLabel *label;
    QTextEdit *txtinfo;

    void setupUi(QWidget *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QStringLiteral("Tilitapahtumat"));
        Tilitapahtumat->resize(429, 370);
        btnTakaisinValikkoon = new QPushButton(Tilitapahtumat);
        btnTakaisinValikkoon->setObjectName(QStringLiteral("btnTakaisinValikkoon"));
        btnTakaisinValikkoon->setGeometry(QRect(40, 310, 351, 31));
        QFont font;
        font.setPointSize(12);
        btnTakaisinValikkoon->setFont(font);
        label = new QLabel(Tilitapahtumat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 15, 361, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        txtinfo = new QTextEdit(Tilitapahtumat);
        txtinfo->setObjectName(QStringLiteral("txtinfo"));
        txtinfo->setGeometry(QRect(40, 50, 351, 251));
        txtinfo->setFont(font);

        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QWidget *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QApplication::translate("Tilitapahtumat", "Form", Q_NULLPTR));
        btnTakaisinValikkoon->setText(QApplication::translate("Tilitapahtumat", " Takaisin valikkoon", Q_NULLPTR));
        label->setText(QApplication::translate("Tilitapahtumat", "Viimeisin tilitapahtumasi", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
