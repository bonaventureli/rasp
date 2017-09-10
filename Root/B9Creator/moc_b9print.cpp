/****************************************************************************
** Meta object code from reading C++ file 'b9print.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "b9print.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'b9print.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_B9Print_t {
    QByteArrayData data[21];
    char stringdata[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_B9Print_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_B9Print_t qt_meta_stringdata_B9Print = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 11),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 14),
QT_MOC_LITERAL(4, 36, 5),
QT_MOC_LITERAL(5, 42, 11),
QT_MOC_LITERAL(6, 54, 8),
QT_MOC_LITERAL(7, 63, 25),
QT_MOC_LITERAL(8, 89, 24),
QT_MOC_LITERAL(9, 114, 24),
QT_MOC_LITERAL(10, 139, 18),
QT_MOC_LITERAL(11, 158, 32),
QT_MOC_LITERAL(12, 191, 7),
QT_MOC_LITERAL(13, 199, 19),
QT_MOC_LITERAL(14, 219, 16),
QT_MOC_LITERAL(15, 236, 22),
QT_MOC_LITERAL(16, 259, 30),
QT_MOC_LITERAL(17, 290, 29),
QT_MOC_LITERAL(18, 320, 32),
QT_MOC_LITERAL(19, 353, 26),
QT_MOC_LITERAL(20, 380, 10)
    },
    "B9Print\0eventHiding\0\0setProjMessage\0"
    "sText\0updateTimes\0showHelp\0"
    "on_updateConnectionStatus\0"
    "on_updateProjectorOutput\0"
    "on_updateProjectorStatus\0on_updateProjector\0"
    "B9PrinterStatus::ProjectorStatus\0"
    "eStatus\0on_signalAbortPrint\0"
    "exposeTBaseLayer\0startExposeTOverLayers\0"
    "exposureOfCurTintLayerFinished\0"
    "exposureOfTOverLayersFinished\0"
    "on_pushButtonPauseResume_clicked\0"
    "on_pushButtonAbort_clicked\0sAbortText\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_B9Print[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   95,    2, 0x0a,
       5,    0,   98,    2, 0x0a,
       6,    0,   99,    2, 0x08,
       7,    1,  100,    2, 0x08,
       8,    1,  103,    2, 0x08,
       9,    1,  106,    2, 0x08,
      10,    1,  109,    2, 0x08,
      13,    0,  112,    2, 0x08,
      14,    0,  113,    2, 0x08,
      15,    0,  114,    2, 0x08,
      16,    0,  115,    2, 0x08,
      17,    0,  116,    2, 0x08,
      18,    0,  117,    2, 0x08,
      19,    1,  118,    2, 0x08,
      19,    0,  121,    2, 0x28,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

       0        // eod
};

void B9Print::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        B9Print *_t = static_cast<B9Print *>(_o);
        switch (_id) {
        case 0: _t->eventHiding(); break;
        case 1: _t->setProjMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { QString _r = _t->updateTimes();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->showHelp(); break;
        case 4: _t->on_updateConnectionStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_updateProjectorOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_updateProjectorStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_updateProjector((*reinterpret_cast< B9PrinterStatus::ProjectorStatus(*)>(_a[1]))); break;
        case 8: _t->on_signalAbortPrint(); break;
        case 9: _t->exposeTBaseLayer(); break;
        case 10: _t->startExposeTOverLayers(); break;
        case 11: _t->exposureOfCurTintLayerFinished(); break;
        case 12: _t->exposureOfTOverLayersFinished(); break;
        case 13: _t->on_pushButtonPauseResume_clicked(); break;
        case 14: _t->on_pushButtonAbort_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->on_pushButtonAbort_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (B9Print::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&B9Print::eventHiding)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject B9Print::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_B9Print.data,
      qt_meta_data_B9Print,  qt_static_metacall, 0, 0}
};


const QMetaObject *B9Print::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *B9Print::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_B9Print.stringdata))
        return static_cast<void*>(const_cast< B9Print*>(this));
    return QDialog::qt_metacast(_clname);
}

int B9Print::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void B9Print::eventHiding()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
