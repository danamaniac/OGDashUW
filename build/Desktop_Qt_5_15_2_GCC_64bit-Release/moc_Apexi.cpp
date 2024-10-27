/****************************************************************************
** Meta object code from reading C++ file 'Apexi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Apexi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Apexi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Apexi_t {
    QByteArrayData data[53];
    char stringdata0[570];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Apexi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Apexi_t qt_meta_stringdata_Apexi = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Apexi"
QT_MOC_LITERAL(1, 6, 26), // "sig_adaptronicReadFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "readyToRead"
QT_MOC_LITERAL(4, 46, 13), // "handleTimeout"
QT_MOC_LITERAL(5, 60, 18), // "handleBytesWritten"
QT_MOC_LITERAL(6, 79, 5), // "bytes"
QT_MOC_LITERAL(7, 85, 11), // "handleError"
QT_MOC_LITERAL(8, 97, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(9, 126, 5), // "error"
QT_MOC_LITERAL(10, 132, 14), // "initSerialPort"
QT_MOC_LITERAL(11, 147, 14), // "openConnection"
QT_MOC_LITERAL(12, 162, 8), // "portName"
QT_MOC_LITERAL(13, 171, 15), // "closeConnection"
QT_MOC_LITERAL(14, 187, 12), // "retryconnect"
QT_MOC_LITERAL(15, 200, 5), // "clear"
QT_MOC_LITERAL(16, 206, 8), // "apexiECU"
QT_MOC_LITERAL(17, 215, 6), // "buffer"
QT_MOC_LITERAL(18, 222, 11), // "sendRequest"
QT_MOC_LITERAL(19, 234, 12), // "requestIndex"
QT_MOC_LITERAL(20, 247, 15), // "writeRequestPFC"
QT_MOC_LITERAL(21, 263, 8), // "readData"
QT_MOC_LITERAL(22, 272, 14), // "rawmessagedata"
QT_MOC_LITERAL(23, 287, 9), // "decodeAdv"
QT_MOC_LITERAL(24, 297, 12), // "decodeSensor"
QT_MOC_LITERAL(25, 310, 9), // "decodeAux"
QT_MOC_LITERAL(26, 320, 9), // "decodeMap"
QT_MOC_LITERAL(27, 330, 11), // "decodeBasic"
QT_MOC_LITERAL(28, 342, 10), // "decodeInit"
QT_MOC_LITERAL(29, 353, 19), // "decodeSensorStrings"
QT_MOC_LITERAL(30, 373, 13), // "calculatorAux"
QT_MOC_LITERAL(31, 387, 7), // "aux1min"
QT_MOC_LITERAL(32, 395, 7), // "aux2max"
QT_MOC_LITERAL(33, 403, 7), // "aux3min"
QT_MOC_LITERAL(34, 411, 7), // "aux4max"
QT_MOC_LITERAL(35, 419, 8), // "Auxunit1"
QT_MOC_LITERAL(36, 428, 8), // "Auxunit2"
QT_MOC_LITERAL(37, 437, 11), // "SetProtocol"
QT_MOC_LITERAL(38, 449, 14), // "protocolselect"
QT_MOC_LITERAL(39, 464, 7), // "Auxcalc"
QT_MOC_LITERAL(40, 472, 8), // "unitaux1"
QT_MOC_LITERAL(41, 481, 5), // "an1V0"
QT_MOC_LITERAL(42, 487, 5), // "an2V5"
QT_MOC_LITERAL(43, 493, 8), // "unitaux2"
QT_MOC_LITERAL(44, 502, 5), // "an3V0"
QT_MOC_LITERAL(45, 508, 5), // "an4V5"
QT_MOC_LITERAL(46, 514, 13), // "writeDashfile"
QT_MOC_LITERAL(47, 528, 6), // "gauge1"
QT_MOC_LITERAL(48, 535, 6), // "gauge2"
QT_MOC_LITERAL(49, 542, 6), // "gauge3"
QT_MOC_LITERAL(50, 549, 6), // "gauge4"
QT_MOC_LITERAL(51, 556, 6), // "gauge5"
QT_MOC_LITERAL(52, 563, 6) // "gauge6"

    },
    "Apexi\0sig_adaptronicReadFinished\0\0"
    "readyToRead\0handleTimeout\0handleBytesWritten\0"
    "bytes\0handleError\0QSerialPort::SerialPortError\0"
    "error\0initSerialPort\0openConnection\0"
    "portName\0closeConnection\0retryconnect\0"
    "clear\0apexiECU\0buffer\0sendRequest\0"
    "requestIndex\0writeRequestPFC\0readData\0"
    "rawmessagedata\0decodeAdv\0decodeSensor\0"
    "decodeAux\0decodeMap\0decodeBasic\0"
    "decodeInit\0decodeSensorStrings\0"
    "calculatorAux\0aux1min\0aux2max\0aux3min\0"
    "aux4max\0Auxunit1\0Auxunit2\0SetProtocol\0"
    "protocolselect\0Auxcalc\0unitaux1\0an1V0\0"
    "an2V5\0unitaux2\0an3V0\0an4V5\0writeDashfile\0"
    "gauge1\0gauge2\0gauge3\0gauge4\0gauge5\0"
    "gauge6"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Apexi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  140,    2, 0x0a /* Public */,
       4,    0,  141,    2, 0x0a /* Public */,
       5,    1,  142,    2, 0x0a /* Public */,
       7,    1,  145,    2, 0x0a /* Public */,
      10,    0,  148,    2, 0x0a /* Public */,
      11,    1,  149,    2, 0x0a /* Public */,
      13,    0,  152,    2, 0x0a /* Public */,
      14,    0,  153,    2, 0x0a /* Public */,
      15,    0,  154,    2, 0x0a /* Public */,
      16,    1,  155,    2, 0x0a /* Public */,
      18,    1,  158,    2, 0x0a /* Public */,
      20,    1,  161,    2, 0x0a /* Public */,
      21,    1,  164,    2, 0x0a /* Public */,
      23,    1,  167,    2, 0x0a /* Public */,
      24,    1,  170,    2, 0x0a /* Public */,
      25,    1,  173,    2, 0x0a /* Public */,
      26,    1,  176,    2, 0x0a /* Public */,
      27,    1,  179,    2, 0x0a /* Public */,
      28,    1,  182,    2, 0x0a /* Public */,
      29,    1,  185,    2, 0x0a /* Public */,
      30,    6,  188,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      37,    1,  201,    2, 0x02 /* Public */,
      39,    6,  204,    2, 0x02 /* Public */,
      46,    6,  217,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QString, QMetaType::QString,   31,   32,   33,   34,   35,   36,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QReal, QMetaType::QReal, QMetaType::QString, QMetaType::QReal, QMetaType::QReal,   40,   41,   42,   43,   44,   45,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   47,   48,   49,   50,   51,   52,

       0        // eod
};

void Apexi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Apexi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_adaptronicReadFinished(); break;
        case 1: _t->readyToRead(); break;
        case 2: _t->handleTimeout(); break;
        case 3: _t->handleBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 5: _t->initSerialPort(); break;
        case 6: _t->openConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->closeConnection(); break;
        case 8: _t->retryconnect(); break;
        case 9: _t->clear(); break;
        case 10: _t->apexiECU((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->sendRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->writeRequestPFC((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 13: _t->readData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 14: _t->decodeAdv((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 15: _t->decodeSensor((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 16: _t->decodeAux((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 17: _t->decodeMap((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 18: _t->decodeBasic((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 19: _t->decodeInit((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 20: _t->decodeSensorStrings((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 21: _t->calculatorAux((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 22: _t->SetProtocol((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 23: _t->Auxcalc((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const qreal(*)>(_a[5])),(*reinterpret_cast< const qreal(*)>(_a[6]))); break;
        case 24: _t->writeDashfile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Apexi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Apexi::sig_adaptronicReadFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Apexi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Apexi.data,
    qt_meta_data_Apexi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Apexi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Apexi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Apexi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Apexi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void Apexi::sig_adaptronicReadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
