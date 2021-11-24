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

private slots:
    void on_BtnPaluuValikkoon_clicked();
    void Tulostus(QNetworkReply *reply);
    void on_btnTilitiedot_clicked();

private:

    Ui::Saldokysely *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
};

#endif // SALDOKYSELY_H
