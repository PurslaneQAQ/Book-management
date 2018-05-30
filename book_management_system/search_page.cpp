#include "search_page.h"
#include "ui_search_page.h"
#include "bms.h"
#include <QDebug>

QString attribute_list[9] = {"bno", "category", "title", "press", "year", "author", "price", "total", "stock"};
search_page::search_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search_page)
{
    ui->setupUi(this);
    ui->max_price->setVisible(false);
    ui->min_price->setVisible(false);
    ui->to->setGeometry(QRect(ui->search_input->x() + ui->search_input->width()*4/9,ui->search_input->y(), ui->search_input->width()/9, ui->search_input->height() ));
    ui->to_2->setGeometry(QRect(ui->search_input_2->x() + ui->search_input_2->width()*4/9,ui->search_input_2->y(), ui->search_input_2->width()/9, ui->search_input_2->height() ));
    ui->year_section->setVisible(false);
    ui->year_section_2->setVisible(false);
    ui->to->setVisible(false);
    ui->to_2->setVisible(false);
    connect(ui->search_button, SIGNAL(clicked()), this, SLOT(search_in_db()));
    connect(ui->return_main, SIGNAL(clicked()), parent, SLOT(change2main()));
    connect(ui->search_basis, SIGNAL(currentIndexChanged(int)), this, SLOT(check_attribute()));
    connect(ui->search_basis_2, SIGNAL(currentIndexChanged(int)), this, SLOT(check_attribute()));
}

void search_page::search_in_db(){
    int attribute_index[2]= {ui->search_basis->currentIndex(), ui->search_basis_2->currentIndex()};
    QString attribute[2] = {attribute_list[attribute_index[0]], attribute_list[attribute_index[1]]};
    QString content[2];
    QString str[2];
    for(int i = 0; i < 2; i++){
        if(attribute_index[i] == 0){
            if(i == 0)content[i] = attribute[i] + " = '" + ui->search_input->text() + "'";
            else content[i] = attribute[i] + " = '" + ui->search_input_2->text() + "'";
        }
        else if (attribute_index[i] == 4)
            content[i] = "year >= " + str[0].setNum(ui->year_section->value()) + " and year <= " +str[1].setNum(ui->year_section_2->value());
        else if (attribute_index[i] == 6)
            content[i] = "price >= " + str[0].setNum(ui->min_price->value()) + " and price <= " +str[1].setNum(ui->max_price->value());
        else {
            if(i == 0)content[i] = attribute[i] + " like '%" + ui->search_input->text() +"%'";
            else content[i] = attribute[i] + " like '%" + ui->search_input_2->text() +"%'";
        }
    }
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(QObject::tr("select * from book where %1 and %2 order by %3").arg(content[0]).arg(content[1]).arg(attribute[0]));
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
        if (i == 1 || i == 2 || i == 3 || i== 5)ui->tableView->setColumnWidth(i, 94);
        else ui->tableView->setColumnWidth(i, 58);
    }
}

void search_page::check_attribute()
{
    if(ui->search_basis->currentIndex() == ui->search_basis_2->currentIndex()&& ui->search_basis_2->currentIndex()!= 2)
        ui->search_basis_2->setCurrentIndex(2);
    if(ui->search_basis->currentIndex() == 4){
        ui->year_section->setGeometry(QRect(ui->search_input->x(),ui->search_input->y(), ui->search_input->width()*4/9, ui->search_input->height() ));
        ui->year_section_2->setGeometry(QRect(ui->search_input->x() + ui->search_input->width()*5/9,ui->search_input->y(), ui->search_input->width()*4/9, ui->search_input->height() ));
        ui->year_section->setVisible(true);
        ui->year_section_2->setVisible(true);
        ui->to->setVisible(true);
        ui->search_input->setVisible(false);
        ui->max_price->setVisible(false);
        ui->min_price->setVisible(false);
    }
    else if(ui->search_basis->currentIndex() == 6)
    {
        ui->min_price->setGeometry(QRect(ui->search_input->x(),ui->search_input->y(), ui->search_input->width()*4/9, ui->search_input->height() ));
        ui->max_price->setGeometry(QRect(ui->search_input->x() + ui->search_input->width()*5/9,ui->search_input->y(), ui->search_input->width()*4/9, ui->search_input->height() ));
        ui->min_price->setVisible(true);
        ui->max_price->setVisible(true);
        ui->to->setVisible(true);
        ui->year_section->setVisible(false);
        ui->year_section_2->setVisible(false);
        ui->search_input->setVisible(false);
    }
    else
    {
        ui->search_input->setVisible(true);
        ui->max_price->setVisible(false);
        ui->min_price->setVisible(false);
        ui->year_section->setVisible(false);
        ui->year_section_2->setVisible(false);
        ui->to->setVisible(false);
    }

    if(ui->search_basis_2->currentIndex() == 4){
        ui->year_section->setGeometry(QRect(ui->search_input_2->x(),ui->search_input_2->y(), ui->search_input_2->width()*4/9, ui->search_input_2->height() ));
        ui->year_section_2->setGeometry(QRect(ui->search_input_2->x() + ui->search_input_2->width()*5/9,ui->search_input_2->y(), ui->search_input_2->width()*4/9, ui->search_input_2->height() ));
        ui->year_section->setVisible(true);
        ui->year_section_2->setVisible(true);
        ui->to_2->setVisible(true);
        ui->search_input_2->setVisible(false);
    }
    else if(ui->search_basis_2->currentIndex() == 6)
    {
        ui->min_price->setGeometry(QRect(ui->search_input_2->x(),ui->search_input_2->y(), ui->search_input_2->width()*4/9, ui->search_input_2->height() ));
        ui->max_price->setGeometry(QRect(ui->search_input_2->x() + ui->search_input_2->width()*5/9,ui->search_input_2->y(), ui->search_input_2->width()*4/9, ui->search_input_2->height() ));
        ui->min_price->setVisible(true);
        ui->max_price->setVisible(true);
        ui->to_2->setVisible(true);
        ui->search_input_2->setVisible(false);
    }
    else
    {
        ui->search_input_2->setVisible(true);
        ui->to_2->setVisible(false);
    }



}

search_page::~search_page()
{
    delete ui;
}
