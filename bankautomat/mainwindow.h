#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "freezer.h"
#include "valikko.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

     void loginSlot (QNetworkReply *reply);

     void on_btnLogin_clicked();

     void on_btn5_clicked();

     void on_btn1_clicked();

     void on_bt2_clicked();

     void on_btn3_clicked();

     void on_btn4_clicked();

     void on_btn6_clicked();

     void on_btn7_clicked();

     void on_btn8_clicked();

     void on_btn9_clicked();

     void on_btn0_clicked();

     void on_btntyhjennys_clicked();

private:
        int vaaraPin;
        int mervi;
        QString Korttinumero;
        QString PIN;
        QString Number;
        Ui::MainWindow *ui;
        QNetworkAccessManager *manager;
        QNetworkAccessManager *oneBookManager;
        QNetworkAccessManager *loginManager;
        QNetworkReply *reply;
        valikko *objvalikko;
        freezer *objfreezer;
        QString idTili;
        void Kontaktori(const QString);



};

#endif // MAINWINDOW_H
