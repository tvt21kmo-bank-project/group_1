#include "rahansiirto.h"
#include "ui_rahansiirto.h"

rahansiirto::rahansiirto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rahansiirto)
{
    ui->setupUi(this);
}

rahansiirto::~rahansiirto()
{
    delete ui;
}
