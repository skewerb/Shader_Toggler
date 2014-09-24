#include "mainwindow.h"
#include <QApplication>
//#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*QPushButton hello ("Hello world!");
    hello.resize(100,30);
    hello.show();*/

    return a.exec();
}
