#include "home_page.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    home_page w;
    w.show();
    w.hide();//sdk
    return a.exec();
}
