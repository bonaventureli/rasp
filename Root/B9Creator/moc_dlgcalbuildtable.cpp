/****************************************************************************
** Meta object code from reading C++ file 'dlgcalbuildtable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dlgcalbuildtable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgcalbuildtable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dlgCalBuildTable_t {
    QByteArrayData data[17];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_dlgCalBuildTable_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_dlgCalBuildTable_t qt_meta_stringdata_dlgCalBuildTable = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 8),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 6),
QT_MOC_LITERAL(4, 34, 7),
QT_MOC_LITERAL(5, 42, 4),
QT_MOC_LITERAL(6, 47, 15),
QT_MOC_LITERAL(7, 63, 16),
QT_MOC_LITERAL(8, 80, 8),
QT_MOC_LITERAL(9, 89, 7),
QT_MOC_LITERAL(10, 97, 8),
QT_MOC_LITERAL(11, 106, 8),
QT_MOC_LITERAL(12, 115, 8),
QT_MOC_LITERAL(13, 124, 8),
QT_MOC_LITERAL(14, 133, 8),
QT_MOC_LITERAL(15, 142, 8),
QT_MOC_LITERAL(16, 151, 8)
    },
    "dlgCalBuildTable\0findHome\0\0goZero\0"
    "raiseUp\0done\0onResetComplete\0"
    "onMotionComplete\0on_Step1\0checked\0"
    "on_Step2\0on_Step3\0on_Step4\0on_Step5\0"
    "on_Step6\0on_Step7\0on_Step8\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlgCalBuildTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a,
       3,    0,   85,    2, 0x0a,
       4,    0,   86,    2, 0x0a,
       5,    0,   87,    2, 0x0a,
       6,    0,   88,    2, 0x0a,
       7,    0,   89,    2, 0x0a,
       8,    1,   90,    2, 0x0a,
      10,    1,   93,    2, 0x0a,
      11,    0,   96,    2, 0x0a,
      12,    0,   97,    2, 0x0a,
      13,    1,   98,    2, 0x0a,
      14,    1,  101,    2, 0x0a,
      15,    0,  104,    2, 0x0a,
      16,    1,  105,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void dlgCalBuildTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlgCalBuildTable *_t = static_cast<dlgCalBuildTable *>(_o);
        switch (_id) {
        case 0: _t->findHome(); break;
        case 1: _t->goZero(); break;
        case 2: _t->raiseUp(); break;
        case 3: _t->done(); break;
        case 4: _t->onResetComplete(); break;
        case 5: _t->onMotionComplete(); break;
        case 6: _t->on_Step1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_Step2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_Step3(); break;
        case 9: _t->on_Step4(); break;
        case 10: _t->on_Step5((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_Step6((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_Step7(); break;
        case 13: _t->on_Step8((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dlgCalBuildTable::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgCalBuildTable.data,
      qt_meta_data_dlgCalBuildTable,  qt_static_metacall, 0, 0}
};


const QMetaObject *dlgCalBuildTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgCalBuildTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgCalBuildTable.stringdata))
        return static_cast<void*>(const_cast< dlgCalBuildTable*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgCalBuildTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
