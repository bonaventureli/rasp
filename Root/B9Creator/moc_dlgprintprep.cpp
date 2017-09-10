/****************************************************************************
** Meta object code from reading C++ file 'dlgprintprep.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dlgprintprep.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgprintprep.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DlgPrintPrep_t {
    QByteArrayData data[16];
    char stringdata[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DlgPrintPrep_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DlgPrintPrep_t qt_meta_stringdata_DlgPrintPrep = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 39),
QT_MOC_LITERAL(2, 53, 0),
QT_MOC_LITERAL(3, 54, 4),
QT_MOC_LITERAL(4, 59, 27),
QT_MOC_LITERAL(5, 87, 27),
QT_MOC_LITERAL(6, 115, 7),
QT_MOC_LITERAL(7, 123, 36),
QT_MOC_LITERAL(8, 160, 34),
QT_MOC_LITERAL(9, 195, 11),
QT_MOC_LITERAL(10, 207, 26),
QT_MOC_LITERAL(11, 234, 24),
QT_MOC_LITERAL(12, 259, 24),
QT_MOC_LITERAL(13, 284, 24),
QT_MOC_LITERAL(14, 309, 24),
QT_MOC_LITERAL(15, 334, 33)
    },
    "DlgPrintPrep\0on_comboBoxMaterial_currentIndexChanged\0"
    "\0arg1\0on_pushButtonMatCat_clicked\0"
    "on_checkBoxMirrored_clicked\0checked\0"
    "on_spinBoxLayersToPrint_valueChanged\0"
    "on_pushButtonResetPrintAll_clicked\0"
    "updateTimes\0on_pushButtonStep3_clicked\0"
    "on_checkBoxStep2_clicked\0"
    "on_checkBoxStep1_clicked\0"
    "on_checkBoxStep4_clicked\0"
    "on_checkBoxStep5_clicked\0"
    "on_pushButtonReleaseCycle_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgPrintPrep[] = {

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
       1,    1,   74,    2, 0x08,
       4,    0,   77,    2, 0x08,
       5,    1,   78,    2, 0x08,
       7,    1,   81,    2, 0x08,
       8,    0,   84,    2, 0x08,
       9,    0,   85,    2, 0x08,
      10,    0,   86,    2, 0x08,
      11,    1,   87,    2, 0x08,
      12,    1,   90,    2, 0x08,
      13,    1,   93,    2, 0x08,
      14,    1,   96,    2, 0x08,
      15,    0,   99,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void DlgPrintPrep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DlgPrintPrep *_t = static_cast<DlgPrintPrep *>(_o);
        switch (_id) {
        case 0: _t->on_comboBoxMaterial_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonMatCat_clicked(); break;
        case 2: _t->on_checkBoxMirrored_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_spinBoxLayersToPrint_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButtonResetPrintAll_clicked(); break;
        case 5: _t->updateTimes(); break;
        case 6: _t->on_pushButtonStep3_clicked(); break;
        case 7: _t->on_checkBoxStep2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkBoxStep1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_checkBoxStep4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_checkBoxStep5_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_pushButtonReleaseCycle_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DlgPrintPrep::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DlgPrintPrep.data,
      qt_meta_data_DlgPrintPrep,  qt_static_metacall, 0, 0}
};


const QMetaObject *DlgPrintPrep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgPrintPrep::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DlgPrintPrep.stringdata))
        return static_cast<void*>(const_cast< DlgPrintPrep*>(this));
    return QDialog::qt_metacast(_clname);
}

int DlgPrintPrep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
