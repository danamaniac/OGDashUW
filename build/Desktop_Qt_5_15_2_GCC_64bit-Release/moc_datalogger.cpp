/****************************************************************************
** Meta object code from reading C++ file 'datalogger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../datalogger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datalogger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_datalogger_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_datalogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_datalogger_t qt_meta_stringdata_datalogger = {
    {
QT_MOC_LITERAL(0, 0, 10), // "datalogger"
QT_MOC_LITERAL(1, 11, 9), // "updateLog"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "createHeader"
QT_MOC_LITERAL(4, 35, 8), // "startLog"
QT_MOC_LITERAL(5, 44, 11), // "Logfilename"
QT_MOC_LITERAL(6, 56, 7) // "stopLog"

    },
    "datalogger\0updateLog\0\0createHeader\0"
    "startLog\0Logfilename\0stopLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_datalogger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x02 /* Public */,
       6,    0,   39,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void datalogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<datalogger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLog(); break;
        case 1: _t->createHeader(); break;
        case 2: _t->startLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->stopLog(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject datalogger::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_datalogger.data,
    qt_meta_data_datalogger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *datalogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *datalogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_datalogger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int datalogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
