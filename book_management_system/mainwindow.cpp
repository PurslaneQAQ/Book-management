#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QMessageBox>
#include "bms.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    search_page_w(NULL),
    card_w(NULL),
    br_w(NULL),
    add_book_w(NULL)
{
    setWindowTitle("Library");

    setGeometry(QRect((QApplication::desktop()->width() - width())/2,
                      (QApplication::desktop()->height() - height())/2,
                      720,576));
    QPixmap pixmap("timg.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);

    OpenDatabase();
    main_menu_w = new main_menu(this);
    main_menu_w->show();
}

void MainWindow::OpenDatabase()
{
    //QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//添加驱动
    db.setDatabaseName(QString("DRIVER={SQL SERVER};"
                                   "SERVER=%1;"
                                   "DATABASE=%2;"
                                   "UID=%3;"
                                   "PWD=%4;").arg("(local)")
                           .arg("library")
                           .arg("sa")
                           .arg("123456"));
    if (!db.open())
        {
            QMessageBox::warning(0, qApp->tr("Cannot open database"),
                    db.lastError().databaseText(), QMessageBox::Cancel);
        }
}

void MainWindow::change2search()
{
    main_menu_w->hide();
    search_page_w = new search_page(this);
    search_page_w->show();
}

void MainWindow::change2main()
{
    if(search_page_w)search_page_w->close();
    if(card_w)card_w->close();
    if(br_w) br_w->close();
    if(add_book_w)add_book_w->close();
    main_menu_w->show();
}

void MainWindow::change2card()
{
    main_menu_w->hide();
    card_w = new card_management_page(this);
    card_w->show();
}
void MainWindow::change2add()
{
    main_menu_w->hide();
    add_book_w = new add_book_page(this);
    add_book_w->show();
}
void MainWindow::change2borrow()
{
    main_menu_w->hide();
    br_w = new borrow_return_page(this, 0);
    br_w->show();
}
void MainWindow::change2return()
{
    main_menu_w->hide();
    br_w = new borrow_return_page(this, 1);
    br_w->show();
}


