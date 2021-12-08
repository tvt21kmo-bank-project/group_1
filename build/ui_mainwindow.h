/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEditKorttinumero;
    QLineEdit *lineEditPIN;
    QPushButton *btnLogin;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *txtKertoja;
    QPushButton *btn1;
    QPushButton *bt2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(671, 545);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 471, 101));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        lineEditKorttinumero = new QLineEdit(centralWidget);
        lineEditKorttinumero->setObjectName(QStringLiteral("lineEditKorttinumero"));
        lineEditKorttinumero->setGeometry(QRect(180, 140, 291, 41));
        lineEditKorttinumero->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEditKorttinumero->setEchoMode(QLineEdit::Password);
        lineEditPIN = new QLineEdit(centralWidget);
        lineEditPIN->setObjectName(QStringLiteral("lineEditPIN"));
        lineEditPIN->setGeometry(QRect(180, 220, 291, 41));
        lineEditPIN->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEditPIN->setEchoMode(QLineEdit::Password);
        btnLogin = new QPushButton(centralWidget);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(200, 440, 251, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        btnLogin->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 110, 291, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 190, 291, 21));
        label_3->setFont(font2);
        txtKertoja = new QLabel(centralWidget);
        txtKertoja->setObjectName(QStringLiteral("txtKertoja"));
        txtKertoja->setGeometry(QRect(410, 270, 251, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setUnderline(true);
        txtKertoja->setFont(font3);
        btn1 = new QPushButton(centralWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(250, 270, 51, 41));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        btn1->setFont(font4);
        bt2 = new QPushButton(centralWidget);
        bt2->setObjectName(QStringLiteral("bt2"));
        bt2->setGeometry(QRect(300, 270, 51, 41));
        bt2->setFont(font4);
        btn3 = new QPushButton(centralWidget);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(350, 270, 51, 41));
        btn3->setFont(font4);
        btn4 = new QPushButton(centralWidget);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(250, 310, 51, 41));
        btn4->setFont(font4);
        btn5 = new QPushButton(centralWidget);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(300, 310, 51, 41));
        btn5->setFont(font4);
        btn6 = new QPushButton(centralWidget);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(350, 310, 51, 41));
        btn6->setFont(font4);
        btn7 = new QPushButton(centralWidget);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(250, 350, 51, 41));
        btn7->setFont(font4);
        btn8 = new QPushButton(centralWidget);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setGeometry(QRect(300, 350, 51, 41));
        btn8->setFont(font4);
        btn9 = new QPushButton(centralWidget);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setGeometry(QRect(350, 350, 51, 41));
        btn9->setFont(font4);
        btn0 = new QPushButton(centralWidget);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setGeometry(QRect(300, 390, 51, 41));
        btn0->setFont(font4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "KVG NATIONAL BANK", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("MainWindow", "Kirjaudu sis\303\244\303\244n", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Korttinumero", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PIN", Q_NULLPTR));
        txtKertoja->setText(QString());
        btn1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        bt2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        btn3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        btn4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        btn5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        btn6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        btn7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        btn8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        btn9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        btn0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
