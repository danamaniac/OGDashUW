/****************************************************************************
** Meta object code from reading C++ file 'AdaptronicSelect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../AdaptronicSelect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdaptronicSelect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdaptronicSelect_t {
    QByteArrayData data[11];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdaptronicSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdaptronicSelect_t qt_meta_stringdata_AdaptronicSelect = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AdaptronicSelect"
QT_MOC_LITERAL(1, 17, 26), // "sig_adaptronicReadFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "openConnection"
QT_MOC_LITERAL(4, 60, 8), // "portName"
QT_MOC_LITERAL(5, 69, 15), // "closeConnection"
QT_MOC_LITERAL(6, 85, 21), // "AdaptronicStartStream"
QT_MOC_LITERAL(7, 107, 11), // "readyToRead"
QT_MOC_LITERAL(8, 119, 16), // "decodeAdaptronic"
QT_MOC_LITERAL(9, 136, 15), // "QModbusDataUnit"
QT_MOC_LITERAL(10, 152, 10) // "serialdata"

    },
    "AdaptronicSelect\0sig_adaptronicReadFinished\0"
    "\0openConnection\0portName\0closeConnection\0"
    "AdaptronicStartStream\0readyToRead\0"
    "decodeAdaptronic\0QModbusDataUnit\0"
    "serialdata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdaptronicSelect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void AdaptronicSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdaptronicSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_adaptronicReadFinished(); break;
        case 1: _t->openConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->closeConnection(); break;
        case 3: _t->AdaptronicStartStream(); break;
        case 4: _t->readyToRead(); break;
        case 5: _t->decodeAdaptronic((*reinterpret_cast< QModbusDataUnit(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdaptronicSelect::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdaptronicSelect::sig_adaptronicReadFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdaptronicSelect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AdaptronicSelect.data,
    qt_meta_data_AdaptronicSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdaptronicSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdaptronicSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdaptronicSelect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AdaptronicSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AdaptronicSelect::sig_adaptronicReadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
