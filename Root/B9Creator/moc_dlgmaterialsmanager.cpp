/****************************************************************************
** Meta object code from reading C++ file 'dlgmaterialsmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dlgmaterialsmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgmaterialsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MaterialsTableItemDelegate_t {
    QByteArrayData data[1];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MaterialsTableItemDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MaterialsTableItemDelegate_t qt_meta_stringdata_MaterialsTableItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 26)
    },
    "MaterialsTableItemDelegate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaterialsTableItemDelegate[] = {

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

void MaterialsTableItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MaterialsTableItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_MaterialsTableItemDelegate.data,
      qt_meta_data_MaterialsTableItemDelegate,  qt_static_metacall, 0, 0}
};


const QMetaObject *MaterialsTableItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaterialsTableItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaterialsTableItemDelegate.stringdata))
        return static_cast<void*>(const_cast< MaterialsTableItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int MaterialsTableItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DlgMaterialsManager_t {
    QByteArrayData data[15];
    char stringdata[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DlgMaterialsManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DlgMaterialsManager_t qt_meta_stringdata_DlgMaterialsManager = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 5),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 3),
QT_MOC_LITERAL(4, 31, 39),
QT_MOC_LITERAL(5, 71, 5),
QT_MOC_LITERAL(6, 77, 33),
QT_MOC_LITERAL(7, 111, 27),
QT_MOC_LITERAL(8, 139, 24),
QT_MOC_LITERAL(9, 164, 31),
QT_MOC_LITERAL(10, 196, 30),
QT_MOC_LITERAL(11, 227, 31),
QT_MOC_LITERAL(12, 259, 29),
QT_MOC_LITERAL(13, 289, 4),
QT_MOC_LITERAL(14, 294, 43)
    },
    "DlgMaterialsManager\0setXY\0\0iXY\0"
    "on_comboBoxMaterial_currentIndexChanged\0"
    "index\0on_comboBoxXY_currentIndexChanged\0"
    "on_pushButtonDelete_clicked\0"
    "on_pushButtonAdd_clicked\0"
    "on_buttonBoxSaveCancel_accepted\0"
    "on_pushButtonDuplicate_clicked\0"
    "on_buttonBoxSaveCancel_rejected\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "on_spinBoxNumberOfAttachLayers_valueChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgMaterialsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a,
       4,    1,   67,    2, 0x08,
       6,    1,   70,    2, 0x08,
       7,    0,   73,    2, 0x08,
       8,    0,   74,    2, 0x08,
       9,    0,   75,    2, 0x08,
      10,    0,   76,    2, 0x08,
      11,    0,   77,    2, 0x08,
      12,    1,   78,    2, 0x08,
      14,    1,   81,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void DlgMaterialsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DlgMaterialsManager *_t = static_cast<DlgMaterialsManager *>(_o);
        switch (_id) {
        case 0: _t->setXY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_comboBoxMaterial_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_comboBoxXY_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pushButtonDelete_clicked(); break;
        case 4: _t->on_pushButtonAdd_clicked(); break;
        case 5: _t->on_buttonBoxSaveCancel_accepted(); break;
        case 6: _t->on_pushButtonDuplicate_clicked(); break;
        case 7: _t->on_buttonBoxSaveCancel_rejected(); break;
        case 8: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->on_spinBoxNumberOfAttachLayers_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DlgMaterialsManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DlgMaterialsManager.data,
      qt_meta_data_DlgMaterialsManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *DlgMaterialsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgMaterialsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DlgMaterialsManager.stringdata))
        return static_cast<void*>(const_cast< DlgMaterialsManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int DlgMaterialsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
