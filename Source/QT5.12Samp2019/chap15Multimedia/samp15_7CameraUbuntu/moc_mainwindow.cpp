/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
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
    QByteArrayData data[27];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_cameraStateChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "QCamera::State"
QT_MOC_LITERAL(4, 49, 5), // "state"
QT_MOC_LITERAL(5, 55, 27), // "on_cameraCaptureModeChanged"
QT_MOC_LITERAL(6, 83, 21), // "QCamera::CaptureModes"
QT_MOC_LITERAL(7, 105, 4), // "mode"
QT_MOC_LITERAL(8, 110, 23), // "on_imageReadyForCapture"
QT_MOC_LITERAL(9, 134, 5), // "ready"
QT_MOC_LITERAL(10, 140, 16), // "on_imageCaptured"
QT_MOC_LITERAL(11, 157, 2), // "id"
QT_MOC_LITERAL(12, 160, 7), // "preview"
QT_MOC_LITERAL(13, 168, 13), // "on_imageSaved"
QT_MOC_LITERAL(14, 182, 8), // "fileName"
QT_MOC_LITERAL(15, 191, 20), // "on_videoStateChanged"
QT_MOC_LITERAL(16, 212, 21), // "QMediaRecorder::State"
QT_MOC_LITERAL(17, 234, 23), // "on_videoDurationChanged"
QT_MOC_LITERAL(18, 258, 8), // "duration"
QT_MOC_LITERAL(19, 267, 27), // "on_actStartCamera_triggered"
QT_MOC_LITERAL(20, 295, 26), // "on_actStopCamera_triggered"
QT_MOC_LITERAL(21, 322, 23), // "on_actCapture_triggered"
QT_MOC_LITERAL(22, 346, 27), // "on_actVideoRecord_triggered"
QT_MOC_LITERAL(23, 374, 25), // "on_actVideoStop_triggered"
QT_MOC_LITERAL(24, 400, 23), // "on_btnVideoFile_clicked"
QT_MOC_LITERAL(25, 424, 18), // "on_chkMute_clicked"
QT_MOC_LITERAL(26, 443, 7) // "checked"

    },
    "MainWindow\0on_cameraStateChanged\0\0"
    "QCamera::State\0state\0on_cameraCaptureModeChanged\0"
    "QCamera::CaptureModes\0mode\0"
    "on_imageReadyForCapture\0ready\0"
    "on_imageCaptured\0id\0preview\0on_imageSaved\0"
    "fileName\0on_videoStateChanged\0"
    "QMediaRecorder::State\0on_videoDurationChanged\0"
    "duration\0on_actStartCamera_triggered\0"
    "on_actStopCamera_triggered\0"
    "on_actCapture_triggered\0"
    "on_actVideoRecord_triggered\0"
    "on_actVideoStop_triggered\0"
    "on_btnVideoFile_clicked\0on_chkMute_clicked\0"
    "checked"
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
       8,    1,   90,    2, 0x08 /* Private */,
      10,    2,   93,    2, 0x08 /* Private */,
      13,    2,   98,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    1,  106,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,
      20,    0,  110,    2, 0x08 /* Private */,
      21,    0,  111,    2, 0x08 /* Private */,
      22,    0,  112,    2, 0x08 /* Private */,
      23,    0,  113,    2, 0x08 /* Private */,
      24,    0,  114,    2, 0x08 /* Private */,
      25,    1,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   14,
    QMetaType::Void, 0x80000000 | 16,    4,
    QMetaType::Void, QMetaType::LongLong,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cameraStateChanged((*reinterpret_cast< QCamera::State(*)>(_a[1]))); break;
        case 1: _t->on_cameraCaptureModeChanged((*reinterpret_cast< QCamera::CaptureModes(*)>(_a[1]))); break;
        case 2: _t->on_imageReadyForCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_imageCaptured((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 4: _t->on_imageSaved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->on_videoStateChanged((*reinterpret_cast< QMediaRecorder::State(*)>(_a[1]))); break;
        case 6: _t->on_videoDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->on_actStartCamera_triggered(); break;
        case 8: _t->on_actStopCamera_triggered(); break;
        case 9: _t->on_actCapture_triggered(); break;
        case 10: _t->on_actVideoRecord_triggered(); break;
        case 11: _t->on_actVideoStop_triggered(); break;
        case 12: _t->on_btnVideoFile_clicked(); break;
        case 13: _t->on_chkMute_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::CaptureModes >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::State >(); break;
            }
            break;
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
