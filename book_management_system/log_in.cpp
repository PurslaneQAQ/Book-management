#include "log_in.h"
#include "ui_log_in.h"
#include "bms.h"

QString dba;

log_in::log_in(QWidget *parent):
    QWidget(parent),
    log_in_db(false),
    ui(new Ui::log_in)
{
    ui->setupUi(this);
    //this->setWindowTitle("DBM log in");
    ui->password_input->setEchoMode(QLineEdit::Password);
    ui->error_sign->setVisible(false);
    connect(ui->cancel, SIGNAL(clicked()), this, SLOT(click_cancel()));
    connect(ui->log_in_confirm, SIGNAL(clicked()), this, SLOT(click_confirm()));
}

void log_in::click_cancel()
{
    this->close();
}

void log_in::click_confirm()
{
    QString name = ui->user_name_input->text();
    QString key = ui->password_input->text();
    QSqlQuery query(db);
    query.exec(QObject::tr("select count(*) from dba where ID = '%1' and password = '%2'").arg(name).arg(key));
    query.next();
    if(query.value(0).toInt() != 0)
        log_in_db = true;
    if(!log_in_db)
        ui->error_sign->setVisible(true);
    else{
        this->close();
        dba = name;
    }
}

log_in::~log_in()
{
    delete ui;
}

