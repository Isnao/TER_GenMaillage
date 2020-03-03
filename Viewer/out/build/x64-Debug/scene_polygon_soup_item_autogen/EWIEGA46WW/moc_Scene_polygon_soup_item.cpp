/****************************************************************************
** Meta object code from reading C++ file 'Scene_polygon_soup_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Scene_polygon_soup_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_polygon_soup_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_polygon_soup_item_t {
    QByteArrayData data[15];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_polygon_soup_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_polygon_soup_item_t qt_meta_stringdata_Scene_polygon_soup_item = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Scene_polygon_soup_item"
QT_MOC_LITERAL(1, 24, 20), // "shuffle_orientations"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "orient"
QT_MOC_LITERAL(4, 53, 19), // "exportAsSurfaceMesh"
QT_MOC_LITERAL(5, 73, 6), // "SMesh*"
QT_MOC_LITERAL(6, 80, 10), // "inside_out"
QT_MOC_LITERAL(7, 91, 6), // "repair"
QT_MOC_LITERAL(8, 98, 9), // "erase_dup"
QT_MOC_LITERAL(9, 108, 20), // "req_same_orientation"
QT_MOC_LITERAL(10, 129, 26), // "setDisplayNonManifoldEdges"
QT_MOC_LITERAL(11, 156, 23), // "displayNonManifoldEdges"
QT_MOC_LITERAL(12, 180, 22), // "itemAboutToBeDestroyed"
QT_MOC_LITERAL(13, 203, 11), // "Scene_item*"
QT_MOC_LITERAL(14, 215, 4) // "item"

    },
    "Scene_polygon_soup_item\0shuffle_orientations\0"
    "\0orient\0exportAsSurfaceMesh\0SMesh*\0"
    "inside_out\0repair\0erase_dup\0"
    "req_same_orientation\0setDisplayNonManifoldEdges\0"
    "displayNonManifoldEdges\0itemAboutToBeDestroyed\0"
    "Scene_item*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_polygon_soup_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    1,   56,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x0a /* Public */,
       7,    2,   60,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,
      11,    0,   68,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void Scene_polygon_soup_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_polygon_soup_item *_t = static_cast<Scene_polygon_soup_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shuffle_orientations(); break;
        case 1: { bool _r = _t->orient();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->exportAsSurfaceMesh((*reinterpret_cast< SMesh*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->inside_out(); break;
        case 4: _t->repair((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setDisplayNonManifoldEdges((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->displayNonManifoldEdges();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->itemAboutToBeDestroyed((*reinterpret_cast< Scene_item*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Scene_item* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Scene_polygon_soup_item::staticMetaObject = {
    { &CGAL::Three::Scene_item_rendering_helper::staticMetaObject, qt_meta_stringdata_Scene_polygon_soup_item.data,
      qt_meta_data_Scene_polygon_soup_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene_polygon_soup_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_polygon_soup_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_polygon_soup_item.stringdata0))
        return static_cast<void*>(this);
    return CGAL::Three::Scene_item_rendering_helper::qt_metacast(_clname);
}

int Scene_polygon_soup_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::Three::Scene_item_rendering_helper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
