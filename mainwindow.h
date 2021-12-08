#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "valikko.h"
#include "freezer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void myTimerSlot();
    void myPinTimerSlot();

private slots:

     void loginSlot (QNetworkReply *reply);

     void on_btnLogin_clicked();



private:

        int tilinumero();
        Ui::MainWindow *ui;
        QNetworkAccessManager *manager;
        QNetworkAccessManager *oneBookManager;
        QNetworkAccessManager *loginManager;
        QNetworkReply *reply;
        valikko *objvalikko;
        QString idTili;        
        int vaaraPin = 0;
        freezer *objfreezer;
        };

#endif // MAINWINDOW_H
