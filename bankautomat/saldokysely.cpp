#include "saldokysely.h"
#include "ui_saldokysely.h"


Saldokysely::Saldokysely(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Saldokysely)
{
    ui->setupUi(this);

}

Saldokysely::~Saldokysely()
{
    delete ui;

}


void Saldokysely::info()
{
    qDebug() << Tyyppi;
    qDebug() << id;

    if(Tyyppi == "0") {
        QString site_url="http://localhost:3000/debit/" +id;
        QString credentials="newAdmin:newPass";
        QNetworkRequest request((site_url));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        QByteArray data = credentials.toLocal8Bit().toBase64();
        QString headerData = "Basic " + data;
        request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
        manager = new QNetworkAccessManager(this);
        connect(manager, SIGNAL(finished (QNetworkReply*)),
        this, SLOT(Tulostus(QNetworkReply*)));
        reply = manager->get(request);

    }
    if(Tyyppi == "1"){
        QString site_url="http://localhost:3000/credit/" +id;
        QString credentials="newAdmin:newPass";
        QNetworkRequest request((site_url));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        QByteArray data = credentials.toLocal8Bit().toBase64();
        QString headerData = "Basic " + data;
        request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
        manager = new QNetworkAccessManager(this);
        connect(manager, SIGNAL(finished (QNetworkReply*)),
        this, SLOT(Tulostus2(QNetworkReply*)));
        reply = manager->get(request);
    }

}

void Saldokysely::setTyyppi(const QString &value)
{
    Tyyppi = value;
    info();
}

void Saldokysely::setId(const QString &value)
{
    id = value;
}

void Saldokysely::Tulostus(QNetworkReply *reply)
{

    QByteArray response_data=reply->readAll();
       QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();
       foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       saldo+="Saldo: "+QString::number(json_obj["debit"].toInt());
       qDebug() << saldo;
       ui->txtSaldo->setText(saldo);


       }
}

void Saldokysely::Tulostus2(QNetworkReply *reply)
{
       QByteArray response_data=reply->readAll();
       QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();
       foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       saldo+="credit: "+QString::number(json_obj["credit"].toInt())+" debit: "+QString::number(json_obj["debit"].toInt());
       qDebug() << saldo;
       ui->txtSaldo->setText(saldo);

       }
}




void Saldokysely::on_BtnPaluuValikkoon_clicked()
{
    saldo = "";
    this->close();
}
