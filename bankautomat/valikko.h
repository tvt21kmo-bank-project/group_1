#ifndef VALIKKO_H
#define VALIKKO_H

#include <QWidget>
#include "nosto.h"
#include "pinkoodinvaihto.h"
#include "rahansiirto.h"
#include "saldokysely.h"



namespace Ui {
class valikko;
}

class valikko : public QWidget
{
    Q_OBJECT

public:
    explicit valikko(QWidget *parent = 0);
    ~valikko();

private slots:
    void on_btnNosto_clicked();

    void on_btnSaldoKysely_clicked();

    void on_btnRahanSiirto_clicked();

    void on_btnPininVaihto_clicked();

    void on_btnKirjauduUlos_clicked();

private:
    Ui::valikko *ui;
    Nosto *objNosto;
    PinKoodinVaihto *objPinKoodinVaihto;
    rahansiirto *objRahanSiirto;
    Saldokysely *objSaldokysely;
};

#endif // VALIKKO_H
