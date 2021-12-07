#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

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

private:

        int tilinumero();
        Ui::MainWindow *ui;
        QNetworkAccessManager *manager;
        QNetworkAccessManager *oneBookManager;
        QNetworkAccessManager *loginManager;
        QNetworkReply *reply;
        valikko *objvalikko;
        QString idTili;


};

#endif // MAINWINDOW_H
