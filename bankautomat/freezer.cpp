#include "freezer.h"
#include "ui_freezer.h"

freezer::freezer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::freezer)
{
    ui->setupUi(this);
}

freezer::~freezer()
{
    delete ui;
}
