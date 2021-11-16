#ifndef NOSTO_H
#define NOSTO_H

#include <QWidget>

namespace Ui {
class Nosto;
}

class Nosto : public QWidget
{
    Q_OBJECT

public:
    explicit Nosto(QWidget *parent = 0);
    ~Nosto();

private:
    Ui::Nosto *ui;
};

#endif // NOSTO_H
