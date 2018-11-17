/****************************************************************************
** Meta object code from reading C++ file 'ProcessingThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main/threads/ProcessingThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProcessingThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProcessingThread_t {
    QByteArrayData data[19];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessingThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessingThread_t qt_meta_stringdata_ProcessingThread = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ProcessingThread"
QT_MOC_LITERAL(1, 17, 8), // "newFrame"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "frame"
QT_MOC_LITERAL(4, 33, 9), // "origFrame"
QT_MOC_LITERAL(5, 43, 21), // "updateStatisticsInGUI"
QT_MOC_LITERAL(6, 65, 20), // "ThreadStatisticsData"
QT_MOC_LITERAL(7, 86, 12), // "frameWritten"
QT_MOC_LITERAL(8, 99, 6), // "frames"
QT_MOC_LITERAL(9, 106, 9), // "maxLevels"
QT_MOC_LITERAL(10, 116, 6), // "levels"
QT_MOC_LITERAL(11, 123, 26), // "updateImageProcessingFlags"
QT_MOC_LITERAL(12, 150, 20), // "ImageProcessingFlags"
QT_MOC_LITERAL(13, 171, 29), // "updateImageProcessingSettings"
QT_MOC_LITERAL(14, 201, 23), // "ImageProcessingSettings"
QT_MOC_LITERAL(15, 225, 6), // "setROI"
QT_MOC_LITERAL(16, 232, 3), // "roi"
QT_MOC_LITERAL(17, 236, 15), // "updateFramerate"
QT_MOC_LITERAL(18, 252, 3) // "fps"

    },
    "ProcessingThread\0newFrame\0\0frame\0"
    "origFrame\0updateStatisticsInGUI\0"
    "ThreadStatisticsData\0frameWritten\0"
    "frames\0maxLevels\0levels\0"
    "updateImageProcessingFlags\0"
    "ImageProcessingFlags\0updateImageProcessingSettings\0"
    "ImageProcessingSettings\0setROI\0roi\0"
    "updateFramerate\0fps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessingThread[] = {

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
       5,    1,   65,    2, 0x06 /* Public */,
       7,    1,   68,    2, 0x06 /* Public */,
       9,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   74,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,
      15,    1,   80,    2, 0x0a /* Public */,
      17,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::QRect,   16,
    QMetaType::Void, QMetaType::Double,   18,

       0        // eod
};

void ProcessingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProcessingThread *_t = static_cast<ProcessingThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->origFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->updateStatisticsInGUI((*reinterpret_cast< ThreadStatisticsData(*)>(_a[1]))); break;
        case 3: _t->frameWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->maxLevels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateImageProcessingFlags((*reinterpret_cast< ImageProcessingFlags(*)>(_a[1]))); break;
        case 6: _t->updateImageProcessingSettings((*reinterpret_cast< ImageProcessingSettings(*)>(_a[1]))); break;
        case 7: _t->setROI((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 8: _t->updateFramerate((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProcessingThread::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessingThread::newFrame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProcessingThread::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessingThread::origFrame)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProcessingThread::*_t)(ThreadStatisticsData );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessingThread::updateStatisticsInGUI)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProcessingThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessingThread::frameWritten)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ProcessingThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessingThread::maxLevels)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ProcessingThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ProcessingThread.data,
      qt_meta_data_ProcessingThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProcessingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessingThread.stringdata0))
        return static_cast<void*>(const_cast< ProcessingThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ProcessingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ProcessingThread::newFrame(const QImage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProcessingThread::origFrame(const QImage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProcessingThread::updateStatisticsInGUI(ThreadStatisticsData _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProcessingThread::frameWritten(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProcessingThread::maxLevels(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
