/****************************************************************************
** Meta object code from reading C++ file 'b9updatemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "b9updatemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'b9updatemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_B9UpdateManager_t {
    QByteArrayData data[23];
    char stringdata[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_B9UpdateManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_B9UpdateManager_t qt_meta_stringdata_B9UpdateManager = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 20),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 19),
QT_MOC_LITERAL(4, 58, 16),
QT_MOC_LITERAL(5, 75, 15),
QT_MOC_LITERAL(6, 91, 7),
QT_MOC_LITERAL(7, 99, 15),
QT_MOC_LITERAL(8, 115, 14),
QT_MOC_LITERAL(9, 130, 5),
QT_MOC_LITERAL(10, 136, 14),
QT_MOC_LITERAL(11, 151, 14),
QT_MOC_LITERAL(12, 166, 17),
QT_MOC_LITERAL(13, 184, 15),
QT_MOC_LITERAL(14, 200, 19),
QT_MOC_LITERAL(15, 220, 18),
QT_MOC_LITERAL(16, 239, 22),
QT_MOC_LITERAL(17, 262, 12),
QT_MOC_LITERAL(18, 275, 26),
QT_MOC_LITERAL(19, 302, 12),
QT_MOC_LITERAL(20, 315, 14),
QT_MOC_LITERAL(21, 330, 9),
QT_MOC_LITERAL(22, 340, 6)
    },
    "B9UpdateManager\0NotifyUpdateFinished\0"
    "\0AutoCheckForUpdates\0StartNewDownload\0"
    "QNetworkRequest\0request\0OnRecievedReply\0"
    "QNetworkReply*\0reply\0OnDownloadDone\0"
    "OnCancelUpdate\0OnDownloadTimeout\0"
    "ResetEverything\0CopyInRemoteEntries\0"
    "CopyInLocalEntries\0CalculateUpdateEntries\0"
    "CopyFromTemp\0UpdateLocalFileVersionList\0"
    "NeedsUpdated\0B9UpdateEntry&\0candidate\0"
    "remote\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_B9UpdateManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x0a,
       4,    1,   86,    2, 0x08,
       7,    1,   89,    2, 0x08,
      10,    0,   92,    2, 0x08,
      11,    0,   93,    2, 0x08,
      12,    0,   94,    2, 0x08,
      13,    0,   95,    2, 0x08,
      14,    0,   96,    2, 0x08,
      15,    0,   97,    2, 0x08,
      16,    0,   98,    2, 0x08,
      17,    0,   99,    2, 0x08,
      18,    0,  100,    2, 0x08,
      19,    2,  101,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 20, 0x80000000 | 20,   21,   22,

       0        // eod
};

void B9UpdateManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        B9UpdateManager *_t = static_cast<B9UpdateManager *>(_o);
        switch (_id) {
        case 0: _t->NotifyUpdateFinished(); break;
        case 1: _t->AutoCheckForUpdates(); break;
        case 2: _t->StartNewDownload((*reinterpret_cast< QNetworkRequest(*)>(_a[1]))); break;
        case 3: _t->OnRecievedReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->OnDownloadDone();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->OnCancelUpdate(); break;
        case 6: _t->OnDownloadTimeout(); break;
        case 7: _t->ResetEverything(); break;
        case 8: _t->CopyInRemoteEntries(); break;
        case 9: _t->CopyInLocalEntries(); break;
        case 10: _t->CalculateUpdateEntries(); break;
        case 11: { bool _r = _t->CopyFromTemp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->UpdateLocalFileVersionList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->NeedsUpdated((*reinterpret_cast< B9UpdateEntry(*)>(_a[1])),(*reinterpret_cast< B9UpdateEntry(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (B9UpdateManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9UpdateManager::NotifyUpdateFinished)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject B9UpdateManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_B9UpdateManager.data,
      qt_meta_data_B9UpdateManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *B9UpdateManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *B9UpdateManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_B9UpdateManager.stringdata))
        return static_cast<void*>(const_cast< B9UpdateManager*>(this));
    return QObject::qt_metacast(_clname);
}

int B9UpdateManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void B9UpdateManager::NotifyUpdateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
