/****************************************************************************
** Meta object code from reading C++ file 'VideoView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/main/ui/VideoView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoView_t {
    QByteArrayData data[30];
    char stringdata0[435];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoView_t qt_meta_stringdata_VideoView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "VideoView"
QT_MOC_LITERAL(1, 10, 23), // "newImageProcessingFlags"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "ImageProcessingFlags"
QT_MOC_LITERAL(4, 56, 20), // "imageProcessingFlags"
QT_MOC_LITERAL(5, 77, 6), // "setROI"
QT_MOC_LITERAL(6, 84, 3), // "roi"
QT_MOC_LITERAL(7, 88, 12), // "newMouseData"
QT_MOC_LITERAL(8, 101, 9), // "MouseData"
QT_MOC_LITERAL(9, 111, 9), // "mouseData"
QT_MOC_LITERAL(10, 121, 25), // "newMouseDataOriginalFrame"
QT_MOC_LITERAL(11, 147, 25), // "updateMouseCursorPosLabel"
QT_MOC_LITERAL(12, 173, 38), // "updateMouseCursorPosLabelOrig..."
QT_MOC_LITERAL(13, 212, 17), // "endOfFrame_action"
QT_MOC_LITERAL(14, 230, 18), // "endOfSaving_action"
QT_MOC_LITERAL(15, 249, 17), // "updateProgressBar"
QT_MOC_LITERAL(16, 267, 5), // "frame"
QT_MOC_LITERAL(17, 273, 11), // "updateFrame"
QT_MOC_LITERAL(18, 285, 19), // "updateOriginalFrame"
QT_MOC_LITERAL(19, 305, 23), // "updatePlayerThreadStats"
QT_MOC_LITERAL(20, 329, 20), // "ThreadStatisticsData"
QT_MOC_LITERAL(21, 350, 8), // "statData"
QT_MOC_LITERAL(22, 359, 23), // "handleContextMenuAction"
QT_MOC_LITERAL(23, 383, 8), // "QAction*"
QT_MOC_LITERAL(24, 392, 6), // "action"
QT_MOC_LITERAL(25, 399, 4), // "play"
QT_MOC_LITERAL(26, 404, 4), // "stop"
QT_MOC_LITERAL(27, 409, 5), // "pause"
QT_MOC_LITERAL(28, 415, 7), // "setTime"
QT_MOC_LITERAL(29, 423, 11) // "save_action"

    },
    "VideoView\0newImageProcessingFlags\0\0"
    "ImageProcessingFlags\0imageProcessingFlags\0"
    "setROI\0roi\0newMouseData\0MouseData\0"
    "mouseData\0newMouseDataOriginalFrame\0"
    "updateMouseCursorPosLabel\0"
    "updateMouseCursorPosLabelOriginalFrame\0"
    "endOfFrame_action\0endOfSaving_action\0"
    "updateProgressBar\0frame\0updateFrame\0"
    "updateOriginalFrame\0updatePlayerThreadStats\0"
    "ThreadStatisticsData\0statData\0"
    "handleContextMenuAction\0QAction*\0"
    "action\0play\0stop\0pause\0setTime\0"
    "save_action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       5,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  110,    2, 0x0a /* Public */,
      10,    1,  113,    2, 0x0a /* Public */,
      11,    0,  116,    2, 0x0a /* Public */,
      12,    0,  117,    2, 0x0a /* Public */,
      13,    0,  118,    2, 0x0a /* Public */,
      14,    0,  119,    2, 0x0a /* Public */,
      15,    1,  120,    2, 0x0a /* Public */,
      17,    1,  123,    2, 0x08 /* Private */,
      18,    1,  126,    2, 0x08 /* Private */,
      19,    1,  129,    2, 0x08 /* Private */,
      22,    1,  132,    2, 0x08 /* Private */,
      25,    0,  135,    2, 0x08 /* Private */,
      26,    0,  136,    2, 0x08 /* Private */,
      27,    0,  137,    2, 0x08 /* Private */,
      28,    0,  138,    2, 0x08 /* Private */,
      29,    0,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QRect,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QImage,   16,
    QMetaType::Void, QMetaType::QImage,   16,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoView *_t = static_cast<VideoView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newImageProcessingFlags((*reinterpret_cast< ImageProcessingFlags(*)>(_a[1]))); break;
        case 1: _t->setROI((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 2: _t->newMouseData((*reinterpret_cast< MouseData(*)>(_a[1]))); break;
        case 3: _t->newMouseDataOriginalFrame((*reinterpret_cast< MouseData(*)>(_a[1]))); break;
        case 4: _t->updateMouseCursorPosLabel(); break;
        case 5: _t->updateMouseCursorPosLabelOriginalFrame(); break;
        case 6: _t->endOfFrame_action(); break;
        case 7: _t->endOfSaving_action(); break;
        case 8: _t->updateProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 10: _t->updateOriginalFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 11: _t->updatePlayerThreadStats((*reinterpret_cast< ThreadStatisticsData(*)>(_a[1]))); break;
        case 12: _t->handleContextMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->play(); break;
        case 14: _t->stop(); break;
        case 15: _t->pause(); break;
        case 16: _t->setTime(); break;
        case 17: _t->save_action(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoView::*)(ImageProcessingFlags );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoView::newImageProcessingFlags)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoView::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoView::setROI)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoView.data,
      qt_meta_data_VideoView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VideoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VideoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void VideoView::newImageProcessingFlags(ImageProcessingFlags _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoView::setROI(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
