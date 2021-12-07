#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tilitapahtumat)
{
    ui->setupUi(this);
}

Tilitapahtumat::~Tilitapahtumat()
{
    delete ui;
}

void Tilitapahtumat::info()
{
    QString site_url="http://localhost:3000/tapahtumat/" +id;
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

void Tilitapahtumat::Tulostus(QNetworkReply *reply)
{
       QByteArray response_data=reply->readAll();
       QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();
       foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       tapahtuma+=QString::number(json_obj["maara"].toInt())+" - euroa \rPaikka - "+json_obj["paikka"].toString()+"\rAika - "+json_obj["aika"].toString()+"\r";
       ui->txtinfo->setText(tapahtuma);
       tapahtuma = "";
       }
}

void Tilitapahtumat::setId(const QString &value)
{
    id = value;
    info();
}


void Tilitapahtumat::on_btnTakaisinValikkoon_clicked()
{
    this->close();
}