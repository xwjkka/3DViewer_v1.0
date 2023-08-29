/****************************************************************************
** Meta object code from reading C++ file 'myopenglwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../3DViewer_v1_0/myopenglwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myopenglwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS = QtMocHelpers::stringData(
    "MyOpenGLWidget",
    "send_info",
    "",
    "vertices_count",
    "polygons_count",
    "f_name",
    "setXRotation",
    "angle",
    "setYRotation",
    "setZRotation",
    "on_transformButton_clicked2",
    "double[3][3]",
    "transform_data",
    "on_SelectFileButton_clicked",
    "on_checkAxes_clicked",
    "on_applySettingsButton_clicked",
    "QMap<QString,QString>",
    "map"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[15];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[15];
    char stringdata5[7];
    char stringdata6[13];
    char stringdata7[6];
    char stringdata8[13];
    char stringdata9[13];
    char stringdata10[28];
    char stringdata11[13];
    char stringdata12[15];
    char stringdata13[28];
    char stringdata14[21];
    char stringdata15[31];
    char stringdata16[22];
    char stringdata17[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS_t qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "MyOpenGLWidget"
        QT_MOC_LITERAL(15, 9),  // "send_info"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 14),  // "vertices_count"
        QT_MOC_LITERAL(41, 14),  // "polygons_count"
        QT_MOC_LITERAL(56, 6),  // "f_name"
        QT_MOC_LITERAL(63, 12),  // "setXRotation"
        QT_MOC_LITERAL(76, 5),  // "angle"
        QT_MOC_LITERAL(82, 12),  // "setYRotation"
        QT_MOC_LITERAL(95, 12),  // "setZRotation"
        QT_MOC_LITERAL(108, 27),  // "on_transformButton_clicked2"
        QT_MOC_LITERAL(136, 12),  // "double[3][3]"
        QT_MOC_LITERAL(149, 14),  // "transform_data"
        QT_MOC_LITERAL(164, 27),  // "on_SelectFileButton_clicked"
        QT_MOC_LITERAL(192, 20),  // "on_checkAxes_clicked"
        QT_MOC_LITERAL(213, 30),  // "on_applySettingsButton_clicked"
        QT_MOC_LITERAL(244, 21),  // "QMap<QString,QString>"
        QT_MOC_LITERAL(266, 3)   // "map"
    },
    "MyOpenGLWidget",
    "send_info",
    "",
    "vertices_count",
    "polygons_count",
    "f_name",
    "setXRotation",
    "angle",
    "setYRotation",
    "setZRotation",
    "on_transformButton_clicked2",
    "double[3][3]",
    "transform_data",
    "on_SelectFileButton_clicked",
    "on_checkAxes_clicked",
    "on_applySettingsButton_clicked",
    "QMap<QString,QString>",
    "map"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMyOpenGLWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   69,    2, 0x0a,    5 /* Public */,
       8,    1,   72,    2, 0x0a,    7 /* Public */,
       9,    1,   75,    2, 0x0a,    9 /* Public */,
      10,    1,   78,    2, 0x0a,   11 /* Public */,
      13,    0,   81,    2, 0x0a,   13 /* Public */,
      14,    0,   82,    2, 0x0a,   14 /* Public */,
      15,    1,   83,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject MyOpenGLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMyOpenGLWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MyOpenGLWidget, std::true_type>,
        // method 'send_info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setXRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setYRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setZRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_transformButton_clicked2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_SelectFileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkAxes_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_applySettingsButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString>, std::false_type>
    >,
    nullptr
} };

void MyOpenGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyOpenGLWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->send_info((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->setXRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setYRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setZRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_transformButton_clicked2((*reinterpret_cast< std::add_pointer_t<double[3][3]>>(_a[1]))); break;
        case 5: _t->on_SelectFileButton_clicked(); break;
        case 6: _t->on_checkAxes_clicked(); break;
        case 7: _t->on_applySettingsButton_clicked((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyOpenGLWidget::*)(int , int , QString );
            if (_t _q_method = &MyOpenGLWidget::send_info; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MyOpenGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyOpenGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMyOpenGLWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int MyOpenGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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
void MyOpenGLWidget::send_info(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
