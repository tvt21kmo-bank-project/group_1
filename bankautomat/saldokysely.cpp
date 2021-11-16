#include "saldokysely.h"
#include "ui_saldokysely.h"


Saldokysely::Saldokysely(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Saldokysely)
{
    ui->setupUi(this);
}

Saldokysely::~Saldokysely()
{
    delete ui;
}
