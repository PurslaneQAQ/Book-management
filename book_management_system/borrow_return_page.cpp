#include "borrow_return_page.h"
#include "ui_borrow_return_page.h"
#include "QMessageBox"
#include "bms.h"

borrow_return_page::borrow_return_page(QWidget *parent, bool status) :
    QWidget(parent),
    status(status),
    ui(new Ui::borrow_return_page)
{
    ui->setupUi(this);
    if(status == 0)ui->return_label->setVisible(false);
    else ui->borrow_label->setVisible(false);
    ui->success_sign->setVisible(false);
    ui->error_1->setVisible(false);
    ui->error_2->setVisible(false);
    ui->error_3->setVisible(false);
    connect(ui->cno_confirm, SIGNAL(clicked()), this, SLOT(cno_insertion_confirm()));
    connect(ui->bno_confirm, SIGNAL(clicked()), this, SLOT(bno_insertion_confirm()));
    connect(ui->return_button, SIGNAL(clicked()), parent, SLOT(change2main()));
}

void borrow_return_page::cno_insertion_confirm()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(QObject::tr("select * from borrow where cno = '%1'").arg(ui->cno_insertion->text()));
    ui->tableView->setModel(model);
    ui->tableView->setAlternatingRowColors(true);
    int row_count = model->rowCount();
    for(int i =0; i < row_count; i++)
    {
        ui->tableView->setRowHeight(i, 20);
    }
    int column_count = model->columnCount();
    for(int i =0; i < column_count; i++)
    {
        ui->tableView->setColumnWidth(i, 115);
    }
}

void borrow_return_page::bno_insertion_confirm()
{

    ui->error_1->setVisible(false);
    ui->error_2->setVisible(false);
    ui->error_3->setVisible(false);
    ui->success_sign->setVisible(false);
    ui->return_date_label->setText("  ");
    if(status == 0)borrow_book();
    else return_book();
    cno_insertion_confirm();
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(QObject::tr("select bno, title, total, stock from book where bno = '%1'").arg(ui->bno_insertion->text()));
    ui->tableView_2->setModel(model);
    ui->tableView_2->setAlternatingRowColors(true);
    ui->tableView_2->setRowHeight(0, 20);
    int column_count = model->columnCount();
    for(int i =0; i < column_count; i++)
    {
        ui->tableView_2->setColumnWidth(i, 144);
    }
}

void borrow_return_page::borrow_book()
{
    QSqlQuery query(db);
    query.exec(QObject::tr("select count(borrow_date) from borrow where cno = '%1' and bno = '%2' and return_date is NULL").arg(ui->cno_insertion->text()).arg(ui->bno_insertion->text()));
    query.next();
    if(query.value(0).toInt() != 0){
        ui->error_3->setVisible(true);
        return;
    }
    query.exec(QObject::tr("select stock from book where bno = '%1'").arg(ui->bno_insertion->text()));
    query.next();
    int stock = query.value(0).toInt();
    if(stock <= 0){
        ui->error_1->setVisible(true);
        query.exec(QObject::tr("select max(return_date) from borrow where bno = '%1'").arg(ui->bno_insertion->text()));
        query.next();
        ui->return_date_label->setText(query.value(0).toString());
        return;
    }
    QDateTime time = QDateTime::currentDateTime();
    bool success = query.exec(QObject::tr("insert into borrow values('%1', '%2', '%3', NULL, '%4');"
                                          "update book set stock = stock - 1 where bno = '%2'").arg(ui->cno_insertion->text()).arg(ui->bno_insertion->text()).arg(time.toString("yyyy-MM-dd hh:mm")).arg(dba));
    if(!success)
    {
        QMessageBox::warning(0, qApp->tr("Borrow failure!"),
                db.lastError().databaseText(), QMessageBox::Cancel);
    }
    else
        ui->success_sign->setVisible(true);
}

void borrow_return_page::return_book()
{
    QSqlQuery query(db);
    query.exec(QObject::tr("select count(borrow_date) from borrow where cno = '%1' and bno = '%2' and return_date is NULL").arg(ui->cno_insertion->text()).arg(ui->bno_insertion->text()));
    query.next();
    if(query.value(0).toInt() == 0){
        ui->error_2->setVisible(true);
        return;
    }
    QDateTime time = QDateTime::currentDateTime();
    bool success = query.exec(QObject::tr("update borrow set return_date = '%1' where cno = '%2' and bno = '%3' and return_date is NULL;"
                                          "update book set stock = stock + 1 where bno = '%3'").arg(time.toString("yyyy-MM-dd hh:mm")).arg(ui->cno_insertion->text()).arg(ui->bno_insertion->text()));
    if(!success)
    {
        QMessageBox::warning(0, qApp->tr("Return failure!"),
                db.lastError().databaseText(), QMessageBox::Cancel);
    }
}

borrow_return_page::~borrow_return_page()
{
    delete ui;
}
