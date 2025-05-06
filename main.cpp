#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //Komentarz testowy
    //Komentarz z brancha
    //Kolejny komentarz z another
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
