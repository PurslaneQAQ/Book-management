/********************************************************************************
** Form generated from reading UI file 'card_management_page.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARD_MANAGEMENT_PAGE_H
#define UI_CARD_MANAGEMENT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_card_management_page
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *cno;
    QLineEdit *name;
    QLineEdit *dprt;
    QComboBox *type;
    QPushButton *insert;
    QPushButton *delete_c;
    QPushButton *return_button;
    QTableView *tableView;

    void setupUi(QWidget *card_management_page)
    {
        if (card_management_page->objectName().isEmpty())
            card_management_page->setObjectName(QStringLiteral("card_management_page"));
        card_management_page->resize(720, 576);
        label = new QLabel(card_management_page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 10, 131, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        horizontalLayoutWidget = new QWidget(card_management_page);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 30, 631, 102));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cno = new QLineEdit(horizontalLayoutWidget);
        cno->setObjectName(QStringLiteral("cno"));
        cno->setMinimumSize(QSize(100, 30));
        cno->setMaximumSize(QSize(100, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        cno->setFont(font1);

        horizontalLayout->addWidget(cno);

        name = new QLineEdit(horizontalLayoutWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setMinimumSize(QSize(100, 30));
        name->setMaximumSize(QSize(100, 30));
        name->setFont(font1);

        horizontalLayout->addWidget(name);

        dprt = new QLineEdit(horizontalLayoutWidget);
        dprt->setObjectName(QStringLiteral("dprt"));
        dprt->setMinimumSize(QSize(100, 30));
        dprt->setMaximumSize(QSize(100, 30));
        dprt->setFont(font1);

        horizontalLayout->addWidget(dprt);

        type = new QComboBox(horizontalLayoutWidget);
        type->setObjectName(QStringLiteral("type"));
        type->setMinimumSize(QSize(40, 30));
        type->setMaximumSize(QSize(40, 30));

        horizontalLayout->addWidget(type);

        insert = new QPushButton(horizontalLayoutWidget);
        insert->setObjectName(QStringLiteral("insert"));
        insert->setMinimumSize(QSize(60, 30));
        insert->setMaximumSize(QSize(60, 30));
        insert->setFont(font1);

        horizontalLayout->addWidget(insert);

        delete_c = new QPushButton(horizontalLayoutWidget);
        delete_c->setObjectName(QStringLiteral("delete_c"));
        delete_c->setMinimumSize(QSize(60, 30));
        delete_c->setMaximumSize(QSize(60, 30));
        delete_c->setFont(font1);

        horizontalLayout->addWidget(delete_c);

        return_button = new QPushButton(horizontalLayoutWidget);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setMinimumSize(QSize(60, 30));
        return_button->setMaximumSize(QSize(60, 30));
        return_button->setFont(font1);

        horizontalLayout->addWidget(return_button);

        tableView = new QTableView(card_management_page);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(15, 105, 691, 451));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(225, 245, 240);"));

        retranslateUi(card_management_page);

        QMetaObject::connectSlotsByName(card_management_page);
    } // setupUi

    void retranslateUi(QWidget *card_management_page)
    {
        card_management_page->setWindowTitle(QApplication::translate("card_management_page", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("card_management_page", "\345\200\237\344\271\246\350\257\201\347\256\241\347\220\206", Q_NULLPTR));
        cno->setText(QApplication::translate("card_management_page", "\345\200\237\344\271\246\350\257\201\345\217\267", Q_NULLPTR));
        name->setText(QApplication::translate("card_management_page", "\345\247\223\345\220\215", Q_NULLPTR));
        dprt->setText(QApplication::translate("card_management_page", "\351\231\242\347\263\273", Q_NULLPTR));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("card_management_page", "T", Q_NULLPTR)
         << QApplication::translate("card_management_page", "G", Q_NULLPTR)
         << QApplication::translate("card_management_page", "U", Q_NULLPTR)
         << QApplication::translate("card_management_page", "O", Q_NULLPTR)
        );
        insert->setText(QApplication::translate("card_management_page", "\346\217\222\345\205\245", Q_NULLPTR));
        delete_c->setText(QApplication::translate("card_management_page", "\345\210\240\351\231\244", Q_NULLPTR));
        return_button->setText(QApplication::translate("card_management_page", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class card_management_page: public Ui_card_management_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARD_MANAGEMENT_PAGE_H
