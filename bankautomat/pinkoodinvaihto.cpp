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
