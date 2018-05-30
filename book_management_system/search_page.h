#ifndef SEARCH_PAGE_H
#define SEARCH_PAGE_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class search_page;
}

class search_page : public QWidget
{
    Q_OBJECT

public:
    explicit search_page(QWidget *parent);
    ~search_page();

public slots:
    void search_in_db();
    void check_attribute();

private:
    Ui::search_page *ui;
};

#endif // SEARCH_PAGE_H
