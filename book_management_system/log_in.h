#ifndef log_in_H
#define log_in_H

#include <QWidget>

namespace Ui {
class log_in;
}

class log_in : public QWidget
{
    Q_OBJECT

public:
    explicit log_in(QWidget *parent = 0);
    ~log_in();
    bool get_log_db(){return log_in_db;}

public slots:
    void click_cancel();
    void click_confirm();

private:
    Ui::log_in *ui;
    bool log_in_db;
};

#endif // log_in_H
