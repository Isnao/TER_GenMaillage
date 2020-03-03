/****************************************************************************
** Meta object code from reading C++ file 'Scene_surface_mesh_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Scene_surface_mesh_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_surface_mesh_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_surface_mesh_item_t {
    QByteArrayData data[27];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_surface_mesh_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_surface_mesh_item_t qt_meta_stringdata_Scene_surface_mesh_item = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Scene_surface_mesh_item"
QT_MOC_LITERAL(1, 24, 27), // "item_is_about_to_be_changed"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 14), // "selection_done"
QT_MOC_LITERAL(4, 68, 15), // "selected_vertex"
QT_MOC_LITERAL(5, 84, 14), // "selected_facet"
QT_MOC_LITERAL(6, 99, 13), // "selected_edge"
QT_MOC_LITERAL(7, 113, 17), // "selected_halfedge"
QT_MOC_LITERAL(8, 131, 22), // "itemAboutToBeDestroyed"
QT_MOC_LITERAL(9, 154, 11), // "Scene_item*"
QT_MOC_LITERAL(10, 166, 17), // "selection_changed"
QT_MOC_LITERAL(11, 184, 6), // "select"
QT_MOC_LITERAL(12, 191, 6), // "orig_x"
QT_MOC_LITERAL(13, 198, 6), // "orig_y"
QT_MOC_LITERAL(14, 205, 6), // "orig_z"
QT_MOC_LITERAL(15, 212, 5), // "dir_x"
QT_MOC_LITERAL(16, 218, 5), // "dir_y"
QT_MOC_LITERAL(17, 224, 5), // "dir_z"
QT_MOC_LITERAL(18, 230, 14), // "intersect_face"
QT_MOC_LITERAL(19, 245, 15), // "face_descriptor"
QT_MOC_LITERAL(20, 261, 1), // "f"
QT_MOC_LITERAL(21, 263, 11), // "resetColors"
QT_MOC_LITERAL(22, 275, 12), // "showVertices"
QT_MOC_LITERAL(23, 288, 9), // "showEdges"
QT_MOC_LITERAL(24, 298, 9), // "showFaces"
QT_MOC_LITERAL(25, 308, 14), // "showPrimitives"
QT_MOC_LITERAL(26, 323, 8) // "zoomToId"

    },
    "Scene_surface_mesh_item\0"
    "item_is_about_to_be_changed\0\0"
    "selection_done\0selected_vertex\0"
    "selected_facet\0selected_edge\0"
    "selected_halfedge\0itemAboutToBeDestroyed\0"
    "Scene_item*\0selection_changed\0select\0"
    "orig_x\0orig_y\0orig_z\0dir_x\0dir_y\0dir_z\0"
    "intersect_face\0face_descriptor\0f\0"
    "resetColors\0showVertices\0showEdges\0"
    "showFaces\0showPrimitives\0zoomToId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_surface_mesh_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    1,   96,    2, 0x06 /* Public */,
       5,    1,   99,    2, 0x06 /* Public */,
       6,    1,  102,    2, 0x06 /* Public */,
       7,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  108,    2, 0x0a /* Public */,
      10,    1,  111,    2, 0x0a /* Public */,
      11,    6,  114,    2, 0x0a /* Public */,
      18,    7,  127,    2, 0x0a /* Public */,
      21,    0,  142,    2, 0x0a /* Public */,
      22,    1,  143,    2, 0x0a /* Public */,
      23,    1,  146,    2, 0x0a /* Public */,
      24,    1,  149,    2, 0x0a /* Public */,
      25,    1,  152,    2, 0x0a /* Public */,
      26,    0,  155,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   12,   13,   14,   15,   16,   17,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 19,   12,   13,   14,   15,   16,   17,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void Scene_surface_mesh_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_surface_mesh_item *_t = static_cast<Scene_surface_mesh_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->item_is_about_to_be_changed(); break;
        case 1: _t->selection_done(); break;
        case 2: _t->selected_vertex((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->selected_facet((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 4: _t->selected_edge((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 5: _t->selected_halfedge((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 6: _t->itemAboutToBeDestroyed((*reinterpret_cast< Scene_item*(*)>(_a[1]))); break;
        case 7: _t->selection_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->select((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 9: { bool _r = _t->intersect_face((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< const face_descriptor(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->resetColors(); break;
        case 11: _t->showVertices((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->showEdges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->showFaces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->showPrimitives((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->zoomToId(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Scene_item* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Scene_surface_mesh_item::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scene_surface_mesh_item::item_is_about_to_be_changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Scene_surface_mesh_item::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scene_surface_mesh_item::selection_done)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Scene_surface_mesh_item::*_t)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scene_surface_mesh_item::selected_vertex)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Scene_surface_mesh_item::*_t)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scene_surface_mesh_item::selected_facet)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Scene_surface_mesh_item::*_t)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scene_surface_mesh_item::selected_edge)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Scene_surface_mesh_item::*_t)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scene_surface_mesh_item::selected_halfedge)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Scene_surface_mesh_item::staticMetaObject = {
    { &CGAL::Three::Scene_item_rendering_helper::staticMetaObject, qt_meta_stringdata_Scene_surface_mesh_item.data,
      qt_meta_data_Scene_surface_mesh_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene_surface_mesh_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_surface_mesh_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_surface_mesh_item.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CGAL::Three::Scene_item_with_properties"))
        return static_cast< CGAL::Three::Scene_item_with_properties*>(this);
    if (!strcmp(_clname, "CGAL::Three::Scene_zoomable_item_interface"))
        return static_cast< CGAL::Three::Scene_zoomable_item_interface*>(this);
    if (!strcmp(_clname, "CGAL::Three::Scene_print_item_interface"))
        return static_cast< CGAL::Three::Scene_print_item_interface*>(this);
    if (!strcmp(_clname, "com.geometryfactory.PolyhedronDemo.PrintInterface/1.0"))
        return static_cast< CGAL::Three::Scene_print_item_interface*>(this);
    if (!strcmp(_clname, "com.geometryfactory.PolyhedronDemo.ZoomInterface/1.0"))
        return static_cast< CGAL::Three::Scene_zoomable_item_interface*>(this);
    return CGAL::Three::Scene_item_rendering_helper::qt_metacast(_clname);
}

int Scene_surface_mesh_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::Three::Scene_item_rendering_helper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Scene_surface_mesh_item::item_is_about_to_be_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Scene_surface_mesh_item::selection_done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Scene_surface_mesh_item::selected_vertex(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Scene_surface_mesh_item::selected_facet(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Scene_surface_mesh_item::selected_edge(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Scene_surface_mesh_item::selected_halfedge(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xc8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '4',  0x00, 'c',  'o',  'm',  '.',  'g',  'e', 
    'o',  'm',  'e',  't',  'r',  'y',  'f',  'a', 
    'c',  't',  'o',  'r',  'y',  '.',  'P',  'o', 
    'l',  'y',  'h',  'e',  'd',  'r',  'o',  'n', 
    'D',  'e',  'm',  'o',  '.',  'Z',  'o',  'o', 
    'm',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  '/',  '1',  '.',  '0',  0x00, 0x00,
    0x1b, 0x0c, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x17, 0x00, 'S',  'c',  'e',  'n',  'e',  '_', 
    's',  'u',  'r',  'f',  'a',  'c',  'e',  '_', 
    'm',  'e',  's',  'h',  '_',  'i',  't',  'e', 
    'm',  0x00, 0x00, 0x00, ':',  '!',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x15, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 'P',  0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xc8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '4',  0x00, 'c',  'o',  'm',  '.',  'g',  'e', 
    'o',  'm',  'e',  't',  'r',  'y',  'f',  'a', 
    'c',  't',  'o',  'r',  'y',  '.',  'P',  'o', 
    'l',  'y',  'h',  'e',  'd',  'r',  'o',  'n', 
    'D',  'e',  'm',  'o',  '.',  'Z',  'o',  'o', 
    'm',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  '/',  '1',  '.',  '0',  0x00, 0x00,
    0x15, 0x0c, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0f, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x17, 0x00, 'S',  'c', 
    'e',  'n',  'e',  '_',  's',  'u',  'r',  'f', 
    'a',  'c',  'e',  '_',  'm',  'e',  's',  'h', 
    '_',  'i',  't',  'e',  'm',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  '!',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'P',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(Scene_surface_mesh_item, Scene_surface_mesh_item)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
