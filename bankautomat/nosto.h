#ifndef NOSTO_H
#define NOSTO_H

#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>



namespace Ui {
class Nosto;
}

class Nosto : public QWidget
{
    Q_OBJECT

public:
    explicit Nosto(QWidget *parent = 0);
    ~Nosto();

    void setId(const QString &value);

    void setTyyppi(const QString &value);

private slots:

    void nosta(QNetworkReply *reply);

    void on_btn20_clicked();

    void on_btnNosta_clicked();

    void on_btn40_clicked();

    void on_btn60_clicked();

    void on_btn80_clicked();

    void on_btnTakaisin_clicked();


    void on_btn100_clicked();

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

    void on_btnTyhjennys_clicked();

private:
    Ui::Nosto *ui;
    QString id;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QString tyyppi;
    QString maara;
    QString saldo;
    QString tiedot;
    void kontaktori(const QString);
    QString Number;
    QString Summa;
};

#endif // NOSTO_H
