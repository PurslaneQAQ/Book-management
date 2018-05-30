/********************************************************************************
** Form generated from reading UI file 'main_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_MENU_H
#define UI_MAIN_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_menu
{
public:
    QWidget *centralWidget;
    QPushButton *card_management;
    QPushButton *return_book;
    QPushButton *borrow_book;
    QPushButton *add_book;
    QPushButton *search_book;
    QPushButton *dba_log_in;
    QPushButton *dba_log_out;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QWidget *main_menu)
    {
        if (main_menu->objectName().isEmpty())
            main_menu->setObjectName(QStringLiteral("main_menu"));
        main_menu->resize(720, 576);
        main_menu->setMinimumSize(QSize(720, 576));
        main_menu->setMaximumSize(QSize(720, 576));
        centralWidget = new QWidget(main_menu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        card_management = new QPushButton(centralWidget);
        card_management->setObjectName(QStringLiteral("card_management"));
        card_management->setGeometry(QRect(420, 120, 80, 16));
        return_book = new QPushButton(centralWidget);
        return_book->setObjectName(QStringLiteral("return_book"));
        return_book->setGeometry(QRect(420, 170, 80, 16));
        borrow_book = new QPushButton(centralWidget);
        borrow_book->setObjectName(QStringLiteral("borrow_book"));
        borrow_book->setGeometry(QRect(10, 170, 80, 16));
        add_book = new QPushButton(centralWidget);
        add_book->setObjectName(QStringLiteral("add_book"));
        add_book->setGeometry(QRect(10, 120, 80, 16));
        search_book = new QPushButton(centralWidget);
        search_book->setObjectName(QStringLiteral("search_book"));
        search_book->setGeometry(QRect(10, 220, 80, 15));
        dba_log_in = new QPushButton(centralWidget);
        dba_log_in->setObjectName(QStringLiteral("dba_log_in"));
        dba_log_in->setGeometry(QRect(420, 220, 80, 15));
        dba_log_out = new QPushButton(centralWidget);
        dba_log_out->setObjectName(QStringLiteral("dba_log_out"));
        dba_log_out->setGeometry(QRect(420, 240, 80, 15));
        mainToolBar = new QToolBar(main_menu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        statusBar = new QStatusBar(main_menu);
        statusBar->setObjectName(QStringLiteral("statusBar"));

        retranslateUi(main_menu);

        QMetaObject::connectSlotsByName(main_menu);
    } // setupUi

    void retranslateUi(QWidget *main_menu)
    {
        main_menu->setWindowTitle(QApplication::translate("main_menu", "MainWindow", Q_NULLPTR));
        card_management->setText(QApplication::translate("main_menu", "\345\200\237\344\271\246\350\257\201\347\256\241\347\220\206", Q_NULLPTR));
        return_book->setText(QApplication::translate("main_menu", "\350\277\230\344\271\246", Q_NULLPTR));
        borrow_book->setText(QApplication::translate("main_menu", "\345\200\237\344\271\246", Q_NULLPTR));
        add_book->setText(QApplication::translate("main_menu", "\345\233\276\344\271\246\345\205\245\345\272\223", Q_NULLPTR));
        search_book->setText(QApplication::translate("main_menu", "\345\233\276\344\271\246\346\237\245\350\257\242", Q_NULLPTR));
        dba_log_in->setText(QApplication::translate("main_menu", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
        dba_log_out->setText(QApplication::translate("main_menu", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class main_menu: public Ui_main_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_MENU_H
