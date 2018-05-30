#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "main_menu.h"
#include "search_page.h"
#include "add_book_page.h"
#include "card_management_page.h"
#include "borrow_return_page.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    //~MainWindow();

public slots:
    void change2search();
    void change2card();
    void change2add();
    void change2borrow();
    void change2return();
    void change2main();

private:
    search_page *search_page_w;
    main_menu *main_menu_w;
    card_management_page *card_w;
    borrow_return_page *br_w;
    add_book_page *add_book_w;
    void OpenDatabase();
};

#endif // MAINWINDOW_H
