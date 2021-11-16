#ifndef SALDOKYSELY_H
#define SALDOKYSELY_H


#include <QWidget>


namespace Ui {
class Saldokysely;
}

class Saldokysely : public QWidget
{
    Q_OBJECT

public:
    explicit Saldokysely(QWidget *parent = 0);
    ~Saldokysely();

private:
    Ui::Saldokysely *ui;
};

#endif // SALDOKYSELY_H
