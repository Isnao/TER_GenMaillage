/****************************************************************************
** Meta object code from reading C++ file 'Viewer_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/CGAL/Three/Viewer_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CGAL__Three__Viewer_interface_t {
    QByteArrayData data[27];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CGAL__Three__Viewer_interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CGAL__Three__Viewer_interface_t qt_meta_stringdata_CGAL__Three__Viewer_interface = {
    {
QT_MOC_LITERAL(0, 0, 29), // "CGAL::Three::Viewer_interface"
QT_MOC_LITERAL(1, 30, 8), // "selected"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 2), // "id"
QT_MOC_LITERAL(4, 43, 18), // "requestContextMenu"
QT_MOC_LITERAL(5, 62, 10), // "global_pos"
QT_MOC_LITERAL(6, 73, 13), // "selectedPoint"
QT_MOC_LITERAL(7, 87, 1), // "x"
QT_MOC_LITERAL(8, 89, 1), // "y"
QT_MOC_LITERAL(9, 91, 1), // "z"
QT_MOC_LITERAL(10, 93, 12), // "selectionRay"
QT_MOC_LITERAL(11, 106, 2), // "sx"
QT_MOC_LITERAL(12, 109, 2), // "sy"
QT_MOC_LITERAL(13, 112, 2), // "sz"
QT_MOC_LITERAL(14, 115, 2), // "tx"
QT_MOC_LITERAL(15, 118, 2), // "ty"
QT_MOC_LITERAL(16, 121, 2), // "tz"
QT_MOC_LITERAL(17, 124, 15), // "setAntiAliasing"
QT_MOC_LITERAL(18, 140, 1), // "b"
QT_MOC_LITERAL(19, 142, 11), // "setTwoSides"
QT_MOC_LITERAL(20, 154, 14), // "setFastDrawing"
QT_MOC_LITERAL(21, 169, 21), // "turnCameraBy180Degres"
QT_MOC_LITERAL(22, 191, 21), // "dumpCameraCoordinates"
QT_MOC_LITERAL(23, 213, 23), // "moveCameraToCoordinates"
QT_MOC_LITERAL(24, 237, 6), // "target"
QT_MOC_LITERAL(25, 244, 18), // "animation_duration"
QT_MOC_LITERAL(26, 263, 18) // "SetOrthoProjection"

    },
    "CGAL::Three::Viewer_interface\0selected\0"
    "\0id\0requestContextMenu\0global_pos\0"
    "selectedPoint\0x\0y\0z\0selectionRay\0sx\0"
    "sy\0sz\0tx\0ty\0tz\0setAntiAliasing\0b\0"
    "setTwoSides\0setFastDrawing\0"
    "turnCameraBy180Degres\0dumpCameraCoordinates\0"
    "moveCameraToCoordinates\0target\0"
    "animation_duration\0SetOrthoProjection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CGAL__Three__Viewer_interface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    3,   80,    2, 0x06 /* Public */,
      10,    6,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  100,    2, 0x0a /* Public */,
      19,    1,  103,    2, 0x0a /* Public */,
      20,    1,  106,    2, 0x0a /* Public */,
      21,    0,  109,    2, 0x0a /* Public */,
      22,    0,  110,    2, 0x0a /* Public */,
      23,    2,  111,    2, 0x0a /* Public */,
      23,    1,  116,    2, 0x2a /* Public | MethodCloned */,
      26,    1,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   11,   12,   13,   14,   15,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::Float,   24,   25,
    QMetaType::Bool, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void CGAL::Three::Viewer_interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Viewer_interface *_t = static_cast<Viewer_interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->requestContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->selectedPoint((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->selectionRay((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 4: _t->setAntiAliasing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setTwoSides((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setFastDrawing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->turnCameraBy180Degres(); break;
        case 8: { QString _r = _t->dumpCameraCoordinates();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->moveCameraToCoordinates((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->moveCameraToCoordinates((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->SetOrthoProjection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Viewer_interface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer_interface::selected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Viewer_interface::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer_interface::requestContextMenu)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Viewer_interface::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer_interface::selectedPoint)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Viewer_interface::*_t)(double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer_interface::selectionRay)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CGAL::Three::Viewer_interface::staticMetaObject = {
    { &CGAL::QGLViewer::staticMetaObject, qt_meta_stringdata_CGAL__Three__Viewer_interface.data,
      qt_meta_data_CGAL__Three__Viewer_interface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CGAL::Three::Viewer_interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CGAL::Three::Viewer_interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CGAL__Three__Viewer_interface.stringdata0))
        return static_cast<void*>(this);
    return CGAL::QGLViewer::qt_metacast(_clname);
}

int CGAL::Three::Viewer_interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::QGLViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CGAL::Three::Viewer_interface::selected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CGAL::Three::Viewer_interface::requestContextMenu(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CGAL::Three::Viewer_interface::selectedPoint(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CGAL::Three::Viewer_interface::selectionRay(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
