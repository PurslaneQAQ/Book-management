/****************************************************************************
** Meta object code from reading C++ file 'borrow_return_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../book_management_system/borrow_return_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'borrow_return_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_borrow_return_page_t {
    QByteArrayData data[4];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_borrow_return_page_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_borrow_return_page_t qt_meta_stringdata_borrow_return_page = {
    {
QT_MOC_LITERAL(0, 0, 18), // "borrow_return_page"
QT_MOC_LITERAL(1, 19, 21), // "cno_insertion_confirm"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21) // "bno_insertion_confirm"

    },
    "borrow_return_page\0cno_insertion_confirm\0"
    "\0bno_insertion_confirm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_borrow_return_page[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void borrow_return_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        borrow_return_page *_t = static_cast<borrow_return_page *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cno_insertion_confirm(); break;
        case 1: _t->bno_insertion_confirm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject borrow_return_page::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_borrow_return_page.data,
      qt_meta_data_borrow_return_page,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *borrow_return_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *borrow_return_page::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_borrow_return_page.stringdata0))
        return static_cast<void*>(const_cast< borrow_return_page*>(this));
    return QWidget::qt_metacast(_clname);
}

int borrow_return_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
