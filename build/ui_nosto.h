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
    QPushButton *btn9;
    QPushButton *btn6;
    QPushButton *btn3;
    QPushButton *btn1;
    QPushButton *btn0;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn5;
    QPushButton *btn4;
    QPushButton *btn2;
    QPushButton *btnTyhjennys;

    void setupUi(QWidget *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QStringLiteral("Nosto"));
        Nosto->resize(546, 420);
        btn20 = new QPushButton(Nosto);
        btn20->setObjectName(QStringLiteral("btn20"));
        btn20->setGeometry(QRect(120, 170, 80, 31));
        QFont font;
        font.setPointSize(12);
        btn20->setFont(font);
        lineEditNostettavaSumma = new QLineEdit(Nosto);
        lineEditNostettavaSumma->setObjectName(QStringLiteral("lineEditNostettavaSumma"));
        lineEditNostettavaSumma->setGeometry(QRect(120, 125, 261, 31));
        btn40 = new QPushButton(Nosto);
        btn40->setObjectName(QStringLiteral("btn40"));
        btn40->setGeometry(QRect(120, 200, 80, 31));
        btn40->setFont(font);
        btn60 = new QPushButton(Nosto);
        btn60->setObjectName(QStringLiteral("btn60"));
        btn60->setGeometry(QRect(120, 230, 80, 31));
        btn60->setFont(font);
        btn80 = new QPushButton(Nosto);
        btn80->setObjectName(QStringLiteral("btn80"));
        btn80->setGeometry(QRect(120, 260, 80, 31));
        btn80->setFont(font);
        btnNosta = new QPushButton(Nosto);
        btnNosta->setObjectName(QStringLiteral("btnNosta"));
        btnNosta->setGeometry(QRect(120, 330, 261, 31));
        btnNosta->setFont(font);
        btnTakaisin = new QPushButton(Nosto);
        btnTakaisin->setObjectName(QStringLiteral("btnTakaisin"));
        btnTakaisin->setGeometry(QRect(120, 370, 261, 31));
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
        btn100->setGeometry(QRect(120, 290, 80, 31));
        btn100->setFont(font);
        label = new QLabel(Nosto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 65, 331, 21));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        labelsuccees = new QLabel(Nosto);
        labelsuccees->setObjectName(QStringLiteral("labelsuccees"));
        labelsuccees->setGeometry(QRect(410, 330, 131, 31));
        labelsuccees->setFont(font);
        label_succees1 = new QLabel(Nosto);
        label_succees1->setObjectName(QStringLiteral("label_succees1"));
        label_succees1->setGeometry(QRect(400, 320, 131, 31));
        label_succees1->setFont(font);
        label_2 = new QLabel(Nosto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 90, 371, 31));
        label_2->setFont(font2);
        btn9 = new QPushButton(Nosto);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setGeometry(QRect(330, 250, 51, 41));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        btn9->setFont(font3);
        btn6 = new QPushButton(Nosto);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(330, 210, 51, 41));
        btn6->setFont(font3);
        btn3 = new QPushButton(Nosto);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(330, 170, 51, 41));
        btn3->setFont(font3);
        btn1 = new QPushButton(Nosto);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(230, 170, 51, 41));
        btn1->setFont(font3);
        btn0 = new QPushButton(Nosto);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setGeometry(QRect(230, 290, 101, 31));
        btn0->setFont(font3);
        btn7 = new QPushButton(Nosto);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(230, 250, 51, 41));
        btn7->setFont(font3);
        btn8 = new QPushButton(Nosto);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setGeometry(QRect(280, 250, 51, 41));
        btn8->setFont(font3);
        btn5 = new QPushButton(Nosto);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(280, 210, 51, 41));
        btn5->setFont(font3);
        btn4 = new QPushButton(Nosto);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(230, 210, 51, 41));
        btn4->setFont(font3);
        btn2 = new QPushButton(Nosto);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(280, 170, 51, 41));
        btn2->setFont(font3);
        btnTyhjennys = new QPushButton(Nosto);
        btnTyhjennys->setObjectName(QStringLiteral("btnTyhjennys"));
        btnTyhjennys->setGeometry(QRect(330, 290, 51, 31));

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
        label->setText(QApplication::translate("Nosto", "Valitse tai n\303\244pp\303\244ile nostettava", Q_NULLPTR));
        labelsuccees->setText(QString());
        label_succees1->setText(QString());
        label_2->setText(QApplication::translate("Nosto", "Summa", Q_NULLPTR));
        btn9->setText(QApplication::translate("Nosto", "9", Q_NULLPTR));
        btn6->setText(QApplication::translate("Nosto", "6", Q_NULLPTR));
        btn3->setText(QApplication::translate("Nosto", "3", Q_NULLPTR));
        btn1->setText(QApplication::translate("Nosto", "1", Q_NULLPTR));
        btn0->setText(QApplication::translate("Nosto", "0", Q_NULLPTR));
        btn7->setText(QApplication::translate("Nosto", "7", Q_NULLPTR));
        btn8->setText(QApplication::translate("Nosto", "8", Q_NULLPTR));
        btn5->setText(QApplication::translate("Nosto", "5", Q_NULLPTR));
        btn4->setText(QApplication::translate("Nosto", "4", Q_NULLPTR));
        btn2->setText(QApplication::translate("Nosto", "2", Q_NULLPTR));
        btnTyhjennys->setText(QApplication::translate("Nosto", "Tyhjenn\303\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
