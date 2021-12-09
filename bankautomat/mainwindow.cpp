#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objvalikko=new valikko;
    idTili = "";
    Number = "";
    vaaraPin = 0;
    objfreezer = new freezer;

}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
    delete objvalikko;
    objvalikko=nullptr;
    delete objfreezer;
    objfreezer = nullptr;
}



void MainWindow::on_btnLogin_clicked()
{
        QJsonObject json; //luodaan JSON objekti ja lisätään data
        json.insert("Korttinumero",ui->lineEditKorttinumero->text());
        json.insert("PIN",ui->lineEditPIN->text());
        QString site_url="http://localhost:3000/kirjautuminen";
        QString credentials="newAdmin:newPass";
        QNetworkRequest request((site_url));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        QByteArray data = credentials.toLocal8Bit().toBase64();
        QString headerData = "Basic " + data;
        request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
        loginManager = new QNetworkAccessManager(this);

        connect(loginManager, SIGNAL(finished (QNetworkReply*)),
        this, SLOT(loginSlot(QNetworkReply*)));

        reply = loginManager->post(request, QJsonDocument(json).toJson());

}


void MainWindow::loginSlot(QNetworkReply *reply)
{

       QByteArray response_data=reply->readAll();
       QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();

       foreach (const QJsonValue &value, json_array)
            {
              QJsonObject json_obj = value.toObject();
              idTili+=QString::number(json_obj["tili_idTili"].toInt());
            }

            //seuraavalla lainilla tehdään käytännössä samakuin pekan esimerkillä. mutta käytetään truen siasta idtiliä varmistukseen.

        if(idTili > 0){
            qDebug()<<"Oikea tunnus ...avaa form";
            objvalikko->setIdTili(idTili);
            objvalikko->show();

            //Nollailua
            vaaraPin = 0;
            ui->txtKertoja->setText("");
            idTili = "";
            ui->lineEditPIN->setText("");
            ui->lineEditKorttinumero->setText("");
            PIN="";
            Korttinumero="";


                      }
        else          {
            ui->txtKertoja->setText("Tunnus ja salasana ei täsmää");
            vaaraPin++; // jääkaappi formi
            //Nollailua
            ui->lineEditPIN->setText("");
            ui->lineEditKorttinumero->setText("");
            qDebug()<<"tunnus ja salasana ei täsmää";
            PIN="";
            Korttinumero="";

            if (vaaraPin >= 3)
                      {
                         vaaraPin = 0;
                         objfreezer->showFullScreen();
                  }
                      }

}


void MainWindow::on_btn1_clicked()
{
    Number = "1";
    Kontaktori(Number);
}

void MainWindow::on_bt2_clicked()
{
    Number = "2";
    Kontaktori(Number);

}

void MainWindow::on_btn3_clicked()
{
    Number = "3";
    Kontaktori(Number);

}

void MainWindow::on_btn4_clicked()
{
    Number = "4";
    Kontaktori(Number);

}

void MainWindow::on_btn5_clicked()
{
    Number = "5";
    Kontaktori(Number);

}


void MainWindow::on_btn6_clicked()
{
    Number = "6";
    Kontaktori(Number);

}

void MainWindow::on_btn7_clicked()
{
    Number = "7";
    Kontaktori(Number);
}

void MainWindow::on_btn8_clicked()
{
    Number = "8";
    Kontaktori(Number);

}

void MainWindow::on_btn9_clicked()
{
    Number = "9";
    Kontaktori(Number);

}

void MainWindow::on_btn0_clicked()
{
    Number = "0";
    Kontaktori(Number);


}

void MainWindow::Kontaktori(const QString)
{
    Korttinumero.append(Number);
    mervi = Korttinumero.length();
    if(mervi <= 4) {
        ui->lineEditKorttinumero->setText(Korttinumero);
    } else if (mervi > 4) {
        PIN.append(Number);
        ui->lineEditPIN->setText(PIN);
    }

}

void MainWindow::on_btntyhjennys_clicked()
{
    Korttinumero = "";
    PIN = "";
    ui->lineEditKorttinumero->setText("");
    ui->lineEditPIN->setText("");
}
