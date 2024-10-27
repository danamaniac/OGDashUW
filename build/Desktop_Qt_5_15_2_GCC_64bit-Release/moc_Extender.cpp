/****************************************************************************
** Meta object code from reading C++ file 'Extender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Extender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Extender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Extender_t {
    QByteArrayData data[11];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Extender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Extender_t qt_meta_stringdata_Extender = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Extender"
QT_MOC_LITERAL(1, 9, 19), // "NewCanFrameReceived"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "canId"
QT_MOC_LITERAL(4, 36, 7), // "payload"
QT_MOC_LITERAL(5, 44, 13), // "Newtestsignal"
QT_MOC_LITERAL(6, 58, 7), // "openCAN"
QT_MOC_LITERAL(7, 66, 14), // "ExtenderBaseID"
QT_MOC_LITERAL(8, 81, 12), // "RPMCANBaseID"
QT_MOC_LITERAL(9, 94, 15), // "closeConnection"
QT_MOC_LITERAL(10, 110, 11) // "readyToRead"

    },
    "Extender\0NewCanFrameReceived\0\0canId\0"
    "payload\0Newtestsignal\0openCAN\0"
    "ExtenderBaseID\0RPMCANBaseID\0closeConnection\0"
    "readyToRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Extender[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   45,    2, 0x0a /* Public */,
       9,    0,   50,    2, 0x0a /* Public */,
      10,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Extender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Extender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewCanFrameReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->Newtestsignal(); break;
        case 2: _t->openCAN((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->closeConnection(); break;
        case 4: _t->readyToRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Extender::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Extender::NewCanFrameReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Extender::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Extender::Newtestsignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Extender::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Extender.data,
    qt_meta_data_Extender,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Extender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Extender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Extender.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Extender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Extender::NewCanFrameReceived(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Extender::Newtestsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
