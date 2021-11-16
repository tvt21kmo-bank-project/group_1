#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objvalikko=new valikko;
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
    delete objvalikko;
    objvalikko=nullptr;
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
        qDebug()<<response_data;
        if(response_data=="true"){
            qDebug()<<"Oikea tunnus ...avaa form";
            objvalikko->show();
        }
        else {
            ui->lineEditPIN->setText("");
            ui->lineEditKorttinumero->setText("");
            qDebug()<<"tunnus ja salasana ei täsmää";
        }
}


