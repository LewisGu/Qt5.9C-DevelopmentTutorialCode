/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "on_itemChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "QStandardItem*"
QT_MOC_LITERAL(4, 42, 4), // "item"
QT_MOC_LITERAL(5, 47, 20), // "on_PieSliceHighlight"
QT_MOC_LITERAL(6, 68, 4), // "show"
QT_MOC_LITERAL(7, 73, 30), // "on_chartBarLegendMarkerClicked"
QT_MOC_LITERAL(8, 104, 22), // "on_actTongJi_triggered"
QT_MOC_LITERAL(9, 127, 23), // "on_actGenData_triggered"
QT_MOC_LITERAL(10, 151, 27), // "on_btnBuildBarChart_clicked"
QT_MOC_LITERAL(11, 179, 26), // "on_btnDrawPieChart_clicked"
QT_MOC_LITERAL(12, 206, 33), // "on_cBoxCourse_currentIndexCha..."
QT_MOC_LITERAL(13, 240, 5), // "index"
QT_MOC_LITERAL(14, 246, 28), // "on_spinHoleSize_valueChanged"
QT_MOC_LITERAL(15, 275, 4), // "arg1"
QT_MOC_LITERAL(16, 280, 27), // "on_spinPieSize_valueChanged"
QT_MOC_LITERAL(17, 308, 29), // "on_btnBuildStackedBar_clicked"
QT_MOC_LITERAL(18, 338, 24), // "on_btnPercentBar_clicked"
QT_MOC_LITERAL(19, 363, 21), // "on_btnScatter_clicked"
QT_MOC_LITERAL(20, 385, 32) // "on_cBoxTheme_currentIndexChanged"

    },
    "MainWindow\0on_itemChanged\0\0QStandardItem*\0"
    "item\0on_PieSliceHighlight\0show\0"
    "on_chartBarLegendMarkerClicked\0"
    "on_actTongJi_triggered\0on_actGenData_triggered\0"
    "on_btnBuildBarChart_clicked\0"
    "on_btnDrawPieChart_clicked\0"
    "on_cBoxCourse_currentIndexChanged\0"
    "index\0on_spinHoleSize_valueChanged\0"
    "arg1\0on_spinPieSize_valueChanged\0"
    "on_btnBuildStackedBar_clicked\0"
    "on_btnPercentBar_clicked\0on_btnScatter_clicked\0"
    "on_cBoxTheme_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    1,   84,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      16,    1,  101,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    0,  106,    2, 0x08 /* Private */,
      20,    1,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_itemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 1: _t->on_PieSliceHighlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_chartBarLegendMarkerClicked(); break;
        case 3: _t->on_actTongJi_triggered(); break;
        case 4: _t->on_actGenData_triggered(); break;
        case 5: _t->on_btnBuildBarChart_clicked(); break;
        case 6: _t->on_btnDrawPieChart_clicked(); break;
        case 7: _t->on_cBoxCourse_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinHoleSize_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->on_spinPieSize_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_btnBuildStackedBar_clicked(); break;
        case 11: _t->on_btnPercentBar_clicked(); break;
        case 12: _t->on_btnScatter_clicked(); break;
        case 13: _t->on_cBoxTheme_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
