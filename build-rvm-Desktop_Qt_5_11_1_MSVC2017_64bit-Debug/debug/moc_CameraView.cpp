/****************************************************************************
** Meta object code from reading C++ file 'CameraView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/main/ui/CameraView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraView_t {
    QByteArrayData data[31];
    char stringdata0[473];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraView_t qt_meta_stringdata_CameraView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CameraView"
QT_MOC_LITERAL(1, 11, 23), // "newImageProcessingFlags"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "ImageProcessingFlags"
QT_MOC_LITERAL(4, 57, 20), // "imageProcessingFlags"
QT_MOC_LITERAL(5, 78, 6), // "setROI"
QT_MOC_LITERAL(6, 85, 3), // "roi"
QT_MOC_LITERAL(7, 89, 12), // "newMouseData"
QT_MOC_LITERAL(8, 102, 9), // "MouseData"
QT_MOC_LITERAL(9, 112, 9), // "mouseData"
QT_MOC_LITERAL(10, 122, 25), // "newMouseDataOriginalFrame"
QT_MOC_LITERAL(11, 148, 25), // "updateMouseCursorPosLabel"
QT_MOC_LITERAL(12, 174, 38), // "updateMouseCursorPosLabelOrig..."
QT_MOC_LITERAL(13, 213, 16), // "clearImageBuffer"
QT_MOC_LITERAL(14, 230, 12), // "frameWritten"
QT_MOC_LITERAL(15, 243, 6), // "frames"
QT_MOC_LITERAL(16, 250, 11), // "updateFrame"
QT_MOC_LITERAL(17, 262, 5), // "frame"
QT_MOC_LITERAL(18, 268, 19), // "updateOriginalFrame"
QT_MOC_LITERAL(19, 288, 27), // "updateProcessingThreadStats"
QT_MOC_LITERAL(20, 316, 20), // "ThreadStatisticsData"
QT_MOC_LITERAL(21, 337, 8), // "statData"
QT_MOC_LITERAL(22, 346, 24), // "updateCaptureThreadStats"
QT_MOC_LITERAL(23, 371, 23), // "handleContextMenuAction"
QT_MOC_LITERAL(24, 395, 8), // "QAction*"
QT_MOC_LITERAL(25, 404, 6), // "action"
QT_MOC_LITERAL(26, 411, 12), // "hideSettings"
QT_MOC_LITERAL(27, 424, 6), // "record"
QT_MOC_LITERAL(28, 431, 19), // "selectButton_action"
QT_MOC_LITERAL(29, 451, 15), // "handleTabChange"
QT_MOC_LITERAL(30, 467, 5) // "index"

    },
    "CameraView\0newImageProcessingFlags\0\0"
    "ImageProcessingFlags\0imageProcessingFlags\0"
    "setROI\0roi\0newMouseData\0MouseData\0"
    "mouseData\0newMouseDataOriginalFrame\0"
    "updateMouseCursorPosLabel\0"
    "updateMouseCursorPosLabelOriginalFrame\0"
    "clearImageBuffer\0frameWritten\0frames\0"
    "updateFrame\0frame\0updateOriginalFrame\0"
    "updateProcessingThreadStats\0"
    "ThreadStatisticsData\0statData\0"
    "updateCaptureThreadStats\0"
    "handleContextMenuAction\0QAction*\0"
    "action\0hideSettings\0record\0"
    "selectButton_action\0handleTabChange\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    1,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  105,    2, 0x0a /* Public */,
      10,    1,  108,    2, 0x0a /* Public */,
      11,    0,  111,    2, 0x0a /* Public */,
      12,    0,  112,    2, 0x0a /* Public */,
      13,    0,  113,    2, 0x0a /* Public */,
      14,    1,  114,    2, 0x0a /* Public */,
      16,    1,  117,    2, 0x08 /* Private */,
      18,    1,  120,    2, 0x08 /* Private */,
      19,    1,  123,    2, 0x08 /* Private */,
      22,    1,  126,    2, 0x08 /* Private */,
      23,    1,  129,    2, 0x08 /* Private */,
      26,    0,  132,    2, 0x08 /* Private */,
      27,    0,  133,    2, 0x08 /* Private */,
      28,    0,  134,    2, 0x08 /* Private */,
      29,    1,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QRect,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QImage,   17,
    QMetaType::Void, QMetaType::QImage,   17,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,

       0        // eod
};

void CameraView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraView *_t = static_cast<CameraView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newImageProcessingFlags((*reinterpret_cast< ImageProcessingFlags(*)>(_a[1]))); break;
        case 1: _t->setROI((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 2: _t->newMouseData((*reinterpret_cast< MouseData(*)>(_a[1]))); break;
        case 3: _t->newMouseDataOriginalFrame((*reinterpret_cast< MouseData(*)>(_a[1]))); break;
        case 4: _t->updateMouseCursorPosLabel(); break;
        case 5: _t->updateMouseCursorPosLabelOriginalFrame(); break;
        case 6: _t->clearImageBuffer(); break;
        case 7: _t->frameWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 9: _t->updateOriginalFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 10: _t->updateProcessingThreadStats((*reinterpret_cast< ThreadStatisticsData(*)>(_a[1]))); break;
        case 11: _t->updateCaptureThreadStats((*reinterpret_cast< ThreadStatisticsData(*)>(_a[1]))); break;
        case 12: _t->handleContextMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->hideSettings(); break;
        case 14: _t->record(); break;
        case 15: _t->selectButton_action(); break;
        case 16: _t->handleTabChange((*reinterpret_cast< int(*)>(_a[1]))); break;
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
            using _t = void (CameraView::*)(ImageProcessingFlags );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraView::newImageProcessingFlags)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CameraView::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraView::setROI)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CameraView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CameraView.data,
      qt_meta_data_CameraView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CameraView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CameraView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void CameraView::newImageProcessingFlags(ImageProcessingFlags _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraView::setROI(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
