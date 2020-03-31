/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_dellAllButton_released"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "on_CodeGenButt_clicked"
QT_MOC_LITERAL(4, 61, 23), // "saveProjektDesigntoJson"
QT_MOC_LITERAL(5, 85, 4), // "wert"
QT_MOC_LITERAL(6, 90, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(7, 114, 28), // "on_actionNew_Shape_triggered"
QT_MOC_LITERAL(8, 143, 29), // "on_actionEdit_shape_triggered"
QT_MOC_LITERAL(9, 173, 23), // "on_actionsave_triggered"
QT_MOC_LITERAL(10, 197, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(11, 221, 30), // "on_actionDelet_shape_triggered"
QT_MOC_LITERAL(12, 252, 13), // "addToItemList"
QT_MOC_LITERAL(13, 266, 18), // "on_rBshape_clicked"
QT_MOC_LITERAL(14, 285, 17), // "on_rbGrid_clicked"
QT_MOC_LITERAL(15, 303, 23), // "on_xSlider_valueChanged"
QT_MOC_LITERAL(16, 327, 5), // "value"
QT_MOC_LITERAL(17, 333, 23), // "on_ySlider_valueChanged"
QT_MOC_LITERAL(18, 357, 27), // "LoadDesignedProjektFromJson"
QT_MOC_LITERAL(19, 385, 4) // "name"

    },
    "MainWindow\0on_dellAllButton_released\0"
    "\0on_CodeGenButt_clicked\0saveProjektDesigntoJson\0"
    "wert\0on_actionExit_triggered\0"
    "on_actionNew_Shape_triggered\0"
    "on_actionEdit_shape_triggered\0"
    "on_actionsave_triggered\0on_actionLoad_triggered\0"
    "on_actionDelet_shape_triggered\0"
    "addToItemList\0on_rBshape_clicked\0"
    "on_rbGrid_clicked\0on_xSlider_valueChanged\0"
    "value\0on_ySlider_valueChanged\0"
    "LoadDesignedProjektFromJson\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    1,  106,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_dellAllButton_released(); break;
        case 1: _t->on_CodeGenButt_clicked(); break;
        case 2: _t->saveProjektDesigntoJson((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_actionExit_triggered(); break;
        case 4: _t->on_actionNew_Shape_triggered(); break;
        case 5: _t->on_actionEdit_shape_triggered(); break;
        case 6: _t->on_actionsave_triggered(); break;
        case 7: _t->on_actionLoad_triggered(); break;
        case 8: _t->on_actionDelet_shape_triggered(); break;
        case 9: _t->addToItemList(); break;
        case 10: _t->on_rBshape_clicked(); break;
        case 11: _t->on_rbGrid_clicked(); break;
        case 12: _t->on_xSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_ySlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->LoadDesignedProjektFromJson((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
