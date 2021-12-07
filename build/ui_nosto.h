/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QPushButton *btn20;
    QLineEdit *lineEditNostettavaSumma;
    QPushButton *btn40;
    QPushButton *btn60;
    QPushButton *btn80;
    QPushButton *btnNosta;
    QPushButton *btnTakaisin;
    QLabel *label_idTili;
    QPushButton *btn100;
    QLabel *label;
    QLabel *labelsuccees;
    QLabel *label_succees1;
    QLabel *label_2;

    void setupUi(QWidget *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QStringLiteral("Nosto"));
        Nosto->resize(546, 473);
        btn20 = new QPushButton(Nosto);
        btn20->setObjectName(QStringLiteral("btn20"));
        btn20->setGeometry(QRect(120, 175, 80, 31));
        QFont font;
        font.setPointSize(12);
        btn20->setFont(font);
        lineEditNostettavaSumma = new QLineEdit(Nosto);
        lineEditNostettavaSumma->setObjectName(QStringLiteral("lineEditNostettavaSumma"));
        lineEditNostettavaSumma->setGeometry(QRect(120, 125, 261, 31));
        btn40 = new QPushButton(Nosto);
        btn40->setObjectName(QStringLiteral("btn40"));
        btn40->setGeometry(QRect(210, 175, 80, 31));
        btn40->setFont(font);
        btn60 = new QPushButton(Nosto);
        btn60->setObjectName(QStringLiteral("btn60"));
        btn60->setGeometry(QRect(300, 175, 80, 31));
        btn60->setFont(font);
        btn80 = new QPushButton(Nosto);
        btn80->setObjectName(QStringLiteral("btn80"));
        btn80->setGeometry(QRect(120, 225, 80, 31));
        btn80->setFont(font);
        btnNosta = new QPushButton(Nosto);
        btnNosta->setObjectName(QStringLiteral("btnNosta"));
        btnNosta->setGeometry(QRect(120, 280, 261, 31));
        btnNosta->setFont(font);
        btnTakaisin = new QPushButton(Nosto);
        btnTakaisin->setObjectName(QStringLiteral("btnTakaisin"));
        btnTakaisin->setGeometry(QRect(120, 330, 261, 31));
        btnTakaisin->setFont(font);
        label_idTili = new QLabel(Nosto);
        label_idTili->setObjectName(QStringLiteral("label_idTili"));
        label_idTili->setGeometry(QRect(0, 460, 16, 21));
        QFont font1;
        font1.setPointSize(1);
        label_idTili->setFont(font1);
        label_idTili->setInputMethodHints(Qt::ImhHiddenText);
        btn100 = new QPushButton(Nosto);
        btn100->setObjectName(QStringLiteral("btn100"));
        btn100->setGeometry(QRect(210, 225, 80, 31));
        btn100->setFont(font);
        label = new QLabel(Nosto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 65, 261, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        labelsuccees = new QLabel(Nosto);
        labelsuccees->setObjectName(QStringLiteral("labelsuccees"));
        labelsuccees->setGeometry(QRect(390, 280, 131, 31));
        labelsuccees->setFont(font);
        label_succees1 = new QLabel(Nosto);
        label_succees1->setObjectName(QStringLiteral("label_succees1"));
        label_succees1->setGeometry(QRect(400, 310, 131, 31));
        label_succees1->setFont(font);
        label_2 = new QLabel(Nosto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 90, 281, 31));
        label_2->setFont(font2);

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QWidget *Nosto)
    {
        Nosto->setWindowTitle(QApplication::translate("Nosto", "Form", Q_NULLPTR));
        btn20->setText(QApplication::translate("Nosto", "20", Q_NULLPTR));
        btn40->setText(QApplication::translate("Nosto", "50", Q_NULLPTR));
        btn60->setText(QApplication::translate("Nosto", "60", Q_NULLPTR));
        btn80->setText(QApplication::translate("Nosto", "80", Q_NULLPTR));
        btnNosta->setText(QApplication::translate("Nosto", "Nosta", Q_NULLPTR));
        btnTakaisin->setText(QApplication::translate("Nosto", "Takaisin valikkoon", Q_NULLPTR));
        label_idTili->setText(QString());
        btn100->setText(QApplication::translate("Nosto", "100", Q_NULLPTR));
        label->setText(QApplication::translate("Nosto", "Valitse haluamasi summa", Q_NULLPTR));
        labelsuccees->setText(QString());
        label_succees1->setText(QString());
        label_2->setText(QApplication::translate("Nosto", "Kirjoittamalla saat muun summan", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
