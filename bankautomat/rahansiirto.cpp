#include "rahansiirto.h"
#include "ui_rahansiirto.h"

rahansiirto::rahansiirto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rahansiirto)
{
    ui->setupUi(this);
    tyyppi = "";
}

rahansiirto::~rahansiirto()
{
    delete ui;
}

void rahansiirto::on_Credit_Debit_Switch_toggled(bool checked)
{
   if(checked) {
      //credit
      tyyppi = "1";
      ui->labelinfo->setText("credit");
   } else {
       //depit
       tyyppi = "0";
       ui->labelinfo->setText("debit");
   }
}

void rahansiirto::Tulostus(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;
       if(response_data=="true"){
           qDebug()<<"siirto epä onnistui";
           ui->labelsuccees->setText("Siirto epäonnistui");
       }
       else {
           qDebug()<<"siirto läpi";
           ui->labelsuccees->setText("Siirto onnistui");
       }
}


void rahansiirto::setId(const QString &value)
{
    id = value;
    ui->apulabel->setText(id);
}

void rahansiirto::on_btnSiirto_clicked()
{
    qDebug() << tyyppi;
   if(tyyppi == "1") {
       QJsonObject json;
       json.insert("id1",ui->apulabel->text());
       json.insert("id2",ui->lineEdit_Saaja->text());
       json.insert("summa",ui->lineEdit_Summa->text());
       QString site_url="http://localhost:3000/siirto/credit_transfer/";
       QString credentials="newAdmin:newPass";
       QNetworkRequest request((site_url));
       request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
       QByteArray data = credentials.toLocal8Bit().toBase64();
       QString headerData = "Basic " + data;
       request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
       manager = new QNetworkAccessManager(this);
       connect(manager, SIGNAL(finished (QNetworkReply*)),
       this, SLOT(Tulostus(QNetworkReply*)));
       reply = manager->post(request, QJsonDocument(json).toJson());

   }

   if(tyyppi == "0") {
       QJsonObject json;
       json.insert("id1",ui->apulabel->text());
       json.insert("id2",ui->lineEdit_Saaja->text());
       json.insert("summa",ui->lineEdit_Summa->text());
       QString site_url="http://localhost:3000/siirto/debit_transfer/";
       QString credentials="newAdmin:newPass";
       QNetworkRequest request((site_url));
       request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
       QByteArray data = credentials.toLocal8Bit().toBase64();
       QString headerData = "Basic " + data;
       request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
       manager = new QNetworkAccessManager(this);
       connect(manager, SIGNAL(finished (QNetworkReply*)),
       this, SLOT(Tulostus(QNetworkReply*)));
       reply = manager->post(request, QJsonDocument(json).toJson());
   }
}

void rahansiirto::on_btnvalikkoon_clicked()
{
    ui->labelsuccees->setText("");
    ui->lineEdit_Saaja->setText("");
    ui->lineEdit_Summa->setText("");
    this->close();
}

void rahansiirto::on_btn1_clicked()
{
    Number = "1";
    kontaktori(Number);
}

void rahansiirto::on_btn2_clicked()
{
    Number = "2";
    kontaktori(Number);
}

void rahansiirto::on_btn3_clicked()
{
    Number = "3";
    kontaktori(Number);
}

void rahansiirto::on_btn4_clicked()
{
    Number = "4";
    kontaktori(Number);
}

void rahansiirto::on_btn5_clicked()
{
    Number = "5";
    kontaktori(Number);
}

void rahansiirto::on_btn6_clicked()
{
    Number = "6";
    kontaktori(Number);
}

void rahansiirto::on_btn7_clicked()
{
    Number = "7";
    kontaktori(Number);
}

void rahansiirto::on_btn8_clicked()
{
    Number = "8";
    kontaktori(Number);
}

void rahansiirto::on_btn9_clicked()
{
    Number = "9";
    kontaktori(Number);
}

void rahansiirto::on_btn0_clicked()
{
    Number = "0";
    kontaktori(Number);
}

void rahansiirto::kontaktori(const QString)
{
    id2.append(Number);
    mervi = id2.length();
    qDebug() << mervi;
    if(mervi <= 1) {
        ui->lineEdit_Saaja->setText(id2);
    } else {
        summa.append(Number);
        ui->lineEdit_Summa->setText(summa);
    }
}

void rahansiirto::on_btnpoista_clicked()
{
    ui->lineEdit_Saaja->setText("");
    ui->lineEdit_Summa->setText("");
    id2 = "";
    summa = "";
    mervi = 0;
}
