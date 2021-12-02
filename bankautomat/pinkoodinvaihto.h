#ifndef PINKOODINVAIHTO_H
#define PINKOODINVAIHTO_H

#include <QWidget>

namespace Ui {
class PinKoodinVaihto;
}

class PinKoodinVaihto : public QWidget
{
    Q_OBJECT

public:
    explicit PinKoodinVaihto(QWidget *parent = 0);
    ~PinKoodinVaihto();

private:
    Ui::PinKoodinVaihto *ui;
};

#endif // PINKOODINVAIHTO_H
