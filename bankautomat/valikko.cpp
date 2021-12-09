#include "valikko.h"
#include "ui_valikko.h"

valikko::valikko(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::valikko)
{
    ui->setupUi(this);
    objNosto = new Nosto;
    objPinKoodinVaihto = new PinKoodinVaihto;
    objRahanSiirto = new rahansiirto;
    objSaldokysely = new Saldokysely;
    objTilitapahtumat = new Tilitapahtumat;
}

valikko::~valikko()
{
    delete ui;
    ui = nullptr;

    delete objNosto;
    objNosto = nullptr;

    delete objPinKoodinVaihto;
    objPinKoodinVaihto = nullptr;

    delete objRahanSiirto;
    objRahanSiirto = nullptr;

    delete objSaldokysely;
    objSaldokysely = nullptr;

    delete objTilitapahtumat;
    objTilitapahtumat = nullptr;


}

void valikko::on_btnNosto_clicked() //reitti nostoon
{
    objNosto->setId(idTili);
    objNosto->setTyyppi(tyyppi);
    objNosto->show();
}

void valikko::on_btnSaldoKysely_clicked() //reitti saldon kysymiseen
{
    objSaldokysely->setId(idTili);
    objSaldokysely->setTyyppi(Valinta);
    objSaldokysely->show();
}

void valikko::on_btnRahanSiirto_clicked() //reitti rahansiirtoon
{
    objRahanSiirto->setId(idTili);
    objRahanSiirto->setTyyppi(tyyppi);
    objRahanSiirto->show();
}

void valikko::on_btnPininVaihto_clicked() //reitti pinin vaihtoon
{
    objPinKoodinVaihto->setId(idTili);
    objPinKoodinVaihto->show();
    ui->txtAsiakas->setText("");
    asiakas=("");
    this->close();
}


void valikko::on_btnTilitapahtumat_clicked() // reitti tilitapahtumiin
{
    objTilitapahtumat->setId(idTili);
    objTilitapahtumat->show();
}

void valikko::on_btnKirjauduUlos_clicked() //kirjaudutaan ulos
{
    tyyppi = "";
    asiakas = "";
    tilinro = "";
    ui->label_Credit_Debit->setText("");
    ui->txtAsiakas->setText("");
    ui->labelinfo->setText("");
    this->close();
}

void valikko::info()  //tällä haetaan Asiakas
{
    QString site_url="http://localhost:3000/asiakas/" +idTili;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(tulostainfo(QNetworkReply*)));
    reply = manager->get(request);
}


void valikko::info2() //haetaan tyyppi
{
    QString site_url="http://localhost:3000/tili/" +idTili;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(haetyyppi(QNetworkReply*)));
    reply = manager->get(request);
}

void valikko::tulostainfo(QNetworkReply *reply) //tällä tulostetaan asiakas tiedot
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    asiakas+="Etunimi - "+json_obj["Etunimi"].toString()+"\rSukunimi - "+json_obj["Sukunimi"].toString()+"\rOsoite - "+json_obj["Osoite"].toString()+"\r";
    ui->txtAsiakas->setText(asiakas);
    }
}


void valikko::haetyyppi(QNetworkReply *reply) // credit ja debit tyypin haku sekä tilinro
{
    Valinta = "";
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    Valinta+=QString::number(json_obj["tyyppi"].toInt());
    tilinro+=json_obj["Tilinumero"].toString();
    ui->labelinfo->setText(tilinro);
    qDebug()<< "Kortin tyyppi 1 credit, 0 debit ="+Valinta;
    }
    if(Valinta=="0") {
        ui->Credit_Debit_Switch->hide();
        ui->labelkertoja->setText("");
        tyyppi = "0";
    } if(Valinta=="1") {
        ui->Credit_Debit_Switch->show();
        ui->labelkertoja->setText("Valitse credit vai debit ");
    }

}

void valikko::setIdTili(const QString &value) //tällä haetaan tilin id jota voidaan käyttää urllässä
{
    idTili = value;
    qDebug() << "tilin id = "+idTili;
    info();
    info2();
}




void valikko::on_Credit_Debit_Switch_toggled(bool checked)
{
    if(checked) {
       //credit
       tyyppi = "1";
       ui->label_Credit_Debit->setText("Credit");

    } else {
        //debit
        tyyppi = "0";
        ui->label_Credit_Debit->setText("Debit");

    }
}
