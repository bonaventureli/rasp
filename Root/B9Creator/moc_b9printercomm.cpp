/****************************************************************************
** Meta object code from reading C++ file 'b9printercomm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "b9printercomm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'b9printercomm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_B9FirmwareUpdate_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_B9FirmwareUpdate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_B9FirmwareUpdate_t qt_meta_stringdata_B9FirmwareUpdate = {
    {
QT_MOC_LITERAL(0, 0, 16)
    },
    "B9FirmwareUpdate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_B9FirmwareUpdate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void B9FirmwareUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject B9FirmwareUpdate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_B9FirmwareUpdate.data,
      qt_meta_data_B9FirmwareUpdate,  qt_static_metacall, 0, 0}
};


const QMetaObject *B9FirmwareUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *B9FirmwareUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_B9FirmwareUpdate.stringdata))
        return static_cast<void*>(const_cast< B9FirmwareUpdate*>(this));
    return QObject::qt_metacast(_clname);
}

int B9FirmwareUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_B9PrinterComm_t {
    QByteArrayData data[40];
    char stringdata[555];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_B9PrinterComm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_B9PrinterComm_t qt_meta_stringdata_B9PrinterComm = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 22),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 5),
QT_MOC_LITERAL(4, 44, 27),
QT_MOC_LITERAL(5, 72, 11),
QT_MOC_LITERAL(6, 84, 10),
QT_MOC_LITERAL(7, 95, 10),
QT_MOC_LITERAL(8, 106, 8),
QT_MOC_LITERAL(9, 115, 12),
QT_MOC_LITERAL(10, 128, 25),
QT_MOC_LITERAL(11, 154, 16),
QT_MOC_LITERAL(12, 171, 12),
QT_MOC_LITERAL(13, 184, 6),
QT_MOC_LITERAL(14, 191, 14),
QT_MOC_LITERAL(15, 206, 8),
QT_MOC_LITERAL(16, 215, 25),
QT_MOC_LITERAL(17, 241, 9),
QT_MOC_LITERAL(18, 251, 13),
QT_MOC_LITERAL(19, 265, 10),
QT_MOC_LITERAL(20, 276, 5),
QT_MOC_LITERAL(21, 282, 14),
QT_MOC_LITERAL(22, 297, 11),
QT_MOC_LITERAL(23, 309, 10),
QT_MOC_LITERAL(24, 320, 10),
QT_MOC_LITERAL(25, 331, 14),
QT_MOC_LITERAL(26, 346, 18),
QT_MOC_LITERAL(27, 365, 24),
QT_MOC_LITERAL(28, 390, 28),
QT_MOC_LITERAL(29, 419, 7),
QT_MOC_LITERAL(30, 427, 4),
QT_MOC_LITERAL(31, 432, 20),
QT_MOC_LITERAL(32, 453, 8),
QT_MOC_LITERAL(33, 462, 14),
QT_MOC_LITERAL(34, 477, 8),
QT_MOC_LITERAL(35, 486, 11),
QT_MOC_LITERAL(36, 498, 11),
QT_MOC_LITERAL(37, 510, 13),
QT_MOC_LITERAL(38, 524, 20),
QT_MOC_LITERAL(39, 545, 8)
    },
    "B9PrinterComm\0updateConnectionStatus\0"
    "\0sText\0BC_ConnectionStatusDetailed\0"
    "BC_LostCOMM\0BC_RawData\0BC_Comment\0"
    "sComment\0BC_HomeFound\0BC_ProjectorStatusChanged\0"
    "BC_ProjectorFAIL\0BC_ModelInfo\0sModel\0"
    "BC_FirmVersion\0sVersion\0"
    "BC_ProjectorRemoteCapable\0isCapable\0"
    "BC_HasShutter\0hasShutter\0BC_PU\0"
    "BC_UpperZLimPU\0BC_HalfLife\0BC_NativeX\0"
    "BC_NativeY\0BC_XYPixelSize\0BC_CurrentZPosInPU\0"
    "BC_CurrentVatPercentOpen\0"
    "BC_PrintReleaseCycleFinished\0SendCmd\0"
    "sCmd\0setProjectorPowerCmd\0bPwrFlag\0"
    "setWarmUpDelay\0iDelayMS\0setMirrored\0"
    "bIsMirrored\0ReadAvailable\0"
    "RefreshCommPortItems\0watchDog\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_B9PrinterComm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06,
       4,    1,  157,    2, 0x06,
       5,    0,  160,    2, 0x06,
       6,    1,  161,    2, 0x06,
       7,    1,  164,    2, 0x06,
       9,    0,  167,    2, 0x06,
      10,    0,  168,    2, 0x06,
      11,    0,  169,    2, 0x06,
      12,    1,  170,    2, 0x06,
      14,    1,  173,    2, 0x06,
      16,    1,  176,    2, 0x06,
      18,    1,  179,    2, 0x06,
      20,    1,  182,    2, 0x06,
      21,    1,  185,    2, 0x06,
      22,    1,  188,    2, 0x06,
      23,    1,  191,    2, 0x06,
      24,    1,  194,    2, 0x06,
      25,    1,  197,    2, 0x06,
      26,    1,  200,    2, 0x06,
      27,    1,  203,    2, 0x06,
      28,    0,  206,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      29,    1,  207,    2, 0x0a,
      31,    1,  210,    2, 0x0a,
      33,    1,  213,    2, 0x0a,
      35,    1,  216,    2, 0x0a,
      37,    0,  219,    2, 0x08,
      38,    0,  220,    2, 0x08,
      39,    0,  221,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void B9PrinterComm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        B9PrinterComm *_t = static_cast<B9PrinterComm *>(_o);
        switch (_id) {
        case 0: _t->updateConnectionStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->BC_ConnectionStatusDetailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->BC_LostCOMM(); break;
        case 3: _t->BC_RawData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->BC_Comment((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->BC_HomeFound(); break;
        case 6: _t->BC_ProjectorStatusChanged(); break;
        case 7: _t->BC_ProjectorFAIL(); break;
        case 8: _t->BC_ModelInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->BC_FirmVersion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->BC_ProjectorRemoteCapable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->BC_HasShutter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->BC_PU((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->BC_UpperZLimPU((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->BC_HalfLife((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->BC_NativeX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->BC_NativeY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->BC_XYPixelSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->BC_CurrentZPosInPU((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->BC_CurrentVatPercentOpen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->BC_PrintReleaseCycleFinished(); break;
        case 21: _t->SendCmd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->setProjectorPowerCmd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setWarmUpDelay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->setMirrored((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->ReadAvailable(); break;
        case 26: _t->RefreshCommPortItems(); break;
        case 27: _t->watchDog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (B9PrinterComm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::updateConnectionStatus)) {
                *result = 0;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_ConnectionStatusDetailed)) {
                *result = 1;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_LostCOMM)) {
                *result = 2;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_RawData)) {
                *result = 3;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_Comment)) {
                *result = 4;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_HomeFound)) {
                *result = 5;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_ProjectorStatusChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_ProjectorFAIL)) {
                *result = 7;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_ModelInfo)) {
                *result = 8;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_FirmVersion)) {
                *result = 9;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_ProjectorRemoteCapable)) {
                *result = 10;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_HasShutter)) {
                *result = 11;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_PU)) {
                *result = 12;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_UpperZLimPU)) {
                *result = 13;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_HalfLife)) {
                *result = 14;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_NativeX)) {
                *result = 15;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_NativeY)) {
                *result = 16;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_XYPixelSize)) {
                *result = 17;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_CurrentZPosInPU)) {
                *result = 18;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_CurrentVatPercentOpen)) {
                *result = 19;
            }
        }
        {
            typedef void (B9PrinterComm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9PrinterComm::BC_PrintReleaseCycleFinished)) {
                *result = 20;
            }
        }
    }
}

const QMetaObject B9PrinterComm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_B9PrinterComm.data,
      qt_meta_data_B9PrinterComm,  qt_static_metacall, 0, 0}
};


const QMetaObject *B9PrinterComm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *B9PrinterComm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_B9PrinterComm.stringdata))
        return static_cast<void*>(const_cast< B9PrinterComm*>(this));
    return QObject::qt_metacast(_clname);
}

int B9PrinterComm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void B9PrinterComm::updateConnectionStatus(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void B9PrinterComm::BC_ConnectionStatusDetailed(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void B9PrinterComm::BC_LostCOMM()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void B9PrinterComm::BC_RawData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void B9PrinterComm::BC_Comment(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void B9PrinterComm::BC_HomeFound()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void B9PrinterComm::BC_ProjectorStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void B9PrinterComm::BC_ProjectorFAIL()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void B9PrinterComm::BC_ModelInfo(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void B9PrinterComm::BC_FirmVersion(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void B9PrinterComm::BC_ProjectorRemoteCapable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void B9PrinterComm::BC_HasShutter(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void B9PrinterComm::BC_PU(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void B9PrinterComm::BC_UpperZLimPU(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void B9PrinterComm::BC_HalfLife(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void B9PrinterComm::BC_NativeX(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void B9PrinterComm::BC_NativeY(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void B9PrinterComm::BC_XYPixelSize(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void B9PrinterComm::BC_CurrentZPosInPU(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void B9PrinterComm::BC_CurrentVatPercentOpen(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void B9PrinterComm::BC_PrintReleaseCycleFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}
QT_END_MOC_NAMESPACE
