/****************************************************************************
** Meta object code from reading C++ file 'qxtspanslider_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/external/qxtSlider/qxtspanslider_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxtspanslider_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QxtSpanSliderPrivate_t {
    QByteArrayData data[6];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QxtSpanSliderPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QxtSpanSliderPrivate_t qt_meta_stringdata_QxtSpanSliderPrivate = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QxtSpanSliderPrivate"
QT_MOC_LITERAL(1, 21, 11), // "updateRange"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "min"
QT_MOC_LITERAL(4, 38, 3), // "max"
QT_MOC_LITERAL(5, 42, 17) // "movePressedHandle"

    },
    "QxtSpanSliderPrivate\0updateRange\0\0min\0"
    "max\0movePressedHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QxtSpanSliderPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       5,    0,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void QxtSpanSliderPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QxtSpanSliderPrivate *_t = static_cast<QxtSpanSliderPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->movePressedHandle(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QxtSpanSliderPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QxtSpanSliderPrivate.data,
      qt_meta_data_QxtSpanSliderPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QxtSpanSliderPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QxtSpanSliderPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QxtSpanSliderPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QxtPrivate<QxtSpanSlider>"))
        return static_cast< QxtPrivate<QxtSpanSlider>*>(this);
    return QObject::qt_metacast(_clname);
}

int QxtSpanSliderPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
