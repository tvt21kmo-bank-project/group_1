/****************************************************************************
** Meta object code from reading C++ file 'valikko.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bankautomat/valikko.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valikko.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_valikko_t {
    QByteArrayData data[12];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_valikko_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_valikko_t qt_meta_stringdata_valikko = {
    {
QT_MOC_LITERAL(0, 0, 7), // "valikko"
QT_MOC_LITERAL(1, 8, 19), // "on_btnNosto_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "on_btnSaldoKysely_clicked"
QT_MOC_LITERAL(4, 55, 25), // "on_btnRahanSiirto_clicked"
QT_MOC_LITERAL(5, 81, 25), // "on_btnPininVaihto_clicked"
QT_MOC_LITERAL(6, 107, 26), // "on_btnKirjauduUlos_clicked"
QT_MOC_LITERAL(7, 134, 11), // "tulostainfo"
QT_MOC_LITERAL(8, 146, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 161, 5), // "reply"
QT_MOC_LITERAL(10, 167, 9), // "haetyyppi"
QT_MOC_LITERAL(11, 177, 28) // "on_btnTilitapahtumat_clicked"

    },
    "valikko\0on_btnNosto_clicked\0\0"
    "on_btnSaldoKysely_clicked\0"
    "on_btnRahanSiirto_clicked\0"
    "on_btnPininVaihto_clicked\0"
    "on_btnKirjauduUlos_clicked\0tulostainfo\0"
    "QNetworkReply*\0reply\0haetyyppi\0"
    "on_btnTilitapahtumat_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_valikko[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void valikko::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        valikko *_t = static_cast<valikko *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnNosto_clicked(); break;
        case 1: _t->on_btnSaldoKysely_clicked(); break;
        case 2: _t->on_btnRahanSiirto_clicked(); break;
        case 3: _t->on_btnPininVaihto_clicked(); break;
        case 4: _t->on_btnKirjauduUlos_clicked(); break;
        case 5: _t->tulostainfo((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->haetyyppi((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->on_btnTilitapahtumat_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject valikko::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_valikko.data,
      qt_meta_data_valikko,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *valikko::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *valikko::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_valikko.stringdata0))
        return static_cast<void*>(const_cast< valikko*>(this));
    return QWidget::qt_metacast(_clname);
}

int valikko::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
