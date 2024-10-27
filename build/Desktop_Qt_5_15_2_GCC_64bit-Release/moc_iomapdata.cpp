/****************************************************************************
** Meta object code from reading C++ file 'iomapdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../iomapdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iomapdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ioMapData_t {
    QByteArrayData data[19];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ioMapData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ioMapData_t qt_meta_stringdata_ioMapData = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ioMapData"
QT_MOC_LITERAL(1, 10, 11), // "loadMapData"
QT_MOC_LITERAL(2, 22, 8), // "QGeoPath"
QT_MOC_LITERAL(3, 31, 0), // ""
QT_MOC_LITERAL(4, 32, 7), // "country"
QT_MOC_LITERAL(5, 40, 9), // "trackName"
QT_MOC_LITERAL(6, 50, 8), // "parseKML"
QT_MOC_LITERAL(7, 59, 14), // "QList<QString>"
QT_MOC_LITERAL(8, 74, 4), // "list"
QT_MOC_LITERAL(9, 79, 12), // "getCountries"
QT_MOC_LITERAL(10, 92, 9), // "getTracks"
QT_MOC_LITERAL(11, 102, 13), // "getTrackCount"
QT_MOC_LITERAL(12, 116, 15), // "getCountryCount"
QT_MOC_LITERAL(13, 132, 9), // "getCenter"
QT_MOC_LITERAL(14, 142, 18), // "getStartFinishLine"
QT_MOC_LITERAL(15, 161, 19), // "getSecondFinishLine"
QT_MOC_LITERAL(16, 181, 12), // "getZOOMLEVEL"
QT_MOC_LITERAL(17, 194, 21), // "getExistsSecondFinish"
QT_MOC_LITERAL(18, 216, 14) // "getTrackExists"

    },
    "ioMapData\0loadMapData\0QGeoPath\0\0country\0"
    "trackName\0parseKML\0QList<QString>\0"
    "list\0getCountries\0getTracks\0getTrackCount\0"
    "getCountryCount\0getCenter\0getStartFinishLine\0"
    "getSecondFinishLine\0getZOOMLEVEL\0"
    "getExistsSecondFinish\0getTrackExists"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ioMapData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   74,    3, 0x02 /* Public */,
       6,    1,   79,    3, 0x02 /* Public */,
       9,    0,   82,    3, 0x02 /* Public */,
      10,    1,   83,    3, 0x02 /* Public */,
      11,    1,   86,    3, 0x02 /* Public */,
      12,    0,   89,    3, 0x02 /* Public */,
      13,    2,   90,    3, 0x02 /* Public */,
      14,    2,   95,    3, 0x02 /* Public */,
      15,    2,  100,    3, 0x02 /* Public */,
      16,    2,  105,    3, 0x02 /* Public */,
      17,    2,  110,    3, 0x02 /* Public */,
      18,    2,  115,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,
    0x80000000 | 2, 0x80000000 | 7,    8,
    0x80000000 | 7,
    0x80000000 | 7, QMetaType::QString,    4,
    QMetaType::Int, QMetaType::QString,    4,
    QMetaType::Int,
    0x80000000 | 7, QMetaType::QString, QMetaType::QString,    4,    5,
    0x80000000 | 7, QMetaType::QString, QMetaType::QString,    4,    5,
    0x80000000 | 7, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::QReal, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    4,    5,

       0        // eod
};

void ioMapData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ioMapData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QGeoPath _r = _t->loadMapData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGeoPath*>(_a[0]) = std::move(_r); }  break;
        case 1: { QGeoPath _r = _t->parseKML((*reinterpret_cast< QList<QString>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoPath*>(_a[0]) = std::move(_r); }  break;
        case 2: { QList<QString> _r = _t->getCountries();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QList<QString> _r = _t->getTracks((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->getTrackCount((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->getCountryCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<QString> _r = _t->getCenter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QList<QString> _r = _t->getStartFinishLine((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QList<QString> _r = _t->getSecondFinishLine((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 9: { qreal _r = _t->getZOOMLEVEL((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->getExistsSecondFinish((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->getTrackExists((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ioMapData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ioMapData.data,
    qt_meta_data_ioMapData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ioMapData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ioMapData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ioMapData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ioMapData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
