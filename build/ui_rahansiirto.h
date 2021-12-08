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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rahansiirto
{
public:
    QLabel *label;
    QRadioButton *Credit_Debit_Switch;
    QLabel *label_2;
    QLabel *labelinfo;
    QLineEdit *lineEdit_Saaja;
    QLineEdit *lineEdit_Summa;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *apulabel;
    QPushButton *btnSiirto;
    QPushButton *btnvalikkoon;
    QLabel *labelsuccees;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *btnpoista;

    void setupUi(QWidget *rahansiirto)
    {
        if (rahansiirto->objectName().isEmpty())
            rahansiirto->setObjectName(QStringLiteral("rahansiirto"));
        rahansiirto->resize(417, 397);
        label = new QLabel(rahansiirto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 311, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Credit_Debit_Switch = new QRadioButton(rahansiirto);
        Credit_Debit_Switch->setObjectName(QStringLiteral("Credit_Debit_Switch"));
        Credit_Debit_Switch->setGeometry(QRect(370, 20, 16, 31));
        QFont font1;
        font1.setPointSize(12);
        Credit_Debit_Switch->setFont(font1);
        label_2 = new QLabel(rahansiirto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 20, 141, 31));
        QFont font2;
        font2.setPointSize(10);
        label_2->setFont(font2);
        labelinfo = new QLabel(rahansiirto);
        labelinfo->setObjectName(QStringLiteral("labelinfo"));
        labelinfo->setGeometry(QRect(310, 50, 71, 31));
        labelinfo->setFont(font1);
        lineEdit_Saaja = new QLineEdit(rahansiirto);
        lineEdit_Saaja->setObjectName(QStringLiteral("lineEdit_Saaja"));
        lineEdit_Saaja->setGeometry(QRect(40, 130, 131, 31));
        lineEdit_Summa = new QLineEdit(rahansiirto);
        lineEdit_Summa->setObjectName(QStringLiteral("lineEdit_Summa"));
        lineEdit_Summa->setGeometry(QRect(40, 210, 131, 31));
        label_3 = new QLabel(rahansiirto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 95, 131, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(rahansiirto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 175, 131, 21));
        label_4->setFont(font1);
        apulabel = new QLabel(rahansiirto);
        apulabel->setObjectName(QStringLiteral("apulabel"));
        apulabel->setGeometry(QRect(0, 520, 16, 16));
        QFont font3;
        font3.setPointSize(1);
        apulabel->setFont(font3);
        btnSiirto = new QPushButton(rahansiirto);
        btnSiirto->setObjectName(QStringLiteral("btnSiirto"));
        btnSiirto->setGeometry(QRect(40, 270, 131, 21));
        btnSiirto->setFont(font1);
        btnvalikkoon = new QPushButton(rahansiirto);
        btnvalikkoon->setObjectName(QStringLiteral("btnvalikkoon"));
        btnvalikkoon->setGeometry(QRect(40, 320, 231, 31));
        btnvalikkoon->setFont(font1);
        labelsuccees = new QLabel(rahansiirto);
        labelsuccees->setObjectName(QStringLiteral("labelsuccees"));
        labelsuccees->setGeometry(QRect(200, 270, 191, 21));
        labelsuccees->setFont(font1);
        btn1 = new QPushButton(rahansiirto);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(200, 130, 41, 31));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        btn1->setFont(font4);
        btn2 = new QPushButton(rahansiirto);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(240, 130, 41, 31));
        btn2->setFont(font4);
        btn3 = new QPushButton(rahansiirto);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(280, 130, 41, 31));
        btn3->setFont(font4);
        btn4 = new QPushButton(rahansiirto);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(200, 160, 41, 31));
        btn4->setFont(font4);
        btn5 = new QPushButton(rahansiirto);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(240, 160, 41, 31));
        btn5->setFont(font4);
        btn6 = new QPushButton(rahansiirto);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(280, 160, 41, 31));
        btn6->setFont(font4);
        btn7 = new QPushButton(rahansiirto);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(200, 190, 41, 31));
        btn7->setFont(font4);
        btn8 = new QPushButton(rahansiirto);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setGeometry(QRect(240, 190, 41, 31));
        btn8->setFont(font4);
        btn9 = new QPushButton(rahansiirto);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setGeometry(QRect(280, 190, 41, 31));
        btn9->setFont(font4);
        btn0 = new QPushButton(rahansiirto);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setGeometry(QRect(200, 220, 121, 21));
        btn0->setFont(font4);
        btnpoista = new QPushButton(rahansiirto);
        btnpoista->setObjectName(QStringLiteral("btnpoista"));
        btnpoista->setGeometry(QRect(320, 130, 41, 31));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        btnpoista->setFont(font5);

        retranslateUi(rahansiirto);

        QMetaObject::connectSlotsByName(rahansiirto);
    } // setupUi

    void retranslateUi(QWidget *rahansiirto)
    {
        rahansiirto->setWindowTitle(QApplication::translate("rahansiirto", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("rahansiirto", "Rahan siirto", Q_NULLPTR));
        Credit_Debit_Switch->setText(QString());
        label_2->setText(QApplication::translate("rahansiirto", "Credit / Depit valinta ->", Q_NULLPTR));
        labelinfo->setText(QString());
        label_3->setText(QApplication::translate("rahansiirto", "Saaja", Q_NULLPTR));
        label_4->setText(QApplication::translate("rahansiirto", "Summa", Q_NULLPTR));
        apulabel->setText(QString());
        btnSiirto->setText(QApplication::translate("rahansiirto", "Siirr\303\244", Q_NULLPTR));
        btnvalikkoon->setText(QApplication::translate("rahansiirto", "Takaisin valikkoon", Q_NULLPTR));
        labelsuccees->setText(QString());
        btn1->setText(QApplication::translate("rahansiirto", "1", Q_NULLPTR));
        btn2->setText(QApplication::translate("rahansiirto", "2", Q_NULLPTR));
        btn3->setText(QApplication::translate("rahansiirto", "3", Q_NULLPTR));
        btn4->setText(QApplication::translate("rahansiirto", "4", Q_NULLPTR));
        btn5->setText(QApplication::translate("rahansiirto", "5", Q_NULLPTR));
        btn6->setText(QApplication::translate("rahansiirto", "6", Q_NULLPTR));
        btn7->setText(QApplication::translate("rahansiirto", "7", Q_NULLPTR));
        btn8->setText(QApplication::translate("rahansiirto", "8", Q_NULLPTR));
        btn9->setText(QApplication::translate("rahansiirto", "9", Q_NULLPTR));
        btn0->setText(QApplication::translate("rahansiirto", "0", Q_NULLPTR));
        btnpoista->setText(QApplication::translate("rahansiirto", "Poista", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rahansiirto: public Ui_rahansiirto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAHANSIIRTO_H
