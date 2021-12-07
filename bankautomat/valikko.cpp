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
    objSaldokysely->setTyyppi(tyyppi);
    objSaldokysely->show();
}

void valikko::on_btnRahanSiirto_clicked() //reitti rahansiirtoon
{
    objRahanSiirto->show();
}

void valikko::on_btnPininVaihto_clicked() //reitti pinin vaihtoon
{
    objPinKoodinVaihto->show();
}


void valikko::on_btnTilitapahtumat_clicked() // reitti tilitapahtumiin
{
    objTilitapahtumat->setId(idTili);
    objTilitapahtumat->show();
}

void valikko::on_btnKirjauduUlos_clicked() //kirjaudutaan ulos
{
    tyyppi = "";
    this->close();
}

void valikko::info()  //tällä haetaan tilinumero
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
    this, SLOT(tulostainfo(QNetworkReply*)));
    reply = manager->get(request);
}

void valikko::info2()
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

void valikko::tulostainfo(QNetworkReply *reply) //tällä tulostetaan tilinumero
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    QString tilinro;
    tilinro+=QString(json_obj["Tilinumero"].toString());
    ui->labelinfo->setText(tilinro);
    }
}

void valikko::haetyyppi(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    tyyppi+=QString::number(json_obj["tyyppi"].toInt());
    qDebug()<< tyyppi;

    }
}

void valikko::setIdTili(const QString &value) //tällä haetaan tilin id jota voidaan käyttää urllässä
{
    idTili = value;
    qDebug() << idTili;
    info();
    info2();
}



