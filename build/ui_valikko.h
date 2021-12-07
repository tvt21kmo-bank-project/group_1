/********************************************************************************
** Form generated from reading UI file 'valikko.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_H
#define UI_VALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_valikko
{
public:
    QLabel *label;
    QPushButton *btnSaldoKysely;
    QPushButton *btnRahanSiirto;
    QPushButton *btnPininVaihto;
    QPushButton *btnNosto;
    QPushButton *btnKirjauduUlos;
    QLabel *labelinfo;
    QPushButton *btnTilitapahtumat;

    void setupUi(QWidget *valikko)
    {
        if (valikko->objectName().isEmpty())
            valikko->setObjectName(QStringLiteral("valikko"));
        valikko->resize(608, 469);
        label = new QLabel(valikko);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 161, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btnSaldoKysely = new QPushButton(valikko);
        btnSaldoKysely->setObjectName(QStringLiteral("btnSaldoKysely"));
        btnSaldoKysely->setGeometry(QRect(60, 120, 141, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        btnSaldoKysely->setFont(font1);
        btnRahanSiirto = new QPushButton(valikko);
        btnRahanSiirto->setObjectName(QStringLiteral("btnRahanSiirto"));
        btnRahanSiirto->setGeometry(QRect(60, 180, 141, 41));
        btnRahanSiirto->setFont(font1);
        btnPininVaihto = new QPushButton(valikko);
        btnPininVaihto->setObjectName(QStringLiteral("btnPininVaihto"));
        btnPininVaihto->setGeometry(QRect(60, 300, 141, 41));
        btnPininVaihto->setFont(font1);
        btnNosto = new QPushButton(valikko);
        btnNosto->setObjectName(QStringLiteral("btnNosto"));
        btnNosto->setGeometry(QRect(60, 240, 141, 41));
        btnNosto->setFont(font1);
        btnKirjauduUlos = new QPushButton(valikko);
        btnKirjauduUlos->setObjectName(QStringLiteral("btnKirjauduUlos"));
        btnKirjauduUlos->setGeometry(QRect(60, 360, 141, 41));
        btnKirjauduUlos->setFont(font1);
        labelinfo = new QLabel(valikko);
        labelinfo->setObjectName(QStringLiteral("labelinfo"));
        labelinfo->setGeometry(QRect(250, 20, 311, 41));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        labelinfo->setFont(font2);
        btnTilitapahtumat = new QPushButton(valikko);
        btnTilitapahtumat->setObjectName(QStringLiteral("btnTilitapahtumat"));
        btnTilitapahtumat->setGeometry(QRect(240, 120, 141, 41));
        btnTilitapahtumat->setFont(font1);

        retranslateUi(valikko);

        QMetaObject::connectSlotsByName(valikko);
    } // setupUi

    void retranslateUi(QWidget *valikko)
    {
        valikko->setWindowTitle(QApplication::translate("valikko", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("valikko", "Tervetuloa", Q_NULLPTR));
        btnSaldoKysely->setText(QApplication::translate("valikko", "Saldokysely", Q_NULLPTR));
        btnRahanSiirto->setText(QApplication::translate("valikko", "Rahansiirto", Q_NULLPTR));
        btnPininVaihto->setText(QApplication::translate("valikko", "Pin-koodin vaihto", Q_NULLPTR));
        btnNosto->setText(QApplication::translate("valikko", "Nosto", Q_NULLPTR));
        btnKirjauduUlos->setText(QApplication::translate("valikko", "Kirjaudu ulos", Q_NULLPTR));
        labelinfo->setText(QString());
        btnTilitapahtumat->setText(QApplication::translate("valikko", "Tilitapahtumat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class valikko: public Ui_valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
