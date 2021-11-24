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


void Saldokysely::on_btnTilitiedot_clicked()
{
    QString site_url="http://localhost:3000/saldo/1";
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

void Saldokysely::Tulostus(QNetworkReply *reply)
{

       QByteArray response_data=reply->readAll();
       QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();
       QString book;
       foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       book+=QString::number(json_obj["Saldo"].toInt());
       }

       qDebug()<<book;
       ui->txtEdTiliTiedot->setText(response_data);
       reply->deleteLater();
       manager->deleteLater();

}




void Saldokysely::on_BtnPaluuValikkoon_clicked()
{
    this->close();
}
