/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../3DViewer_v1_0/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "signal_settings",
    "",
    "QMap<QString,QString>",
    "map",
    "signal_data",
    "double[3][3]",
    "transform_data",
    "receiveInfo",
    "vertices_count",
    "polygons_count",
    "f_name",
    "on_transformButton_clicked",
    "on_applySettings_clicked",
    "on_saveImage_clicked",
    "on_recordScreencast_clicked",
    "save"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[4];
    char stringdata5[12];
    char stringdata6[13];
    char stringdata7[15];
    char stringdata8[12];
    char stringdata9[15];
    char stringdata10[15];
    char stringdata11[7];
    char stringdata12[27];
    char stringdata13[25];
    char stringdata14[21];
    char stringdata15[28];
    char stringdata16[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "signal_settings"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 21),  // "QMap<QString,QString>"
        QT_MOC_LITERAL(50, 3),  // "map"
        QT_MOC_LITERAL(54, 11),  // "signal_data"
        QT_MOC_LITERAL(66, 12),  // "double[3][3]"
        QT_MOC_LITERAL(79, 14),  // "transform_data"
        QT_MOC_LITERAL(94, 11),  // "receiveInfo"
        QT_MOC_LITERAL(106, 14),  // "vertices_count"
        QT_MOC_LITERAL(121, 14),  // "polygons_count"
        QT_MOC_LITERAL(136, 6),  // "f_name"
        QT_MOC_LITERAL(143, 26),  // "on_transformButton_clicked"
        QT_MOC_LITERAL(170, 24),  // "on_applySettings_clicked"
        QT_MOC_LITERAL(195, 20),  // "on_saveImage_clicked"
        QT_MOC_LITERAL(216, 27),  // "on_recordScreencast_clicked"
        QT_MOC_LITERAL(244, 4)   // "save"
    },
    "MainWindow",
    "signal_settings",
    "",
    "QMap<QString,QString>",
    "map",
    "signal_data",
    "double[3][3]",
    "transform_data",
    "receiveInfo",
    "vertices_count",
    "polygons_count",
    "f_name",
    "on_transformButton_clicked",
    "on_applySettings_clicked",
    "on_saveImage_clicked",
    "on_recordScreencast_clicked",
    "save"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    1,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    3,   68,    2, 0x0a,    5 /* Public */,
      12,    0,   75,    2, 0x08,    9 /* Private */,
      13,    0,   76,    2, 0x08,   10 /* Private */,
      14,    0,   77,    2, 0x08,   11 /* Private */,
      15,    0,   78,    2, 0x08,   12 /* Private */,
      16,    0,   79,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'signal_settings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString>, std::false_type>,
        // method 'signal_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'receiveInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_transformButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_applySettings_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveImage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_recordScreencast_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_settings((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[1]))); break;
        case 1: _t->signal_data((*reinterpret_cast< std::add_pointer_t<double[3][3]>>(_a[1]))); break;
        case 2: _t->receiveInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: _t->on_transformButton_clicked(); break;
        case 4: _t->on_applySettings_clicked(); break;
        case 5: _t->on_saveImage_clicked(); break;
        case 6: _t->on_recordScreencast_clicked(); break;
        case 7: _t->save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QMap<QString,QString> );
            if (_t _q_method = &MainWindow::signal_settings; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double [3][3]);
            if (_t _q_method = &MainWindow::signal_data; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal_settings(QMap<QString,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::signal_data(double _t1[3][3])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
