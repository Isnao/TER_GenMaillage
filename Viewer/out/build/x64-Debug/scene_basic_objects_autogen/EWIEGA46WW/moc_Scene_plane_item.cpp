/****************************************************************************
** Meta object code from reading C++ file 'Scene_plane_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Scene_plane_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_plane_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_plane_item_t {
    QByteArrayData data[13];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_plane_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_plane_item_t qt_meta_stringdata_Scene_plane_item = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Scene_plane_item"
QT_MOC_LITERAL(1, 17, 23), // "invalidateOpenGLBuffers"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "setPosition"
QT_MOC_LITERAL(4, 54, 1), // "x"
QT_MOC_LITERAL(5, 56, 1), // "y"
QT_MOC_LITERAL(6, 58, 1), // "z"
QT_MOC_LITERAL(7, 60, 9), // "setNormal"
QT_MOC_LITERAL(8, 70, 9), // "flipPlane"
QT_MOC_LITERAL(9, 80, 11), // "setClonable"
QT_MOC_LITERAL(10, 92, 1), // "b"
QT_MOC_LITERAL(11, 94, 16), // "setManipulatable"
QT_MOC_LITERAL(12, 111, 19) // "setPlaneOrientation"

    },
    "Scene_plane_item\0invalidateOpenGLBuffers\0"
    "\0setPosition\0x\0y\0z\0setNormal\0flipPlane\0"
    "setClonable\0b\0setManipulatable\0"
    "setPlaneOrientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_plane_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    3,   70,    2, 0x0a /* Public */,
       3,    3,   77,    2, 0x0a /* Public */,
       7,    3,   84,    2, 0x0a /* Public */,
       7,    3,   91,    2, 0x0a /* Public */,
       8,    0,   98,    2, 0x0a /* Public */,
       9,    1,   99,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  103,    2, 0x0a /* Public */,
      11,    0,  106,    2, 0x2a /* Public | MethodCloned */,
      12,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    4,    5,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    4,    5,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scene_plane_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_plane_item *_t = static_cast<Scene_plane_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidateOpenGLBuffers(); break;
        case 1: _t->setPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 2: _t->setPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->setNormal((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 4: _t->setNormal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->flipPlane(); break;
        case 6: _t->setClonable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setClonable(); break;
        case 8: _t->setManipulatable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setManipulatable(); break;
        case 10: _t->setPlaneOrientation(); break;
        default: ;
        }
    }
}

const QMetaObject Scene_plane_item::staticMetaObject = {
    { &CGAL::Three::Scene_item_rendering_helper::staticMetaObject, qt_meta_stringdata_Scene_plane_item.data,
      qt_meta_data_Scene_plane_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene_plane_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_plane_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_plane_item.stringdata0))
        return static_cast<void*>(this);
    return CGAL::Three::Scene_item_rendering_helper::qt_metacast(_clname);
}

int Scene_plane_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::Three::Scene_item_rendering_helper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
