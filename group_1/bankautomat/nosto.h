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

    void setId(const QString &value);

private:
    Ui::Nosto *ui;
    QString id;
};

#endif // NOSTO_H
