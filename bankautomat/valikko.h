#ifndef VALIKKO_H
#define VALIKKO_H

#include <QWidget>

namespace Ui {
class Valikko;
}

class Valikko : public QWidget
{
    Q_OBJECT

public:
    explicit Valikko(QWidget *parent = 0);
    ~Valikko();

private:
    Ui::Valikko *ui;
};

#endif // VALIKKO_H
