#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) //turha tätä on katsoa. ei täällä mitään ole
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
