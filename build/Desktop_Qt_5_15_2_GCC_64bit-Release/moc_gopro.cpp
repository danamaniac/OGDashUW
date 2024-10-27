/****************************************************************************
** Meta object code from reading C++ file 'gopro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../gopro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gopro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GoPro_t {
    QByteArrayData data[10];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoPro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoPro_t qt_meta_stringdata_GoPro = {
    {
QT_MOC_LITERAL(0, 0, 5), // "GoPro"
QT_MOC_LITERAL(1, 6, 13), // "replyFinished"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 36, 5), // "reply"
QT_MOC_LITERAL(5, 42, 8), // "goprorec"
QT_MOC_LITERAL(6, 51, 6), // "record"
QT_MOC_LITERAL(7, 58, 13), // "goProSettings"
QT_MOC_LITERAL(8, 72, 11), // "goProSelect"
QT_MOC_LITERAL(9, 84, 9) // "goPropass"

    },
    "GoPro\0replyFinished\0\0QNetworkReply*\0"
    "reply\0goprorec\0record\0goProSettings\0"
    "goProSelect\0goPropass"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoPro[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x02 /* Public */,
       7,    2,   35,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,

       0        // eod
};

void GoPro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GoPro *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->goprorec((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->goProSettings((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GoPro::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GoPro.data,
    qt_meta_data_GoPro,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoPro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoPro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoPro.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GoPro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
