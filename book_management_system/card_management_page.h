#ifndef CARD_MANAGEMENT_PAGE_H
#define CARD_MANAGEMENT_PAGE_H

#include <QWidget>

namespace Ui {
class card_management_page;
}

class card_management_page : public QWidget
{
    Q_OBJECT

public:
    explicit card_management_page(QWidget *parent);
    void update_view();
    ~card_management_page();

public slots:
    void insert_card();
    void delete_card();

private:
    Ui::card_management_page *ui;
};

#endif // CARD_MANAGEMENT_PAGE_H
