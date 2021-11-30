#ifndef RAHANSIIRTO_H
#define RAHANSIIRTO_H

#include <QWidget>

namespace Ui {
class rahansiirto;
}

class rahansiirto : public QWidget
{
    Q_OBJECT

public:
    explicit rahansiirto(QWidget *parent = 0);
    ~rahansiirto();

private:
    Ui::rahansiirto *ui;
};

#endif // RAHANSIIRTO_H
