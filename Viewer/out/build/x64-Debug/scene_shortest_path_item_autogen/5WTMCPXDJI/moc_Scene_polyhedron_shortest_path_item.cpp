/****************************************************************************
** Meta object code from reading C++ file 'Scene_polyhedron_shortest_path_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Plugins/Surface_mesh/Scene_polyhedron_shortest_path_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_polyhedron_shortest_path_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_polyhedron_shortest_path_item_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_polyhedron_shortest_path_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_polyhedron_shortest_path_item_t qt_meta_stringdata_Scene_polyhedron_shortest_path_item = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Scene_polyhedron_shortest_pat..."
QT_MOC_LITERAL(1, 36, 17), // "poly_item_changed"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 16), // "connectNewViewer"
QT_MOC_LITERAL(4, 72, 1) // "o"

    },
    "Scene_polyhedron_shortest_path_item\0"
    "poly_item_changed\0\0connectNewViewer\0"
    "o"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_polyhedron_shortest_path_item[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    4,

       0        // eod
};

void Scene_polyhedron_shortest_path_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_polyhedron_shortest_path_item *_t = static_cast<Scene_polyhedron_shortest_path_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->poly_item_changed(); break;
        case 1: _t->connectNewViewer((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Scene_polyhedron_shortest_path_item::staticMetaObject = {
    { &Scene_polyhedron_item_decorator::staticMetaObject, qt_meta_stringdata_Scene_polyhedron_shortest_path_item.data,
      qt_meta_data_Scene_polyhedron_shortest_path_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene_polyhedron_shortest_path_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_polyhedron_shortest_path_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_polyhedron_shortest_path_item.stringdata0))
        return static_cast<void*>(this);
    return Scene_polyhedron_item_decorator::qt_metacast(_clname);
}

int Scene_polyhedron_shortest_path_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene_polyhedron_item_decorator::qt_metacall(_c, _id, _a);
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
