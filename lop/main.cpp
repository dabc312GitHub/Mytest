#include "opiyt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opiyt w;
    w.show();

    return a.exec();
}
