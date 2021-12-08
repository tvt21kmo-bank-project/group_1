#ifndef SALDOKYSELY_H
#define SALDOKYSELY_H


#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>


namespace Ui {
class Saldokysely;
}

class Saldokysely : public QWidget
{
    Q_OBJECT

public:
    explicit Saldokysely(QWidget *parent = 0);
    ~Saldokysely();

    void setId(const QString &value);

    void setTyyppi(const QString &value);

private slots:
    void on_BtnPaluuValikkoon_clicked();
    void Tulostus(QNetworkReply *reply);
    void info();
private:

    Ui::Saldokysely *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QString saldo;
    QString id;
    QString Tyyppi;
};

#endif // SALDOKYSELY_H
