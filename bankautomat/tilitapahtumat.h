#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *parent = 0);
    ~Tilitapahtumat();

    void setId(const QString &value);

private slots:
    void on_btnTakaisinValikkoon_clicked();
    void Tulostus(QNetworkReply *reply);
private:
    Ui::Tilitapahtumat *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    void info();
    QString id;
    QString tapahtuma;
};

#endif // TILITAPAHTUMAT_H
