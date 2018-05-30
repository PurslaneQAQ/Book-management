#include "main_menu.h"
#include "ui_main_menu.h"

main_menu::main_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_menu)
{
    ui->setupUi(this);
    int buttom[2] = {width()/5, height()/15};
    ui->add_book->setGeometry(width()/5, height() * 9 / 15, buttom[0], buttom[1]);
    ui->add_book->setFont(QFont("微软雅黑",10,QFont::Normal));

    ui->card_management->setGeometry(width() * 3 /5, height() * 9/ 15, buttom[0], buttom[1]);
    ui->card_management->setFont(QFont("微软雅黑",10,QFont::Normal));

    ui->borrow_book->setGeometry(width() / 5, height() * 11/ 15, buttom[0], buttom[1]);
    ui->borrow_book->setFont(QFont("微软雅黑",10,QFont::Normal));

    ui->return_book->setGeometry(width() * 3 /5, height() * 11/ 15, buttom[0], buttom[1]);
    ui->return_book->setFont(QFont("微软雅黑",10,QFont::Normal));

    ui->search_book->setGeometry(width() * 1 /5, height() * 13/ 15, buttom[0], buttom[1]);
    ui->search_book->setFont(QFont("微软雅黑",10,QFont::Normal));

    ui->dba_log_in->setGeometry(width() * 3 /5, height() * 13/ 15, buttom[0], buttom[1]);
    ui->dba_log_in->setFont(QFont("微软雅黑",10,QFont::Normal));

    ui->dba_log_out->setGeometry(width() * 3 /5, height() * 13/ 15, buttom[0], buttom[1]);
    ui->dba_log_out->setFont(QFont("微软雅黑",10,QFont::Normal));
    ui->dba_log_out->setStyleSheet("background-color: rgb(255, 100, 100);");

    connect(ui->add_book, SIGNAL(clicked()), parent, SLOT(change2add()));
    connect(ui->card_management, SIGNAL(clicked()), parent, SLOT(change2card()));
    connect(ui->borrow_book, SIGNAL(clicked()), parent, SLOT(change2borrow()));
    connect(ui->return_book, SIGNAL(clicked()), parent, SLOT(change2return()));
    connect(ui->search_book, SIGNAL(clicked()), parent, SLOT(change2search()));
    connect(ui->dba_log_in, SIGNAL(clicked()), this, SLOT(click_dba_log_in()));
    connect(ui->dba_log_out, SIGNAL(clicked()), this, SLOT(click_dba_log_out()));

    default_page();
}

void main_menu::default_page(){
    ui->add_book->setVisible(false);
    ui->card_management->setVisible(false);
    ui->borrow_book->setVisible(false);
    ui->return_book->setVisible(false);
    ui->dba_log_out->setVisible(false);
    ui->search_book->setVisible(true);
    ui->dba_log_in->setVisible(true);

}

void main_menu::dba_page(){
    ui->add_book->setVisible(true);
    ui->card_management->setVisible(true);
    ui->borrow_book->setVisible(true);
    ui->return_book->setVisible(true);
    ui->dba_log_out->setVisible(true);
    ui->search_book->setVisible(true);
    ui->dba_log_in->setVisible(false);
}

void main_menu::click_dba_log_in()
{   sub_w = new(log_in);
    sub_w->setWindowTitle("DBA log in");
    sub_w->setWindowFlags(Qt::WindowStaysOnTopHint);
    sub_w->setAttribute(Qt::WA_DeleteOnClose);
    connect(sub_w, SIGNAL(destroyed()), this, SLOT(turn_dba_page()));
    sub_w->show();
}

void main_menu::turn_dba_page()
{
    if(sub_w->get_log_db())
        dba_page();
}

void main_menu::click_dba_log_out()
{
    default_page();
}

main_menu::~main_menu()
{
    delete ui;
}
