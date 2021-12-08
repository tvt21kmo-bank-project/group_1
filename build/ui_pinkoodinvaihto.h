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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinKoodinVaihto
{
public:
    QLabel *label;
    QLabel *labelapu;
    QLineEdit *lineEditPIN;
    QPushButton *btnVaihda;
    QPushButton *btnValikko;
    QLabel *label_2;
    QPushButton *btn0;
    QPushButton *btn6;
    QPushButton *btn4;
    QPushButton *btn7;
    QPushButton *btn5;
    QPushButton *btn1;
    QPushButton *btn3;
    QPushButton *btn9;
    QPushButton *btn8;
    QPushButton *btn2;
    QPushButton *btntyhjennys;

    void setupUi(QWidget *PinKoodinVaihto)
    {
        if (PinKoodinVaihto->objectName().isEmpty())
            PinKoodinVaihto->setObjectName(QStringLiteral("PinKoodinVaihto"));
        PinKoodinVaihto->resize(472, 395);
        label = new QLabel(PinKoodinVaihto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 311, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        labelapu = new QLabel(PinKoodinVaihto);
        labelapu->setObjectName(QStringLiteral("labelapu"));
        labelapu->setGeometry(QRect(0, 380, 16, 20));
        QFont font1;
        font1.setPointSize(1);
        labelapu->setFont(font1);
        lineEditPIN = new QLineEdit(PinKoodinVaihto);
        lineEditPIN->setObjectName(QStringLiteral("lineEditPIN"));
        lineEditPIN->setGeometry(QRect(80, 130, 231, 31));
        lineEditPIN->setInputMethodHints(Qt::ImhHiddenText);
        btnVaihda = new QPushButton(PinKoodinVaihto);
        btnVaihda->setObjectName(QStringLiteral("btnVaihda"));
        btnVaihda->setGeometry(QRect(80, 180, 80, 21));
        QFont font2;
        font2.setPointSize(12);
        btnVaihda->setFont(font2);
        btnValikko = new QPushButton(PinKoodinVaihto);
        btnValikko->setObjectName(QStringLiteral("btnValikko"));
        btnValikko->setGeometry(QRect(80, 220, 80, 21));
        btnValikko->setFont(font2);
        label_2 = new QLabel(PinKoodinVaihto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 90, 261, 21));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        label_2->setFont(font3);
        btn0 = new QPushButton(PinKoodinVaihto);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setGeometry(QRect(160, 300, 151, 31));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        btn0->setFont(font4);
        btn6 = new QPushButton(PinKoodinVaihto);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(260, 220, 51, 41));
        btn6->setFont(font4);
        btn4 = new QPushButton(PinKoodinVaihto);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(160, 220, 51, 41));
        btn4->setFont(font4);
        btn7 = new QPushButton(PinKoodinVaihto);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(160, 260, 51, 41));
        btn7->setFont(font4);
        btn5 = new QPushButton(PinKoodinVaihto);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(210, 220, 51, 41));
        btn5->setFont(font4);
        btn1 = new QPushButton(PinKoodinVaihto);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(160, 180, 51, 41));
        btn1->setFont(font4);
        btn3 = new QPushButton(PinKoodinVaihto);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(260, 180, 51, 41));
        btn3->setFont(font4);
        btn9 = new QPushButton(PinKoodinVaihto);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setGeometry(QRect(260, 260, 51, 41));
        btn9->setFont(font4);
        btn8 = new QPushButton(PinKoodinVaihto);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setGeometry(QRect(210, 260, 51, 41));
        btn8->setFont(font4);
        btn2 = new QPushButton(PinKoodinVaihto);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(210, 180, 51, 41));
        btn2->setFont(font4);
        btntyhjennys = new QPushButton(PinKoodinVaihto);
        btntyhjennys->setObjectName(QStringLiteral("btntyhjennys"));
        btntyhjennys->setGeometry(QRect(320, 180, 81, 31));
        btntyhjennys->setFont(font2);

        retranslateUi(PinKoodinVaihto);

        QMetaObject::connectSlotsByName(PinKoodinVaihto);
    } // setupUi

    void retranslateUi(QWidget *PinKoodinVaihto)
    {
        PinKoodinVaihto->setWindowTitle(QApplication::translate("PinKoodinVaihto", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("PinKoodinVaihto", "Kortin PIN-koodin vaihto", Q_NULLPTR));
        labelapu->setText(QString());
        btnVaihda->setText(QApplication::translate("PinKoodinVaihto", "Vaihda", Q_NULLPTR));
        btnValikko->setText(QApplication::translate("PinKoodinVaihto", "Valikkoon", Q_NULLPTR));
        label_2->setText(QApplication::translate("PinKoodinVaihto", "Sy\303\266t\303\244 uusi PIN-koodi", Q_NULLPTR));
        btn0->setText(QApplication::translate("PinKoodinVaihto", "0", Q_NULLPTR));
        btn6->setText(QApplication::translate("PinKoodinVaihto", "6", Q_NULLPTR));
        btn4->setText(QApplication::translate("PinKoodinVaihto", "4", Q_NULLPTR));
        btn7->setText(QApplication::translate("PinKoodinVaihto", "7", Q_NULLPTR));
        btn5->setText(QApplication::translate("PinKoodinVaihto", "5", Q_NULLPTR));
        btn1->setText(QApplication::translate("PinKoodinVaihto", "1", Q_NULLPTR));
        btn3->setText(QApplication::translate("PinKoodinVaihto", "3", Q_NULLPTR));
        btn9->setText(QApplication::translate("PinKoodinVaihto", "9", Q_NULLPTR));
        btn8->setText(QApplication::translate("PinKoodinVaihto", "8", Q_NULLPTR));
        btn2->setText(QApplication::translate("PinKoodinVaihto", "2", Q_NULLPTR));
        btntyhjennys->setText(QApplication::translate("PinKoodinVaihto", "Tyhjenn\303\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PinKoodinVaihto: public Ui_PinKoodinVaihto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODINVAIHTO_H
