#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <QWidget>
#include "log_in.h"

namespace Ui {
class main_menu;
}

class main_menu : public QWidget
{
    Q_OBJECT

public:
    explicit main_menu(QWidget *parent);
    ~main_menu();

    void default_page();
    void dba_page();
    void OpenDatabase();

public slots:
    //void click_search_book();
    void click_dba_log_in();
    void click_dba_log_out();

    void turn_dba_page();

private:
    Ui::main_menu *ui;
    log_in *sub_w;
};

#endif // MAIN_MENU_H
