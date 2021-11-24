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

void valikko::on_btnNosto_clicked()
{
    objNosto->show();
}

void valikko::on_btnSaldoKysely_clicked()
{
    objSaldokysely->show();
}

void valikko::on_btnRahanSiirto_clicked()
{
    objRahanSiirto->show();
}

void valikko::on_btnPininVaihto_clicked()
{
    objPinKoodinVaihto->show();
}

void valikko::on_btnKirjauduUlos_clicked()
{
    this->close();
}
