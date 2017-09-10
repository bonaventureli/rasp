/****************************************************************************
** Meta object code from reading C++ file 'dlgcalprojector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dlgcalprojector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgcalprojector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dlgCalProjector_t {
    QByteArrayData data[17];
    char stringdata[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_dlgCalProjector_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_dlgCalProjector_t qt_meta_stringdata_dlgCalProjector = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 8),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 4),
QT_MOC_LITERAL(4, 31, 15),
QT_MOC_LITERAL(5, 47, 15),
QT_MOC_LITERAL(6, 63, 24),
QT_MOC_LITERAL(7, 88, 5),
QT_MOC_LITERAL(8, 94, 7),
QT_MOC_LITERAL(9, 102, 7),
QT_MOC_LITERAL(10, 110, 7),
QT_MOC_LITERAL(11, 118, 7),
QT_MOC_LITERAL(12, 126, 7),
QT_MOC_LITERAL(13, 134, 7),
QT_MOC_LITERAL(14, 142, 7),
QT_MOC_LITERAL(15, 150, 42),
QT_MOC_LITERAL(16, 193, 5)
    },
    "dlgCalProjector\0findHome\0\0done\0"
    "onResetComplete\0onProjectorIsOn\0"
    "on_updateProjectorOutput\0sText\0onStep1\0"
    "checked\0onStep2\0onStep3\0onStep4\0onStep5\0"
    "onStep6\0on_comboBoxXPPixelSize_currentIndexChanged\0"
    "index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlgCalProjector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a,
       3,    0,   75,    2, 0x0a,
       4,    0,   76,    2, 0x0a,
       5,    0,   77,    2, 0x0a,
       6,    1,   78,    2, 0x0a,
       8,    1,   81,    2, 0x0a,
      10,    1,   84,    2, 0x0a,
      11,    0,   87,    2, 0x0a,
      12,    1,   88,    2, 0x0a,
      13,    1,   91,    2, 0x0a,
      14,    0,   94,    2, 0x0a,
      15,    1,   95,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void dlgCalProjector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlgCalProjector *_t = static_cast<dlgCalProjector *>(_o);
        switch (_id) {
        case 0: _t->findHome(); break;
        case 1: _t->done(); break;
        case 2: _t->onResetComplete(); break;
        case 3: _t->onProjectorIsOn(); break;
        case 4: _t->on_updateProjectorOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onStep1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onStep2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onStep3(); break;
        case 8: _t->onStep4((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onStep5((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onStep6(); break;
        case 11: _t->on_comboBoxXPPixelSize_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dlgCalProjector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgCalProjector.data,
      qt_meta_data_dlgCalProjector,  qt_static_metacall, 0, 0}
};


const QMetaObject *dlgCalProjector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgCalProjector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgCalProjector.stringdata))
        return static_cast<void*>(const_cast< dlgCalProjector*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgCalProjector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
