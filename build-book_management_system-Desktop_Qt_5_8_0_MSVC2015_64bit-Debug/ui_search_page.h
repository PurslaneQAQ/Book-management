/********************************************************************************
** Form generated from reading UI file 'search_page.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_PAGE_H
#define UI_SEARCH_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search_page
{
public:
    QLabel *label;
    QTableView *tableView;
    QSpinBox *year_section;
    QSpinBox *year_section_2;
    QDoubleSpinBox *min_price;
    QDoubleSpinBox *max_price;
    QComboBox *search_basis;
    QLineEdit *search_input;
    QComboBox *search_basis_2;
    QPushButton *search_button;
    QLineEdit *search_input_2;
    QPushButton *return_main;
    QLabel *to;
    QLabel *to_2;

    void setupUi(QWidget *search_page)
    {
        if (search_page->objectName().isEmpty())
            search_page->setObjectName(QStringLiteral("search_page"));
        search_page->resize(720, 576);
        search_page->setAcceptDrops(false);
        search_page->setToolTipDuration(0);
        label = new QLabel(search_page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 10, 131, 40));
        label->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableView = new QTableView(search_page);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(15, 105, 691, 451));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(225, 245, 240);"));
        year_section = new QSpinBox(search_page);
        year_section->setObjectName(QStringLiteral("year_section"));
        year_section->setGeometry(QRect(130, 110, 42, 30));
        year_section->setMinimumSize(QSize(0, 30));
        year_section->setMaximumSize(QSize(16777215, 30));
        year_section->setToolTipDuration(-1);
        year_section->setMinimum(1900);
        year_section->setMaximum(2017);
        year_section->setValue(2017);
        year_section->setDisplayIntegerBase(10);
        year_section_2 = new QSpinBox(search_page);
        year_section_2->setObjectName(QStringLiteral("year_section_2"));
        year_section_2->setGeometry(QRect(210, 110, 42, 30));
        year_section_2->setMinimumSize(QSize(0, 30));
        year_section_2->setMaximumSize(QSize(16777215, 30));
        year_section_2->setMinimum(1800);
        year_section_2->setMaximum(2017);
        year_section_2->setValue(2017);
        min_price = new QDoubleSpinBox(search_page);
        min_price->setObjectName(QStringLiteral("min_price"));
        min_price->setGeometry(QRect(340, 110, 62, 30));
        min_price->setMaximum(300);
        min_price->setSingleStep(5);
        min_price->setValue(5);
        max_price = new QDoubleSpinBox(search_page);
        max_price->setObjectName(QStringLiteral("max_price"));
        max_price->setGeometry(QRect(420, 110, 62, 30));
        max_price->setMaximum(300);
        max_price->setSingleStep(5);
        max_price->setValue(50);
        search_basis = new QComboBox(search_page);
        search_basis->setObjectName(QStringLiteral("search_basis"));
        search_basis->setGeometry(QRect(15, 60, 70, 30));
        search_basis->setMinimumSize(QSize(70, 30));
        search_basis->setMaximumSize(QSize(70, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        search_basis->setFont(font1);
        search_basis->setEditable(false);
        search_input = new QLineEdit(search_page);
        search_input->setObjectName(QStringLiteral("search_input"));
        search_input->setGeometry(QRect(95, 60, 180, 30));
        search_input->setMinimumSize(QSize(180, 30));
        search_input->setMaximumSize(QSize(180, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        search_input->setFont(font2);
        search_basis_2 = new QComboBox(search_page);
        search_basis_2->setObjectName(QStringLiteral("search_basis_2"));
        search_basis_2->setGeometry(QRect(285, 60, 70, 30));
        search_basis_2->setMinimumSize(QSize(70, 30));
        search_basis_2->setMaximumSize(QSize(70, 30));
        search_basis_2->setFont(font1);
        search_basis_2->setEditable(false);
        search_button = new QPushButton(search_page);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setGeometry(QRect(555, 60, 70, 30));
        search_button->setMinimumSize(QSize(70, 30));
        search_button->setMaximumSize(QSize(70, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        search_button->setFont(font3);
        search_input_2 = new QLineEdit(search_page);
        search_input_2->setObjectName(QStringLiteral("search_input_2"));
        search_input_2->setGeometry(QRect(365, 60, 180, 30));
        search_input_2->setMinimumSize(QSize(180, 30));
        search_input_2->setMaximumSize(QSize(180, 30));
        search_input_2->setFont(font2);
        return_main = new QPushButton(search_page);
        return_main->setObjectName(QStringLiteral("return_main"));
        return_main->setGeometry(QRect(635, 60, 70, 30));
        return_main->setMinimumSize(QSize(70, 30));
        return_main->setMaximumSize(QSize(70, 30));
        return_main->setFont(font2);
        to = new QLabel(search_page);
        to->setObjectName(QStringLiteral("to"));
        to->setGeometry(QRect(190, 120, 16, 20));
        to_2 = new QLabel(search_page);
        to_2->setObjectName(QStringLiteral("to_2"));
        to_2->setGeometry(QRect(410, 120, 16, 20));

        retranslateUi(search_page);

        search_basis->setCurrentIndex(2);
        search_basis_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(search_page);
    } // setupUi

    void retranslateUi(QWidget *search_page)
    {
        search_page->setWindowTitle(QApplication::translate("search_page", "\344\271\246\347\233\256\346\243\200\347\264\242", Q_NULLPTR));
        label->setText(QApplication::translate("search_page", "\344\271\246\347\233\256\346\243\200\347\264\242", Q_NULLPTR));
        year_section->setPrefix(QString());
        search_basis->clear();
        search_basis->insertItems(0, QStringList()
         << QApplication::translate("search_page", "\344\271\246\345\217\267", Q_NULLPTR)
         << QApplication::translate("search_page", "\347\261\273\345\210\253", Q_NULLPTR)
         << QApplication::translate("search_page", "\344\271\246\345\220\215", Q_NULLPTR)
         << QApplication::translate("search_page", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR)
         << QApplication::translate("search_page", "\345\271\264\344\273\275", Q_NULLPTR)
         << QApplication::translate("search_page", "\344\275\234\350\200\205", Q_NULLPTR)
         << QApplication::translate("search_page", "\344\273\267\346\240\274", Q_NULLPTR)
         << QString()
        );
        search_basis_2->clear();
        search_basis_2->insertItems(0, QStringList()
         << QApplication::translate("search_page", "\344\271\246\345\217\267", Q_NULLPTR)
         << QApplication::translate("search_page", "\347\261\273\345\210\253", Q_NULLPTR)
         << QApplication::translate("search_page", "\344\271\246\345\220\215", Q_NULLPTR)
         << QApplication::translate("search_page", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR)
         << QApplication::translate("search_page", "\345\271\264\344\273\275", Q_NULLPTR)
         << QApplication::translate("search_page", "\344\275\234\350\200\205", Q_NULLPTR)
         << QApplication::translate("search_page", "\344\273\267\346\240\274", Q_NULLPTR)
         << QString()
        );
        search_button->setText(QApplication::translate("search_page", "\346\220\234 \347\264\242", Q_NULLPTR));
        search_input_2->setInputMask(QString());
        return_main->setText(QApplication::translate("search_page", "\350\277\224\345\233\236", Q_NULLPTR));
        to->setText(QApplication::translate("search_page", "to", Q_NULLPTR));
        to_2->setText(QApplication::translate("search_page", "to", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class search_page: public Ui_search_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_PAGE_H
