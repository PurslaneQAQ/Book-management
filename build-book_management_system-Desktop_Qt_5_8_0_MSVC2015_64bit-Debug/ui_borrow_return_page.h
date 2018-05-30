/********************************************************************************
** Form generated from reading UI file 'borrow_return_page.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROW_RETURN_PAGE_H
#define UI_BORROW_RETURN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_borrow_return_page
{
public:
    QLabel *borrow_label;
    QLabel *return_label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *cno_sign;
    QLineEdit *cno_insertion;
    QPushButton *cno_confirm;
    QTableView *tableView;
    QTableView *tableView_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *bno_sign;
    QLineEdit *bno_insertion;
    QPushButton *bno_confirm;
    QLabel *success_sign;
    QLabel *error_1;
    QLabel *error_2;
    QPushButton *return_button;
    QLabel *return_date_label;
    QLabel *error_3;

    void setupUi(QWidget *borrow_return_page)
    {
        if (borrow_return_page->objectName().isEmpty())
            borrow_return_page->setObjectName(QStringLiteral("borrow_return_page"));
        borrow_return_page->resize(720, 576);
        borrow_label = new QLabel(borrow_return_page);
        borrow_label->setObjectName(QStringLiteral("borrow_label"));
        borrow_label->setGeometry(QRect(320, 10, 131, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        borrow_label->setFont(font);
        return_label = new QLabel(borrow_return_page);
        return_label->setObjectName(QStringLiteral("return_label"));
        return_label->setGeometry(QRect(320, 10, 131, 40));
        return_label->setFont(font);
        horizontalLayoutWidget = new QWidget(borrow_return_page);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 30, 601, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(40);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cno_sign = new QLabel(horizontalLayoutWidget);
        cno_sign->setObjectName(QStringLiteral("cno_sign"));
        cno_sign->setMinimumSize(QSize(0, 30));
        cno_sign->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        cno_sign->setFont(font1);

        horizontalLayout->addWidget(cno_sign);

        cno_insertion = new QLineEdit(horizontalLayoutWidget);
        cno_insertion->setObjectName(QStringLiteral("cno_insertion"));
        cno_insertion->setMinimumSize(QSize(0, 30));
        cno_insertion->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(cno_insertion);

        cno_confirm = new QPushButton(horizontalLayoutWidget);
        cno_confirm->setObjectName(QStringLiteral("cno_confirm"));
        cno_confirm->setMinimumSize(QSize(0, 30));
        cno_confirm->setMaximumSize(QSize(16777215, 30));
        cno_confirm->setFont(font1);

        horizontalLayout->addWidget(cno_confirm);

        tableView = new QTableView(borrow_return_page);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 90, 601, 251));
        tableView->setFont(font1);
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(225, 245, 240);"));
        tableView_2 = new QTableView(borrow_return_page);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(50, 400, 601, 91));
        tableView_2->setFont(font1);
        tableView_2->setStyleSheet(QStringLiteral("background-color: rgb(225, 245, 240);"));
        horizontalLayoutWidget_2 = new QWidget(borrow_return_page);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(50, 340, 601, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(40);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        bno_sign = new QLabel(horizontalLayoutWidget_2);
        bno_sign->setObjectName(QStringLiteral("bno_sign"));
        bno_sign->setMinimumSize(QSize(0, 30));
        bno_sign->setMaximumSize(QSize(16777215, 30));
        bno_sign->setFont(font1);

        horizontalLayout_2->addWidget(bno_sign);

        bno_insertion = new QLineEdit(horizontalLayoutWidget_2);
        bno_insertion->setObjectName(QStringLiteral("bno_insertion"));
        bno_insertion->setMinimumSize(QSize(0, 30));
        bno_insertion->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(bno_insertion);

        bno_confirm = new QPushButton(horizontalLayoutWidget_2);
        bno_confirm->setObjectName(QStringLiteral("bno_confirm"));
        bno_confirm->setMinimumSize(QSize(0, 30));
        bno_confirm->setMaximumSize(QSize(16777215, 30));
        bno_confirm->setFont(font1);

        horizontalLayout_2->addWidget(bno_confirm);

        success_sign = new QLabel(borrow_return_page);
        success_sign->setObjectName(QStringLiteral("success_sign"));
        success_sign->setGeometry(QRect(50, 520, 101, 20));
        success_sign->setFont(font1);
        error_1 = new QLabel(borrow_return_page);
        error_1->setObjectName(QStringLiteral("error_1"));
        error_1->setGeometry(QRect(50, 520, 191, 20));
        error_1->setFont(font1);
        error_2 = new QLabel(borrow_return_page);
        error_2->setObjectName(QStringLiteral("error_2"));
        error_2->setGeometry(QRect(50, 520, 191, 20));
        error_2->setFont(font1);
        return_button = new QPushButton(borrow_return_page);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setGeometry(QRect(570, 520, 80, 30));
        return_button->setMinimumSize(QSize(0, 30));
        return_button->setMaximumSize(QSize(16777215, 30));
        return_button->setFont(font1);
        return_date_label = new QLabel(borrow_return_page);
        return_date_label->setObjectName(QStringLiteral("return_date_label"));
        return_date_label->setGeometry(QRect(320, 520, 141, 20));
        return_date_label->setFont(font1);
        error_3 = new QLabel(borrow_return_page);
        error_3->setObjectName(QStringLiteral("error_3"));
        error_3->setGeometry(QRect(50, 520, 261, 20));
        error_3->setFont(font1);

        retranslateUi(borrow_return_page);

        QMetaObject::connectSlotsByName(borrow_return_page);
    } // setupUi

    void retranslateUi(QWidget *borrow_return_page)
    {
        borrow_return_page->setWindowTitle(QApplication::translate("borrow_return_page", "Form", Q_NULLPTR));
        borrow_label->setText(QApplication::translate("borrow_return_page", "\345\233\276\344\271\246\345\200\237\351\230\205", Q_NULLPTR));
        return_label->setText(QApplication::translate("borrow_return_page", "\345\233\276\344\271\246\345\275\222\350\277\230", Q_NULLPTR));
        cno_sign->setText(QApplication::translate("borrow_return_page", "\350\257\267\350\276\223\345\205\245\345\200\237\344\271\246\350\257\201\345\217\267", Q_NULLPTR));
        cno_confirm->setText(QApplication::translate("borrow_return_page", "\347\241\256\350\256\244", Q_NULLPTR));
        bno_sign->setText(QApplication::translate("borrow_return_page", "\350\257\267\350\276\223\345\205\245\346\211\200\345\200\237\344\271\246\345\217\267", Q_NULLPTR));
        bno_confirm->setText(QApplication::translate("borrow_return_page", "\347\241\256\350\256\244", Q_NULLPTR));
        success_sign->setText(QApplication::translate("borrow_return_page", "\346\223\215\344\275\234\346\210\220\345\212\237\357\274\201", Q_NULLPTR));
        error_1->setText(QApplication::translate("borrow_return_page", "\350\257\245\344\271\246\346\227\240\345\272\223\345\255\230\357\274\201\346\234\200\350\277\221\345\275\222\350\277\230\357\274\232", Q_NULLPTR));
        error_2->setText(QApplication::translate("borrow_return_page", "\350\257\245\347\224\250\346\210\267\346\234\252\345\200\237\345\207\272\346\255\244\344\271\246\357\274\201", Q_NULLPTR));
        return_button->setText(QApplication::translate("borrow_return_page", "\350\277\224\345\233\236", Q_NULLPTR));
        return_date_label->setText(QString());
        error_3->setText(QApplication::translate("borrow_return_page", "\346\202\250\345\267\262\345\200\237\350\277\207\346\255\244\344\271\246,\350\257\267\345\213\277\351\207\215\345\244\215\345\200\237\345\207\272\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class borrow_return_page: public Ui_borrow_return_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROW_RETURN_PAGE_H
