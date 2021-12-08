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

void Nosto::setId(const QString &value)  //haetaan ja piilotetaan id koska voidaan.
{
    id = value;
    ui->label_idTili->setText(id);
}

void Nosto::setTyyppi(const QString &value) //haetaan kortin tyyppi myöhempää käyttöän varten.
{
    tyyppi = value;
}


void Nosto::nosta(QNetworkReply *reply)  //kerrotaan onnistuiko vai eikö nosto
{
    QByteArray response_data=reply->readAll();
       if(response_data=="true"){
           qDebug()<<"siirto epä onnistui";
           ui->labelsuccees->setText("Nosto epäonnistui");
       }
       else {

           qDebug()<<"siirto läpi";
           ui->labelsuccees->setText("Nosto onnistui");

       }
}

void Nosto::on_btn20_clicked() //Aika itsestään selvää mitä nämä ovat. btn(x) kuvastaa nostettavaa summaa.
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

void Nosto::on_btn100_clicked()
{
    maara = "100";
    ui->lineEditNostettavaSumma->setText(maara);
}



void Nosto::on_btnNosta_clicked()
{

      ui->lineEditNostettavaSumma->text();
      qDebug() << "Haluttu määrä "+ maara;
      qDebug() << "Tilin tyyppi 1 credit, 0 debit = "+tyyppi;

      if(tyyppi == "0") {
          //Haetulla tyypillä katsotaan kumpaa proceduuria käytetään.
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

void Nosto::on_btnTakaisin_clicked()   //takaisin valikkoon ja nollataan kaikki
{
    tyyppi = "";
    ui->lineEditNostettavaSumma->setText("");
    this->close();
}




void Nosto::on_btn1_clicked()
{
    Number = "1";
    kontaktori(Number);
}

void Nosto::on_btn2_clicked()
{
    Number = "2";
    kontaktori(Number);
}

void Nosto::on_btn3_clicked()
{
    Number = "3";
    kontaktori(Number);
}

void Nosto::on_btn4_clicked()
{
    Number = "4";
    kontaktori(Number);
}

void Nosto::on_btn5_clicked()
{
    Number = "5";
    kontaktori(Number);
}

void Nosto::on_btn6_clicked()
{
    Number = "6";
    kontaktori(Number);
}

void Nosto::on_btn7_clicked()
{
    Number = "7";
    kontaktori(Number);
}

void Nosto::on_btn8_clicked()
{
    Number = "8";
    kontaktori(Number);
}

void Nosto::on_btn9_clicked()
{
    Number = "9";
    kontaktori(Number);
}

void Nosto::on_btn0_clicked()
{
    Number = "0";
    kontaktori(Number);
}

void Nosto::on_btnTyhjennys_clicked()
{
    ui->lineEditNostettavaSumma->setText("");
    Summa = "";
}

void Nosto::kontaktori(const QString)
{
    Summa.append(Number);
    ui->lineEditNostettavaSumma->setText(Summa);
}
