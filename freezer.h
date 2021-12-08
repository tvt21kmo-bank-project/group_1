#ifndef FREEZER_H
#define FREEZER_H

#include <QDialog>

namespace Ui {
class freezer;
}

class freezer : public QDialog
{
    Q_OBJECT

public:
    explicit freezer(QWidget *parent = nullptr);
    ~freezer();

private:
    Ui::freezer *ui;
};

#endif // FREEZER_H
