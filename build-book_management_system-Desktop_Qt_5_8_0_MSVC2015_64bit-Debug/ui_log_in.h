/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

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

class Ui_log_in
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *log_in_confirm;
    QPushButton *cancel;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *user_name;
    QLineEdit *user_name_input;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *password;
    QLineEdit *password_input;
    QLabel *error_sign;

    void setupUi(QWidget *log_in)
    {
        if (log_in->objectName().isEmpty())
            log_in->setObjectName(QStringLiteral("log_in"));
        log_in->resize(400, 300);
        horizontalLayoutWidget = new QWidget(log_in);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 200, 361, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_4->setSpacing(50);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(30, 0, 30, 0);
        log_in_confirm = new QPushButton(horizontalLayoutWidget);
        log_in_confirm->setObjectName(QStringLiteral("log_in_confirm"));

        horizontalLayout_4->addWidget(log_in_confirm);

        cancel = new QPushButton(horizontalLayoutWidget);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_4->addWidget(cancel);

        horizontalLayoutWidget_2 = new QWidget(log_in);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 20, 361, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(30, 30, 30, 0);
        user_name = new QLabel(horizontalLayoutWidget_2);
        user_name->setObjectName(QStringLiteral("user_name"));
        user_name->setMaximumSize(QSize(16777215, 16777212));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        user_name->setFont(font);
        user_name->setMargin(-2);

        horizontalLayout_5->addWidget(user_name);

        user_name_input = new QLineEdit(horizontalLayoutWidget_2);
        user_name_input->setObjectName(QStringLiteral("user_name_input"));

        horizontalLayout_5->addWidget(user_name_input);

        horizontalLayoutWidget_3 = new QWidget(log_in);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 110, 361, 80));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(30, 0, 30, 0);
        password = new QLabel(horizontalLayoutWidget_3);
        password->setObjectName(QStringLiteral("password"));
        password->setMaximumSize(QSize(16777215, 16777212));
        password->setFont(font);
        password->setMargin(-2);

        horizontalLayout_6->addWidget(password);

        password_input = new QLineEdit(horizontalLayoutWidget_3);
        password_input->setObjectName(QStringLiteral("password_input"));

        horizontalLayout_6->addWidget(password_input);

        error_sign = new QLabel(log_in);
        error_sign->setObjectName(QStringLiteral("error_sign"));
        error_sign->setGeometry(QRect(59, 180, 361, 20));
        error_sign->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(8);
        font1.setUnderline(true);
        error_sign->setFont(font1);

        retranslateUi(log_in);

        QMetaObject::connectSlotsByName(log_in);
    } // setupUi

    void retranslateUi(QWidget *log_in)
    {
        log_in->setWindowTitle(QApplication::translate("log_in", "Form", Q_NULLPTR));
        log_in_confirm->setText(QApplication::translate("log_in", "\347\231\273\345\275\225", Q_NULLPTR));
        cancel->setText(QApplication::translate("log_in", "\351\200\200\345\207\272", Q_NULLPTR));
        user_name->setText(QApplication::translate("log_in", " \347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        password->setText(QApplication::translate("log_in", " \345\257\206   \347\240\201 ", Q_NULLPTR));
        error_sign->setText(QApplication::translate("log_in", "\347\224\250\346\210\267\345\220\215\346\210\226\345\257\206\347\240\201\351\224\231\350\257\257\357\274\214\350\257\267\346\243\200\346\237\245\346\202\250\347\232\204\350\276\223\345\205\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class log_in: public Ui_log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
