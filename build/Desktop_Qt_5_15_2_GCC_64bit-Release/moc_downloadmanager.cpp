/****************************************************************************
** Meta object code from reading C++ file 'downloadmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../downloadmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DownloadManager_t {
    QByteArrayData data[16];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DownloadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DownloadManager_t qt_meta_stringdata_DownloadManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DownloadManager"
QT_MOC_LITERAL(1, 16, 8), // "finished"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "downloadStatusChanged"
QT_MOC_LITERAL(4, 48, 14), // "downloadStatus"
QT_MOC_LITERAL(5, 63, 23), // "downloadFilenameChanged"
QT_MOC_LITERAL(6, 87, 16), // "downloadFilename"
QT_MOC_LITERAL(7, 104, 17), // "startNextDownload"
QT_MOC_LITERAL(8, 122, 16), // "downloadProgress"
QT_MOC_LITERAL(9, 139, 13), // "bytesReceived"
QT_MOC_LITERAL(10, 153, 10), // "bytesTotal"
QT_MOC_LITERAL(11, 164, 16), // "downloadFinished"
QT_MOC_LITERAL(12, 181, 17), // "downloadReadyRead"
QT_MOC_LITERAL(13, 199, 6), // "append"
QT_MOC_LITERAL(14, 206, 3), // "url"
QT_MOC_LITERAL(15, 210, 4) // "urls"

    },
    "DownloadManager\0finished\0\0"
    "downloadStatusChanged\0downloadStatus\0"
    "downloadFilenameChanged\0downloadFilename\0"
    "startNextDownload\0downloadProgress\0"
    "bytesReceived\0bytesTotal\0downloadFinished\0"
    "downloadReadyRead\0append\0url\0urls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   66,    2, 0x08 /* Private */,
       8,    2,   67,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    1,   74,    2, 0x02 /* Public */,
      13,    1,   77,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QUrl,   14,
    QMetaType::Void, QMetaType::QStringList,   15,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void DownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DownloadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->downloadStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->downloadFilenameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->startNextDownload(); break;
        case 4: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->downloadFinished(); break;
        case 6: _t->downloadReadyRead(); break;
        case 7: _t->append((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->append((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DownloadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadManager::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DownloadManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadManager::downloadStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DownloadManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadManager::downloadFilenameChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DownloadManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->downloadStatus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->downloadFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DownloadManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDownloadStatus(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDownloadFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DownloadManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DownloadManager.data,
    qt_meta_data_DownloadManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DownloadManager::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DownloadManager::downloadStatusChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DownloadManager::downloadFilenameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
