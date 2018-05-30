#-------------------------------------------------
#
# Project created by QtCreator 2017-04-12T01:08:47
#
#-------------------------------------------------

QT       += core gui\
      sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = book_management_system
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    log_in.cpp \
    search_page.cpp \
    main_menu.cpp \
    add_book_page.cpp \
    card_management_page.cpp \
    borrow_return_page.cpp

HEADERS  += mainwindow.h \
    log_in.h \
    bms.h \
    search_page.h \
    main_menu.h \
    add_book_page.h \
    card_management_page.h \
    borrow_return_page.h

FORMS    += \
    log_in.ui \
    search_page.ui \
    main_menu.ui \
    add_book_page.ui \
    card_management_page.ui \
    borrow_return_page.ui

DISTFILES += \
    timg.jpg

