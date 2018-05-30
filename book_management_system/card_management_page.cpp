#include "card_management_page.h"
#include "ui_card_management_page.h"
#include <QMessageBox>
#include "bms.h"

card_management_page::card_management_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::card_management_page)
{
    ui->setupUi(this);
    update_view();
    connect(ui->insert, SIGNAL(clicked()), this, SLOT(insert_card()));
    connect(ui->delete_c, SIGNAL(clicked()), this, SLOT(delete_card()));
    connect(ui->return_button, SIGNAL(clicked()), parent, SLOT(change2main()));
}

void card_management_page::insert_card()
{
    QSqlQuery query(db);
    bool success = query.exec(QObject::tr("insert into card values ('%1', '%2', '%3', '%4')").arg(ui->cno->text()).arg(ui->name->text()).arg(ui->dprt->text()).arg(ui->type->currentText()));
    if(!success)
    {
        QMessageBox::warning(0, qApp->tr("Insert failure!"),
                db.lastError().databaseText(), QMessageBox::Cancel);
    }
    else update_view();
}

void card_management_page::delete_card()
{
    QSqlQuery query(db);
    query.exec(QObject::tr("select count(borrow_date) from borrow where cno = '%1' and return_date is NULL").arg(ui->cno->text()));
    query.next();
    if(query.value(0).toInt() != 0){
        QMessageBox::warning(0, qApp->tr("Delete failure!"),
                        "There are still books borrowed by the card remain lent!", QMessageBox::Cancel);
        return;
    }
    query.exec(QObject::tr("delete from borrow where cno = '%1';"
                                          "delete from card where cno = '%1'").arg(ui->cno->text()));
    update_view();
}

void card_management_page::update_view()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(QObject::tr("select * from card"));
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
        ui->tableView->setColumnWidth(i, 166);
    }
}

card_management_page::~card_management_page()
{
    delete ui;
}
