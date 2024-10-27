/****************************************************************************
** Meta object code from reading C++ file 'gps.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../gps.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPS_t {
    QByteArrayData data[30];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPS_t qt_meta_stringdata_GPS = {
    {
QT_MOC_LITERAL(0, 0, 3), // "GPS"
QT_MOC_LITERAL(1, 4, 15), // "sig_linecrossed"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "openConnection"
QT_MOC_LITERAL(4, 36, 8), // "portName"
QT_MOC_LITERAL(5, 45, 4), // "Baud"
QT_MOC_LITERAL(6, 50, 14), // "ProcessMessage"
QT_MOC_LITERAL(7, 65, 11), // "messageline"
QT_MOC_LITERAL(8, 77, 13), // "removeNMEAmsg"
QT_MOC_LITERAL(9, 91, 13), // "setGPSBAUD115"
QT_MOC_LITERAL(10, 105, 10), // "setGPS10HZ"
QT_MOC_LITERAL(11, 116, 10), // "setGPSOnly"
QT_MOC_LITERAL(12, 127, 15), // "closeConnection"
QT_MOC_LITERAL(13, 143, 5), // "clear"
QT_MOC_LITERAL(14, 149, 11), // "readyToRead"
QT_MOC_LITERAL(15, 161, 13), // "handleTimeout"
QT_MOC_LITERAL(16, 175, 15), // "handleReconnect"
QT_MOC_LITERAL(17, 191, 11), // "handleError"
QT_MOC_LITERAL(18, 203, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(19, 232, 5), // "error"
QT_MOC_LITERAL(20, 238, 14), // "initSerialPort"
QT_MOC_LITERAL(21, 253, 7), // "logNMEA"
QT_MOC_LITERAL(22, 261, 4), // "line"
QT_MOC_LITERAL(23, 266, 16), // "defineFinishLine"
QT_MOC_LITERAL(24, 283, 2), // "Y1"
QT_MOC_LITERAL(25, 286, 2), // "X1"
QT_MOC_LITERAL(26, 289, 2), // "Y2"
QT_MOC_LITERAL(27, 292, 2), // "X2"
QT_MOC_LITERAL(28, 295, 17), // "defineFinishLine2"
QT_MOC_LITERAL(29, 313, 13) // "resetLaptimer"

    },
    "GPS\0sig_linecrossed\0\0openConnection\0"
    "portName\0Baud\0ProcessMessage\0messageline\0"
    "removeNMEAmsg\0setGPSBAUD115\0setGPS10HZ\0"
    "setGPSOnly\0closeConnection\0clear\0"
    "readyToRead\0handleTimeout\0handleReconnect\0"
    "handleError\0QSerialPort::SerialPortError\0"
    "error\0initSerialPort\0logNMEA\0line\0"
    "defineFinishLine\0Y1\0X1\0Y2\0X2\0"
    "defineFinishLine2\0resetLaptimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,  105,    2, 0x0a /* Public */,
       6,    1,  110,    2, 0x0a /* Public */,
       8,    0,  113,    2, 0x0a /* Public */,
       9,    0,  114,    2, 0x0a /* Public */,
      10,    0,  115,    2, 0x0a /* Public */,
      11,    0,  116,    2, 0x0a /* Public */,
      12,    0,  117,    2, 0x0a /* Public */,
      13,    0,  118,    2, 0x0a /* Public */,
      14,    0,  119,    2, 0x08 /* Private */,
      15,    0,  120,    2, 0x08 /* Private */,
      16,    0,  121,    2, 0x08 /* Private */,
      17,    1,  122,    2, 0x08 /* Private */,
      20,    0,  125,    2, 0x08 /* Private */,
      21,    1,  126,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      23,    4,  129,    2, 0x02 /* Public */,
      28,    4,  138,    2, 0x02 /* Public */,
      29,    0,  147,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   24,   25,   26,   27,
    QMetaType::Void,

       0        // eod
};

void GPS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_linecrossed(); break;
        case 1: _t->openConnection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->ProcessMessage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->removeNMEAmsg(); break;
        case 4: _t->setGPSBAUD115(); break;
        case 5: _t->setGPS10HZ(); break;
        case 6: _t->setGPSOnly(); break;
        case 7: _t->closeConnection(); break;
        case 8: _t->clear(); break;
        case 9: _t->readyToRead(); break;
        case 10: _t->handleTimeout(); break;
        case 11: _t->handleReconnect(); break;
        case 12: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 13: _t->initSerialPort(); break;
        case 14: _t->logNMEA((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->defineFinishLine((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4]))); break;
        case 16: _t->defineFinishLine2((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4]))); break;
        case 17: _t->resetLaptimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GPS::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPS::sig_linecrossed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GPS::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GPS.data,
    qt_meta_data_GPS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void GPS::sig_linecrossed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
