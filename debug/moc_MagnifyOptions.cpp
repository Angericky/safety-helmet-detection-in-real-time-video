/****************************************************************************
** Meta object code from reading C++ file 'MagnifyOptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main/ui/MagnifyOptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MagnifyOptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MagnifyOptions_t {
    QByteArrayData data[13];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagnifyOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagnifyOptions_t qt_meta_stringdata_MagnifyOptions = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MagnifyOptions"
QT_MOC_LITERAL(1, 15, 23), // "newImageProcessingFlags"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "ImageProcessingFlags"
QT_MOC_LITERAL(4, 61, 26), // "newImageProcessingSettings"
QT_MOC_LITERAL(5, 88, 23), // "ImageProcessingSettings"
QT_MOC_LITERAL(6, 112, 11), // "setMaxLevel"
QT_MOC_LITERAL(7, 124, 5), // "level"
QT_MOC_LITERAL(8, 130, 25), // "updateFlagsFromOptionsTab"
QT_MOC_LITERAL(9, 156, 28), // "updateSettingsFromOptionsTab"
QT_MOC_LITERAL(10, 185, 5), // "reset"
QT_MOC_LITERAL(11, 191, 19), // "applyColorInterface"
QT_MOC_LITERAL(12, 211, 20) // "applyMotionInterface"

    },
    "MagnifyOptions\0newImageProcessingFlags\0"
    "\0ImageProcessingFlags\0newImageProcessingSettings\0"
    "ImageProcessingSettings\0setMaxLevel\0"
    "level\0updateFlagsFromOptionsTab\0"
    "updateSettingsFromOptionsTab\0reset\0"
    "applyColorInterface\0applyMotionInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagnifyOptions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MagnifyOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MagnifyOptions *_t = static_cast<MagnifyOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newImageProcessingFlags((*reinterpret_cast< ImageProcessingFlags(*)>(_a[1]))); break;
        case 1: _t->newImageProcessingSettings((*reinterpret_cast< ImageProcessingSettings(*)>(_a[1]))); break;
        case 2: _t->setMaxLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateFlagsFromOptionsTab(); break;
        case 4: _t->updateSettingsFromOptionsTab(); break;
        case 5: _t->reset(); break;
        case 6: _t->applyColorInterface(); break;
        case 7: _t->applyMotionInterface(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MagnifyOptions::*_t)(ImageProcessingFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MagnifyOptions::newImageProcessingFlags)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MagnifyOptions::*_t)(ImageProcessingSettings );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MagnifyOptions::newImageProcessingSettings)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MagnifyOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MagnifyOptions.data,
      qt_meta_data_MagnifyOptions,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MagnifyOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagnifyOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MagnifyOptions.stringdata0))
        return static_cast<void*>(const_cast< MagnifyOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int MagnifyOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MagnifyOptions::newImageProcessingFlags(ImageProcessingFlags _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MagnifyOptions::newImageProcessingSettings(ImageProcessingSettings _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
