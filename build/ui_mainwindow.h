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
        label->setGeometry(QRect(110, 30, 471, 101));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        lineEditKorttinumero = new QLineEdit(centralWidget);
        lineEditKorttinumero->setObjectName(QStringLiteral("lineEditKorttinumero"));
        lineEditKorttinumero->setGeometry(QRect(180, 200, 291, 41));
        lineEditKorttinumero->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEditKorttinumero->setEchoMode(QLineEdit::Password);
        lineEditPIN = new QLineEdit(centralWidget);
        lineEditPIN->setObjectName(QStringLiteral("lineEditPIN"));
        lineEditPIN->setGeometry(QRect(180, 300, 291, 41));
        lineEditPIN->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEditPIN->setEchoMode(QLineEdit::Password);
        btnLogin = new QPushButton(centralWidget);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(200, 420, 251, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        btnLogin->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 160, 291, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 265, 291, 21));
        label_3->setFont(font2);
        txtKertoja = new QLabel(centralWidget);
        txtKertoja->setObjectName(QStringLiteral("txtKertoja"));
        txtKertoja->setGeometry(QRect(200, 370, 251, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setUnderline(true);
        txtKertoja->setFont(font3);
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
