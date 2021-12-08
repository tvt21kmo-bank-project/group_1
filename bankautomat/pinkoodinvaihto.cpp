#include "pinkoodinvaihto.h"
#include "ui_pinkoodinvaihto.h"

PinKoodinVaihto::PinKoodinVaihto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PinKoodinVaihto)
{
    ui->setupUi(this);
}

PinKoodinVaihto::~PinKoodinVaihto()
{
    delete ui;
}

void PinKoodinVaihto::Tulosta(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
       if(response_data=="true"){
            qDebug()<<"Vaihto epäonnistui!";
            ui->lineEditPIN->setText("");
       }
       else {
           qDebug()<<"Vaihto onnistui!";
            ui->lineEditPIN->setText("");
            this->close();
       }
}

void PinKoodinVaihto::on_btnVaihda_clicked()
{
    QJsonObject json;
    json.insert("PIN",ui->lineEditPIN->text());
    QString site_url="http://localhost:3000/Pinkoodinvaihto/"+id;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(Tulosta(QNetworkReply*)));
    reply = manager->put(request, QJsonDocument(json).toJson());
}

void PinKoodinVaihto::on_btn1_clicked()
{
    Number="1";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn2_clicked()
{
    Number="2";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn3_clicked()
{
    Number="3";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn4_clicked()
{
    Number="4";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn5_clicked()
{
    Number="5";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn6_clicked()
{
    Number="6";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn7_clicked()
{
    Number="7";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn8_clicked()
{
    Number="8";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn9_clicked()
{
    Number="9";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btn0_clicked()
{
    Number="0";
    kontaktori(Number);
}

void PinKoodinVaihto::on_btntyhjennys_clicked()
{
    ui->lineEditPIN->setText("");
    PIN = "";
}

void PinKoodinVaihto::setId(const QString &value)
{
    id = value;
}

void PinKoodinVaihto::kontaktori(const QString)
{
    PIN.append(Number);
    ui->lineEditPIN->setText(PIN);

}

void PinKoodinVaihto::on_btnValikko_clicked()
{
    ui->lineEditPIN->setText("");
    this->close();
}
