/****************************************************************************
** Meta object code from reading C++ file 'calculations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../calculations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_calculations_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_calculations_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_calculations_t qt_meta_stringdata_calculations = {
    {
QT_MOC_LITERAL(0, 0, 12), // "calculations"
QT_MOC_LITERAL(1, 13, 14), // "startdragtimer"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "startreactiontimer"
QT_MOC_LITERAL(4, 48, 11), // "qmlrealtime"
QT_MOC_LITERAL(5, 60, 17), // "stopreactiontimer"
QT_MOC_LITERAL(6, 78, 14), // "readodoandtrip"
QT_MOC_LITERAL(7, 93, 20), // "saveodoandtriptofile"
QT_MOC_LITERAL(8, 114, 9), // "calculate"
QT_MOC_LITERAL(9, 124, 5), // "start"
QT_MOC_LITERAL(10, 130, 4), // "stop"
QT_MOC_LITERAL(11, 135, 9) // "resettrip"

    },
    "calculations\0startdragtimer\0\0"
    "startreactiontimer\0qmlrealtime\0"
    "stopreactiontimer\0readodoandtrip\0"
    "saveodoandtriptofile\0calculate\0start\0"
    "stop\0resettrip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_calculations[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void calculations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<calculations *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startdragtimer(); break;
        case 1: _t->startreactiontimer(); break;
        case 2: _t->qmlrealtime(); break;
        case 3: _t->stopreactiontimer(); break;
        case 4: _t->readodoandtrip(); break;
        case 5: _t->saveodoandtriptofile(); break;
        case 6: _t->calculate(); break;
        case 7: _t->start(); break;
        case 8: _t->stop(); break;
        case 9: _t->resettrip(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject calculations::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_calculations.data,
    qt_meta_data_calculations,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *calculations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *calculations::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_calculations.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int calculations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
