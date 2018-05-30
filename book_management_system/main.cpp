#include "mainwindow.h"
#include "bms.h"
#include <QApplication>


QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//添加驱动

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
