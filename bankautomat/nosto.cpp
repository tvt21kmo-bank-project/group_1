#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::setId(const QString &value)
{
    id = value;
    ui->label_idTili->setText(id);
}

void Nosto::nosta(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
       QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();
       foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       saldo+="Saldo: "+QString::number(json_obj["debit"].toInt());
       qDebug() << saldo;
       }
}

void Nosto::on_btn20_clicked()
{

  maara = "20";
  ui->lineEditNostettavaSumma->setText(maara);

}

void Nosto::on_btn40_clicked()
{
  maara = "50";
  ui->lineEditNostettavaSumma->setText(maara);

}

void Nosto::on_btn60_clicked()
{
  maara = "60";
  ui->lineEditNostettavaSumma->setText(maara);

}

void Nosto::on_btn80_clicked()
{
  maara = "80";
  ui->lineEditNostettavaSumma->setText(maara);

}

void Nosto::on_btnNosta_clicked()
{
      qDebug() << maara;
      qDebug() << tyyppi;

      if(tyyppi == "0") {
      QJsonObject json;
      json.insert("id1",ui->label_idTili->text());
      json.insert("summa",ui->lineEditNostettavaSumma->text());
      QString site_url="http://localhost:3000/nosto/debit_withdraw/";
      QString credentials="newAdmin:newPass";
      QNetworkRequest request((site_url));
      request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
      QByteArray data = credentials.toLocal8Bit().toBase64();
      QString headerData = "Basic " + data;
      request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
      manager = new QNetworkAccessManager(this);
      connect(manager, SIGNAL(finished (QNetworkReply*)),
      this, SLOT(nosta(QNetworkReply*)));
      reply = manager->post(request, QJsonDocument(json).toJson());
                         }

      if(tyyppi == "1") {
          QJsonObject json;
          json.insert("id1",ui->label_idTili->text());
          json.insert("summa",ui->lineEditNostettavaSumma->text());
          QString site_url="http://localhost:3000/nosto/credit_withdraw/";
          QString credentials="newAdmin:newPass";
          QNetworkRequest request((site_url));
          request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
          QByteArray data = credentials.toLocal8Bit().toBase64();
          QString headerData = "Basic " + data;
          request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
          manager = new QNetworkAccessManager(this);
          connect(manager, SIGNAL(finished (QNetworkReply*)),
          this, SLOT(nosta(QNetworkReply*)));
          reply = manager->post(request, QJsonDocument(json).toJson());
      }

}

void Nosto::on_btnTakaisin_clicked()
{

    tyyppi = "";
    ui->lineEditNostettavaSumma->setText("");
    ui->lineEditMuuSumma->setText("");
    this->close();
}

void Nosto::setTyyppi(const QString &value)
{
    tyyppi = value;
}

void Nosto::on_btn100_clicked()
{
    maara = "100";
    ui->lineEditNostettavaSumma->setText(maara);
}

void Nosto::on_btnMuu_clicked()
{
    if(tyyppi == "0") {
    QJsonObject json;
    json.insert("id1",ui->label_idTili->text());
    json.insert("summa",ui->lineEditMuuSumma->text());
    QString site_url="http://localhost:3000/nosto/debit_withdraw/";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(nosta(QNetworkReply*)));
    reply = manager->post(request, QJsonDocument(json).toJson());
                       }

    if(tyyppi == "1") {
        QJsonObject json;
        json.insert("id1",ui->label_idTili->text());
        json.insert("summa",ui->lineEditMuuSumma->text());
        QString site_url="http://localhost:3000/nosto/credit_withdraw/";
        QString credentials="newAdmin:newPass";
        QNetworkRequest request((site_url));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        QByteArray data = credentials.toLocal8Bit().toBase64();
        QString headerData = "Basic " + data;
        request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
        manager = new QNetworkAccessManager(this);
        connect(manager, SIGNAL(finished (QNetworkReply*)),
        this, SLOT(nosta(QNetworkReply*)));
        reply = manager->post(request, QJsonDocument(json).toJson());
    }
}
