/****************************************************************************
** Meta object code from reading C++ file 'PlayerThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/main/threads/PlayerThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayerThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayerThread_t {
    QByteArrayData data[17];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerThread_t qt_meta_stringdata_PlayerThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlayerThread"
QT_MOC_LITERAL(1, 13, 21), // "updateStatisticsInGUI"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "ThreadStatisticsData"
QT_MOC_LITERAL(4, 57, 8), // "newFrame"
QT_MOC_LITERAL(5, 66, 5), // "frame"
QT_MOC_LITERAL(6, 72, 9), // "origFrame"
QT_MOC_LITERAL(7, 82, 10), // "endOfFrame"
QT_MOC_LITERAL(8, 93, 9), // "maxLevels"
QT_MOC_LITERAL(9, 103, 6), // "levels"
QT_MOC_LITERAL(10, 110, 26), // "updateImageProcessingFlags"
QT_MOC_LITERAL(11, 137, 20), // "ImageProcessingFlags"
QT_MOC_LITERAL(12, 158, 29), // "updateImageProcessingSettings"
QT_MOC_LITERAL(13, 188, 23), // "ImageProcessingSettings"
QT_MOC_LITERAL(14, 212, 6), // "setROI"
QT_MOC_LITERAL(15, 219, 3), // "roi"
QT_MOC_LITERAL(16, 223, 11) // "pauseThread"

    },
    "PlayerThread\0updateStatisticsInGUI\0\0"
    "ThreadStatisticsData\0newFrame\0frame\0"
    "origFrame\0endOfFrame\0maxLevels\0levels\0"
    "updateImageProcessingFlags\0"
    "ImageProcessingFlags\0updateImageProcessingSettings\0"
    "ImageProcessingSettings\0setROI\0roi\0"
    "pauseThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       7,    0,   68,    2, 0x06 /* Public */,
       8,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   72,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      14,    1,   78,    2, 0x08 /* Private */,
      16,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::QRect,   15,
    QMetaType::Void,

       0        // eod
};

void PlayerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerThread *_t = static_cast<PlayerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateStatisticsInGUI((*reinterpret_cast< ThreadStatisticsData(*)>(_a[1]))); break;
        case 1: _t->newFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->origFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 3: _t->endOfFrame(); break;
        case 4: _t->maxLevels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateImageProcessingFlags((*reinterpret_cast< ImageProcessingFlags(*)>(_a[1]))); break;
        case 6: _t->updateImageProcessingSettings((*reinterpret_cast< ImageProcessingSettings(*)>(_a[1]))); break;
        case 7: _t->setROI((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 8: _t->pauseThread(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlayerThread::*)(ThreadStatisticsData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerThread::updateStatisticsInGUI)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlayerThread::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerThread::newFrame)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlayerThread::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerThread::origFrame)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlayerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerThread::endOfFrame)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlayerThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerThread::maxLevels)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlayerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_PlayerThread.data,
      qt_meta_data_PlayerThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int PlayerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PlayerThread::updateStatisticsInGUI(ThreadStatisticsData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayerThread::newFrame(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlayerThread::origFrame(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlayerThread::endOfFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlayerThread::maxLevels(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
