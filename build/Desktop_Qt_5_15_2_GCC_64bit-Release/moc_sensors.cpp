/****************************************************************************
** Meta object code from reading C++ file 'sensors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../sensors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sensors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sensors_t {
    QByteArrayData data[13];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sensors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sensors_t qt_meta_stringdata_Sensors = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Sensors"
QT_MOC_LITERAL(1, 8, 13), // "updateCompass"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "updateAccel"
QT_MOC_LITERAL(4, 35, 10), // "updateGyro"
QT_MOC_LITERAL(5, 46, 17), // "updateAmbientSens"
QT_MOC_LITERAL(6, 64, 18), // "updatePressureSens"
QT_MOC_LITERAL(7, 83, 5), // "error"
QT_MOC_LITERAL(8, 89, 4), // "Comp"
QT_MOC_LITERAL(9, 94, 5), // "Accel"
QT_MOC_LITERAL(10, 100, 4), // "Gyro"
QT_MOC_LITERAL(11, 105, 11), // "Temperature"
QT_MOC_LITERAL(12, 117, 8) // "Pressure"

    },
    "Sensors\0updateCompass\0\0updateAccel\0"
    "updateGyro\0updateAmbientSens\0"
    "updatePressureSens\0error\0Comp\0Accel\0"
    "Gyro\0Temperature\0Pressure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sensors[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    1,   74,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   77,    2, 0x02 /* Public */,
       9,    0,   78,    2, 0x02 /* Public */,
      10,    0,   79,    2, 0x02 /* Public */,
      11,    0,   80,    2, 0x02 /* Public */,
      12,    0,   81,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sensors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sensors *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCompass(); break;
        case 1: _t->updateAccel(); break;
        case 2: _t->updateGyro(); break;
        case 3: _t->updateAmbientSens(); break;
        case 4: _t->updatePressureSens(); break;
        case 5: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->Comp(); break;
        case 7: _t->Accel(); break;
        case 8: _t->Gyro(); break;
        case 9: _t->Temperature(); break;
        case 10: _t->Pressure(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Sensors::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Sensors.data,
    qt_meta_data_Sensors,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Sensors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sensors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sensors.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Sensors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
