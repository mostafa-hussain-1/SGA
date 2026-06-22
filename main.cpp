#include "mainwindow.h"
#include <QStyleFactory>
#include <QApplication>
#include "dataBase.h"

int main(int argc, char *argv[])
{
    load_data();
    load_semester_data();
    QApplication a(argc, argv);
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    MainWindow w;
    w.show();
    return QApplication::exec();
}
