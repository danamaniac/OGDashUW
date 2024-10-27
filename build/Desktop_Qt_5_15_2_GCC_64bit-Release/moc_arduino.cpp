/****************************************************************************
** Meta object code from reading C++ file 'arduino.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../arduino.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arduino.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Arduino_t {
    QByteArrayData data[13];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Arduino_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Arduino_t qt_meta_stringdata_Arduino = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Arduino"
QT_MOC_LITERAL(1, 8, 11), // "readyToRead"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "handleError"
QT_MOC_LITERAL(4, 33, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(5, 62, 5), // "error"
QT_MOC_LITERAL(6, 68, 14), // "initSerialPort"
QT_MOC_LITERAL(7, 83, 14), // "openConnection"
QT_MOC_LITERAL(8, 98, 8), // "portName"
QT_MOC_LITERAL(9, 107, 15), // "closeConnection"
QT_MOC_LITERAL(10, 123, 5), // "clear"
QT_MOC_LITERAL(11, 129, 15), // "assemblemessage"
QT_MOC_LITERAL(12, 145, 6) // "buffer"

    },
    "Arduino\0readyToRead\0\0handleError\0"
    "QSerialPort::SerialPortError\0error\0"
    "initSerialPort\0openConnection\0portName\0"
    "closeConnection\0clear\0assemblemessage\0"
    "buffer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Arduino[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   12,

       0        // eod
};

void Arduino::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Arduino *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyToRead(); break;
        case 1: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 2: _t->initSerialPort(); break;
        case 3: _t->openConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->closeConnection(); break;
        case 5: _t->clear(); break;
        case 6: _t->assemblemessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Arduino::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Arduino.data,
    qt_meta_data_Arduino,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Arduino::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Arduino::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Arduino.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Arduino::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
