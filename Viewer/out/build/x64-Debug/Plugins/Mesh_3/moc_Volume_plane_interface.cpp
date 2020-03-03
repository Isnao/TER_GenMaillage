/****************************************************************************
** Meta object code from reading C++ file 'Volume_plane_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Plugins/Mesh_3/Volume_plane_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Volume_plane_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Volume_plane_interface_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Volume_plane_interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Volume_plane_interface_t qt_meta_stringdata_Volume_plane_interface = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Volume_plane_interface"
QT_MOC_LITERAL(1, 23, 24), // "planeDestructionIncoming"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 23), // "Volume_plane_interface*"
QT_MOC_LITERAL(4, 73, 11), // "manipulated"
QT_MOC_LITERAL(5, 85, 8), // "selected"
QT_MOC_LITERAL(6, 94, 24), // "CGAL::Three::Scene_item*"
QT_MOC_LITERAL(7, 119, 21) // "propagateManipulation"

    },
    "Volume_plane_interface\0planeDestructionIncoming\0"
    "\0Volume_plane_interface*\0manipulated\0"
    "selected\0CGAL::Three::Scene_item*\0"
    "propagateManipulation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Volume_plane_interface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Volume_plane_interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Volume_plane_interface *_t = static_cast<Volume_plane_interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->planeDestructionIncoming((*reinterpret_cast< Volume_plane_interface*(*)>(_a[1]))); break;
        case 1: _t->manipulated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selected((*reinterpret_cast< CGAL::Three::Scene_item*(*)>(_a[1]))); break;
        case 3: _t->propagateManipulation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Volume_plane_interface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CGAL::Three::Scene_item* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Volume_plane_interface::*_t)(Volume_plane_interface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Volume_plane_interface::planeDestructionIncoming)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Volume_plane_interface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Volume_plane_interface::manipulated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Volume_plane_interface::*_t)(CGAL::Three::Scene_item * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Volume_plane_interface::selected)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Volume_plane_interface::staticMetaObject = {
    { &Scene_item_rendering_helper::staticMetaObject, qt_meta_stringdata_Volume_plane_interface.data,
      qt_meta_data_Volume_plane_interface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Volume_plane_interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Volume_plane_interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Volume_plane_interface.stringdata0))
        return static_cast<void*>(this);
    return Scene_item_rendering_helper::qt_metacast(_clname);
}

int Volume_plane_interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene_item_rendering_helper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Volume_plane_interface::planeDestructionIncoming(Volume_plane_interface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Volume_plane_interface::manipulated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Volume_plane_interface::selected(CGAL::Three::Scene_item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
