#include "valikko.h"
#include "ui_valikko.h"

Valikko::Valikko(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Valikko)
{
    ui->setupUi(this);
}

Valikko::~Valikko()
{
    delete ui;
}
