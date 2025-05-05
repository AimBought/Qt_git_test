#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //Komentarz testowy
    //Komentarz z brancha
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
