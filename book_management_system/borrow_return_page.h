#ifndef BORROW_RETURN_PAGE_H
#define BORROW_RETURN_PAGE_H

#include <QWidget>

namespace Ui {
class borrow_return_page;
}

class borrow_return_page : public QWidget
{
    Q_OBJECT

public:
    explicit borrow_return_page(QWidget *parent, bool status);
    void borrow_book();
    void return_book();
    ~borrow_return_page();

public slots:
    void cno_insertion_confirm();
    void bno_insertion_confirm();

private:
    Ui::borrow_return_page *ui;
    bool status;
};

#endif // BORROW_RETURN_PAGE_H
