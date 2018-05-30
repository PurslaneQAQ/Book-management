/********************************************************************************
** Form generated from reading UI file 'add_book_page.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_BOOK_PAGE_H
#define UI_ADD_BOOK_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_book_page
{
public:
    QLabel *add_book_label;
    QLabel *single_import;
    QLabel *batch_import;
    QLineEdit *path;
    QPushButton *bi_confirm;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *bno;
    QLineEdit *category;
    QLineEdit *title;
    QLineEdit *press;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *year;
    QLineEdit *author;
    QLineEdit *price;
    QLineEdit *total;
    QPushButton *return_button;
    QPushButton *si_confirm;
    QLabel *success_sign;

    void setupUi(QWidget *add_book_page)
    {
        if (add_book_page->objectName().isEmpty())
            add_book_page->setObjectName(QStringLiteral("add_book_page"));
        add_book_page->resize(720, 576);
        add_book_page->setMaximumSize(QSize(16777215, 16777215));
        add_book_label = new QLabel(add_book_page);
        add_book_label->setObjectName(QStringLiteral("add_book_label"));
        add_book_label->setGeometry(QRect(310, 10, 131, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        add_book_label->setFont(font);
        single_import = new QLabel(add_book_page);
        single_import->setObjectName(QStringLiteral("single_import"));
        single_import->setGeometry(QRect(55, 390, 71, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setBold(true);
        font1.setWeight(75);
        single_import->setFont(font1);
        batch_import = new QLabel(add_book_page);
        batch_import->setObjectName(QStringLiteral("batch_import"));
        batch_import->setGeometry(QRect(55, 350, 71, 20));
        batch_import->setFont(font1);
        path = new QLineEdit(add_book_page);
        path->setObjectName(QStringLiteral("path"));
        path->setGeometry(QRect(160, 350, 305, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        path->setFont(font2);
        bi_confirm = new QPushButton(add_book_page);
        bi_confirm->setObjectName(QStringLiteral("bi_confirm"));
        bi_confirm->setGeometry(QRect(475, 350, 95, 30));
        bi_confirm->setMinimumSize(QSize(95, 30));
        bi_confirm->setMaximumSize(QSize(95, 30));
        bi_confirm->setFont(font2);
        horizontalLayoutWidget = new QWidget(add_book_page);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(160, 360, 411, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bno = new QLineEdit(horizontalLayoutWidget);
        bno->setObjectName(QStringLiteral("bno"));
        bno->setMinimumSize(QSize(0, 30));
        bno->setMaximumSize(QSize(16777215, 30));
        bno->setFont(font2);

        horizontalLayout->addWidget(bno);

        category = new QLineEdit(horizontalLayoutWidget);
        category->setObjectName(QStringLiteral("category"));
        category->setMinimumSize(QSize(0, 30));
        category->setMaximumSize(QSize(16777215, 30));
        category->setFont(font2);

        horizontalLayout->addWidget(category);

        title = new QLineEdit(horizontalLayoutWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setMinimumSize(QSize(0, 30));
        title->setMaximumSize(QSize(16777215, 30));
        title->setFont(font2);

        horizontalLayout->addWidget(title);

        press = new QLineEdit(horizontalLayoutWidget);
        press->setObjectName(QStringLiteral("press"));
        press->setMinimumSize(QSize(0, 30));
        press->setMaximumSize(QSize(16777215, 30));
        press->setFont(font2);

        horizontalLayout->addWidget(press);

        horizontalLayoutWidget_2 = new QWidget(add_book_page);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(160, 400, 411, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        year = new QLineEdit(horizontalLayoutWidget_2);
        year->setObjectName(QStringLiteral("year"));
        year->setMinimumSize(QSize(0, 30));
        year->setMaximumSize(QSize(16777215, 30));
        year->setFont(font2);

        horizontalLayout_2->addWidget(year);

        author = new QLineEdit(horizontalLayoutWidget_2);
        author->setObjectName(QStringLiteral("author"));
        author->setMinimumSize(QSize(0, 30));
        author->setMaximumSize(QSize(16777215, 30));
        author->setFont(font2);

        horizontalLayout_2->addWidget(author);

        price = new QLineEdit(horizontalLayoutWidget_2);
        price->setObjectName(QStringLiteral("price"));
        price->setMinimumSize(QSize(0, 30));
        price->setMaximumSize(QSize(16777215, 30));
        price->setFont(font2);

        horizontalLayout_2->addWidget(price);

        total = new QLineEdit(horizontalLayoutWidget_2);
        total->setObjectName(QStringLiteral("total"));
        total->setMinimumSize(QSize(0, 30));
        total->setMaximumSize(QSize(16777215, 30));
        total->setFont(font2);

        horizontalLayout_2->addWidget(total);

        return_button = new QPushButton(add_book_page);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setGeometry(QRect(369, 500, 201, 30));
        return_button->setFont(font2);
        si_confirm = new QPushButton(add_book_page);
        si_confirm->setObjectName(QStringLiteral("si_confirm"));
        si_confirm->setGeometry(QRect(160, 500, 200, 30));
        si_confirm->setMinimumSize(QSize(200, 30));
        si_confirm->setMaximumSize(QSize(95, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        si_confirm->setFont(font3);
        success_sign = new QLabel(add_book_page);
        success_sign->setObjectName(QStringLiteral("success_sign"));
        success_sign->setGeometry(QRect(160, 470, 91, 16));
        success_sign->setFont(font2);

        retranslateUi(add_book_page);

        QMetaObject::connectSlotsByName(add_book_page);
    } // setupUi

    void retranslateUi(QWidget *add_book_page)
    {
        add_book_page->setWindowTitle(QApplication::translate("add_book_page", "Form", Q_NULLPTR));
        add_book_label->setText(QApplication::translate("add_book_page", "\345\233\276\344\271\246\345\257\274\345\205\245", Q_NULLPTR));
        single_import->setText(QApplication::translate("add_book_page", "\345\215\225\345\206\214\345\257\274\345\205\245", Q_NULLPTR));
        batch_import->setText(QApplication::translate("add_book_page", "\346\211\271\351\207\217\345\257\274\345\205\245", Q_NULLPTR));
        path->setText(QApplication::translate("add_book_page", "\350\257\267\350\276\223\345\205\245\347\233\256\346\240\207\346\226\207\344\273\266\350\267\257\345\276\204", Q_NULLPTR));
        bi_confirm->setText(QApplication::translate("add_book_page", "\347\241\256\350\256\244", Q_NULLPTR));
        bno->setText(QApplication::translate("add_book_page", "\344\271\246\345\217\267", Q_NULLPTR));
        category->setText(QApplication::translate("add_book_page", "\347\261\273\345\210\253", Q_NULLPTR));
        title->setText(QApplication::translate("add_book_page", "\344\271\246\345\220\215", Q_NULLPTR));
        press->setText(QApplication::translate("add_book_page", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        year->setText(QApplication::translate("add_book_page", "\345\271\264\344\273\275", Q_NULLPTR));
        author->setText(QApplication::translate("add_book_page", "\344\275\234\350\200\205", Q_NULLPTR));
        price->setText(QApplication::translate("add_book_page", "\344\273\267\346\240\274", Q_NULLPTR));
        total->setText(QApplication::translate("add_book_page", "\346\225\260\351\207\217", Q_NULLPTR));
        return_button->setText(QApplication::translate("add_book_page", "\350\277\224\345\233\236", Q_NULLPTR));
        si_confirm->setText(QApplication::translate("add_book_page", "\347\241\256\350\256\244", Q_NULLPTR));
        success_sign->setText(QApplication::translate("add_book_page", "\345\257\274\345\205\245\346\210\220\345\212\237\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_book_page: public Ui_add_book_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_BOOK_PAGE_H
