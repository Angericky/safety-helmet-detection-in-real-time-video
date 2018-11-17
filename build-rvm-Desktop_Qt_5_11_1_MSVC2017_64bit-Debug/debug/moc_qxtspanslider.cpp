/****************************************************************************
** Meta object code from reading C++ file 'qxtspanslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/external/qxtSlider/qxtspanslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxtspanslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QxtSpanSlider_t {
    QByteArrayData data[23];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QxtSpanSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QxtSpanSlider_t qt_meta_stringdata_QxtSpanSlider = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QxtSpanSlider"
QT_MOC_LITERAL(1, 14, 11), // "spanChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "lower"
QT_MOC_LITERAL(4, 33, 5), // "upper"
QT_MOC_LITERAL(5, 39, 17), // "lowerValueChanged"
QT_MOC_LITERAL(6, 57, 17), // "upperValueChanged"
QT_MOC_LITERAL(7, 75, 20), // "lowerPositionChanged"
QT_MOC_LITERAL(8, 96, 20), // "upperPositionChanged"
QT_MOC_LITERAL(9, 117, 13), // "setLowerValue"
QT_MOC_LITERAL(10, 131, 13), // "setUpperValue"
QT_MOC_LITERAL(11, 145, 7), // "setSpan"
QT_MOC_LITERAL(12, 153, 16), // "setLowerPosition"
QT_MOC_LITERAL(13, 170, 16), // "setUpperPosition"
QT_MOC_LITERAL(14, 187, 10), // "lowerValue"
QT_MOC_LITERAL(15, 198, 10), // "upperValue"
QT_MOC_LITERAL(16, 209, 13), // "lowerPosition"
QT_MOC_LITERAL(17, 223, 13), // "upperPosition"
QT_MOC_LITERAL(18, 237, 18), // "handleMovementMode"
QT_MOC_LITERAL(19, 256, 18), // "HandleMovementMode"
QT_MOC_LITERAL(20, 275, 12), // "FreeMovement"
QT_MOC_LITERAL(21, 288, 10), // "NoCrossing"
QT_MOC_LITERAL(22, 299, 13) // "NoOverlapping"

    },
    "QxtSpanSlider\0spanChanged\0\0lower\0upper\0"
    "lowerValueChanged\0upperValueChanged\0"
    "lowerPositionChanged\0upperPositionChanged\0"
    "setLowerValue\0setUpperValue\0setSpan\0"
    "setLowerPosition\0setUpperPosition\0"
    "lowerValue\0upperValue\0lowerPosition\0"
    "upperPosition\0handleMovementMode\0"
    "HandleMovementMode\0FreeMovement\0"
    "NoCrossing\0NoOverlapping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QxtSpanSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   98, // properties
       1,  113, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,
       6,    1,   72,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,
       8,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      11,    2,   87,    2, 0x0a /* Public */,
      12,    1,   92,    2, 0x0a /* Public */,
      13,    1,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Int, 0x00095103,
      17, QMetaType::Int, 0x00095103,
      18, 0x80000000 | 19, 0x0009510b,

 // enums: name, flags, count, data
      19, 0x0,    3,  117,

 // enum data: key, value
      20, uint(QxtSpanSlider::FreeMovement),
      21, uint(QxtSpanSlider::NoCrossing),
      22, uint(QxtSpanSlider::NoOverlapping),

       0        // eod
};

void QxtSpanSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QxtSpanSlider *_t = static_cast<QxtSpanSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->spanChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->lowerValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->upperValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->lowerPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->upperPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setLowerValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setUpperValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setSpan((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->setLowerPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setUpperPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QxtSpanSlider::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QxtSpanSlider::spanChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QxtSpanSlider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QxtSpanSlider::lowerValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QxtSpanSlider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QxtSpanSlider::upperValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QxtSpanSlider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QxtSpanSlider::lowerPositionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QxtSpanSlider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QxtSpanSlider::upperPositionChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QxtSpanSlider *_t = static_cast<QxtSpanSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->lowerValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->upperValue(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->lowerPosition(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->upperPosition(); break;
        case 4: *reinterpret_cast< HandleMovementMode*>(_v) = _t->handleMovementMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QxtSpanSlider *_t = static_cast<QxtSpanSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLowerValue(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setUpperValue(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLowerPosition(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setUpperPosition(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setHandleMovementMode(*reinterpret_cast< HandleMovementMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QxtSpanSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_QxtSpanSlider.data,
      qt_meta_data_QxtSpanSlider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QxtSpanSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QxtSpanSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QxtSpanSlider.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int QxtSpanSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QxtSpanSlider::spanChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QxtSpanSlider::lowerValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QxtSpanSlider::upperValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QxtSpanSlider::lowerPositionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QxtSpanSlider::upperPositionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
