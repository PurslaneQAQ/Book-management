#include "add_book_page.h"
#include "ui_add_book_page.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include "bms.h"

add_book_page::add_book_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_book_page)
{
    ui->setupUi(this);
    ui->success_sign->setVisible(false);
    connect(ui->bi_confirm, SIGNAL(clicked()), this, SLOT(batch_import_confirm()));
    connect(ui->si_confirm, SIGNAL(clicked()), this, SLOT(single_import_confirm()));
    connect(ui->return_button, SIGNAL(clicked()), parent, SLOT(change2main()));

}

void add_book_page::batch_import_confirm()
{
    ui->success_sign->setVisible(false);
    QFile file(ui->path->text());
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(0, qApp->tr("File open error!"),
                "Can not open the file!", QMessageBox::Cancel);
        return;
    }
    QSqlQuery query(db);
    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        QString str(line);
        str.replace(QString("( "), QString(""));
        str.replace(QString(" )"), QString(""));
        QStringList strlist=str.split(", ");
        QString total = strlist.at(7);
        total.remove("\n");
        //qDebug() << "insert into book values ('"<< strlist.at(0) << "', '"+strlist.at(1)<<"', '"<<strlist.at(2)<<"', '"<<strlist.at(3)<<"', "<<strlist.at(4)<<", '"<<strlist.at(5)<<"', "<<strlist.at(6)<<", "<< total.toInt()<<", "<< total <<")";
        bool success;
        query.exec(QObject::tr("select count(*) from book where bno = '%1'").arg(strlist.at(0)));
        query.next();
        if(query.value(0).toInt() != 0)
             success = query.exec(QObject::tr("update book set total = total + %1, stock = stock + %1 where bno = '%2'").arg(total).arg(strlist.at(0)));
        else success = query.exec("insert into book values ('"+ strlist.at(0) + "', '"+strlist.at(1)+"', '"+strlist.at(2)+"', '"+strlist.at(3)+"', "+strlist.at(4)+", '"+strlist.at(5)+"', "+strlist.at(6)+", "+ total+", "+ total +")");
        if(!success)
        {
            QMessageBox::warning(0, qApp->tr("Update failure!"),
                    db.lastError().databaseText(), QMessageBox::Cancel);
        }
        else ui->success_sign->setVisible(true);
    }
}

void add_book_page::single_import_confirm()
{
    ui->success_sign->setVisible(false);
    QSqlQuery query(db);
    bool success;
    query.exec(QObject::tr("select count(*) from book where bno = '%1'").arg(ui->bno->text()));
    query.next();
    if(query.value(0).toInt() != 0)
        success = query.exec(QObject::tr("update book set total = total + %1, stock = stock + %1 where bno = '%2'").arg(ui->total->text()).arg(ui->bno->text()));
    else
        success = query.exec(QObject::tr("insert into book values ('%1', '%2', '%3', '%4', %5,'%6', %7, %8, %8)").arg(ui->bno->text()).arg(ui->category->text()).arg(ui->title->text()).arg(ui->press->text()).arg(ui->year->text()).arg(ui->author->text()).arg(ui->price->text()).arg(ui->total->text()));
    if(!success)
    {
        QMessageBox::warning(0, qApp->tr("Update failure!"),
                db.lastError().databaseText(), QMessageBox::Cancel);
    }
    else ui->success_sign->setVisible(true);
}

add_book_page::~add_book_page()
{
    delete ui;
}
