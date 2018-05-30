#ifndef ADD_BOOK_PAGE_H
#define ADD_BOOK_PAGE_H

#include <QWidget>

namespace Ui {
class add_book_page;
}

class add_book_page : public QWidget
{
    Q_OBJECT

public:
    explicit add_book_page(QWidget *parent = 0);
    ~add_book_page();

public slots:
    void batch_import_confirm();
    void single_import_confirm();

private:
    Ui::add_book_page *ui;
};

#endif // ADD_BOOK_PAGE_H
