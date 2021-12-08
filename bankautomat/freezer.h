#ifndef FREEZER_H
#define FREEZER_H

#include <QWidget>

namespace Ui {
class freezer;
}

class freezer : public QWidget
{
    Q_OBJECT

public:
    explicit freezer(QWidget *parent = 0);
    ~freezer();

private:
    Ui::freezer *ui;
};

#endif // FREEZER_H
