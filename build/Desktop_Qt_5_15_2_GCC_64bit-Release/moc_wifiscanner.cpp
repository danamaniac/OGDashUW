/****************************************************************************
** Meta object code from reading C++ file 'wifiscanner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../wifiscanner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wifiscanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WifiScanner_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WifiScanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WifiScanner_t qt_meta_stringdata_WifiScanner = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WifiScanner"
QT_MOC_LITERAL(1, 12, 19), // "getconnectionStatus"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "initializeWifiscanner"
QT_MOC_LITERAL(4, 55, 7), // "setwifi"
QT_MOC_LITERAL(5, 63, 7), // "country"
QT_MOC_LITERAL(6, 71, 5), // "ssid1"
QT_MOC_LITERAL(7, 77, 4), // "psk1"
QT_MOC_LITERAL(8, 82, 5), // "ssid2"
QT_MOC_LITERAL(9, 88, 4) // "psk2"

    },
    "WifiScanner\0getconnectionStatus\0\0"
    "initializeWifiscanner\0setwifi\0country\0"
    "ssid1\0psk1\0ssid2\0psk2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WifiScanner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x02 /* Public */,
       4,    5,   31,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,    9,

       0        // eod
};

void WifiScanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WifiScanner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getconnectionStatus(); break;
        case 1: _t->initializeWifiscanner(); break;
        case 2: _t->setwifi((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WifiScanner::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WifiScanner.data,
    qt_meta_data_WifiScanner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WifiScanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WifiScanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WifiScanner.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WifiScanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
