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


void Saldokysely::setTyyppi(const QString &value) // haetaan kortin tyyppi jatkoa varten
{
    Tyyppi = value;
    info();
}

void Saldokysely::setId(const QString &value)  // haetaan kortin id jatkoa varten
{
    id = value;
}

void Saldokysely::info() //tyypin mukaan katsotaan mitä käyetään
{
    qDebug() << "tilin tyyppi 1 credit 0 debit = "+Tyyppi;
    qDebug() << "tilin id = "+id;

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
        this, SLOT(Tulostus(QNetworkReply*)));
        reply = manager->get(request);
    }

}



void Saldokysely::Tulostus(QNetworkReply *reply)  // tässä tulostetaan kortin tyypin mukaan infoa saldosta
{


       if (Tyyppi == "0") {

           QByteArray response_data=reply->readAll();
              QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
              QJsonArray json_array = json_doc.array();
              foreach (const QJsonValue &value, json_array) {
              QJsonObject json_obj = value.toObject();
           saldo+="Saldo: "+QString::number(json_obj["debit"].toInt());
           qDebug() << saldo;
           ui->txtSaldo->setText(saldo);
              }

       } if (Tyyppi == "1") {

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



}

void Saldokysely::on_BtnPaluuValikkoon_clicked()
{

    //nollailua ja valikkoon.
    ui->txtSaldo->setText("");
    saldo = "";
    this->close();
}
