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


}

valikko::~valikko()
{
    delete ui;
    ui = nullptr;
    objNosto = nullptr;
    objPinKoodinVaihto = nullptr;
    objRahanSiirto = nullptr;
    objSaldokysely = nullptr;

}

void valikko::on_btnNosto_clicked() //reitti nostoon
{
    objNosto->setId(idTili);
    objNosto->show();
}

void valikko::on_btnSaldoKysely_clicked() //reitti saldon kysymiseen
{
    objSaldokysely->setId(idTili);
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

void valikko::on_btnKirjauduUlos_clicked() //kirjaudutaan ulos
{
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

void valikko::setIdTili(const QString &value) //tällä haetaan tilin id jota voidaan käyttää urllässä
{
    idTili = value;
    qDebug() << idTili;
    info();
}

