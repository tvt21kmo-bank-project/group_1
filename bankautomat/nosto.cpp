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
