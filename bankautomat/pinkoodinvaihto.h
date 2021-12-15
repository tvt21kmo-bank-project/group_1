#ifndef PINKOODINVAIHTO_H
#define PINKOODINVAIHTO_H

#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>

namespace Ui {
class PinKoodinVaihto;
}

class PinKoodinVaihto : public QWidget
{
    Q_OBJECT

public:
    explicit PinKoodinVaihto(QWidget *parent = 0);
    ~PinKoodinVaihto();

    void setId(const QString &value);

private slots:

    void Tulosta(QNetworkReply *reply);

    void on_btnVaihda_clicked();

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

    void on_btntyhjennys_clicked();

    void on_btnValikko_clicked();

private:
    Ui::PinKoodinVaihto *ui;
    QString Number;
    QString PIN;
    QString id;
    int Paavo;
    void kontaktori(const QString);
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
};

#endif // PINKOODINVAIHTO_H
