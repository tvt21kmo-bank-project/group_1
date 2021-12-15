#ifndef RAHANSIIRTO_H
#define RAHANSIIRTO_H

#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>

namespace Ui {
class rahansiirto;
}

class rahansiirto : public QWidget
{
    Q_OBJECT

public:
    explicit rahansiirto(QWidget *parent = 0);
    ~rahansiirto();

    void setId(const QString &value);

    void setTyyppi(const QString &value);

private slots:

    void Tulostus(QNetworkReply *reply);

    void on_btnSiirto_clicked();

    void on_btnvalikkoon_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btn0_clicked();

    void on_btnpoista_clicked();


    void on_btnOK_clicked();

private:
    void kontaktori(const QString);
    Ui::rahansiirto *ui;
    QString tyyppi;
    QString id;
    QString information;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QString Number;
    QString id2;
    QString summa;
    int Paavo;
    int mervi;

};

#endif // RAHANSIIRTO_H
