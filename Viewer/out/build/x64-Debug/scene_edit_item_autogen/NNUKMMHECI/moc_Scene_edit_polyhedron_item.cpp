/****************************************************************************
** Meta object code from reading C++ file 'Scene_edit_polyhedron_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Plugins/Surface_mesh_deformation/Scene_edit_polyhedron_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_edit_polyhedron_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_edit_polyhedron_item_t {
    QByteArrayData data[17];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_edit_polyhedron_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_edit_polyhedron_item_t qt_meta_stringdata_Scene_edit_polyhedron_item = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Scene_edit_polyhedron_item"
QT_MOC_LITERAL(1, 27, 13), // "reset_spheres"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "updateDeform"
QT_MOC_LITERAL(4, 55, 6), // "change"
QT_MOC_LITERAL(5, 62, 23), // "invalidateOpenGLBuffers"
QT_MOC_LITERAL(6, 86, 8), // "selected"
QT_MOC_LITERAL(7, 95, 30), // "std::set<fg_vertex_descriptor>"
QT_MOC_LITERAL(8, 126, 6), // "select"
QT_MOC_LITERAL(9, 133, 6), // "orig_x"
QT_MOC_LITERAL(10, 140, 6), // "orig_y"
QT_MOC_LITERAL(11, 147, 6), // "orig_z"
QT_MOC_LITERAL(12, 154, 5), // "dir_x"
QT_MOC_LITERAL(13, 160, 5), // "dir_y"
QT_MOC_LITERAL(14, 166, 5), // "dir_z"
QT_MOC_LITERAL(15, 172, 6), // "deform"
QT_MOC_LITERAL(16, 179, 6) // "remesh"

    },
    "Scene_edit_polyhedron_item\0reset_spheres\0"
    "\0updateDeform\0change\0invalidateOpenGLBuffers\0"
    "selected\0std::set<fg_vertex_descriptor>\0"
    "select\0orig_x\0orig_y\0orig_z\0dir_x\0"
    "dir_y\0dir_z\0deform\0remesh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_edit_polyhedron_item[] = {

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
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       8,    6,   61,    2, 0x0a /* Public */,
      15,    0,   74,    2, 0x0a /* Public */,
      16,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    9,   10,   11,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scene_edit_polyhedron_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_edit_polyhedron_item *_t = static_cast<Scene_edit_polyhedron_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset_spheres(); break;
        case 1: _t->updateDeform(); break;
        case 2: _t->change(); break;
        case 3: _t->invalidateOpenGLBuffers(); break;
        case 4: _t->selected((*reinterpret_cast< const std::set<fg_vertex_descriptor>(*)>(_a[1]))); break;
        case 5: _t->select((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 6: _t->deform(); break;
        case 7: _t->remesh(); break;
        default: ;
        }
    }
}

const QMetaObject Scene_edit_polyhedron_item::staticMetaObject = {
    { &CGAL::Three::Scene_group_item::staticMetaObject, qt_meta_stringdata_Scene_edit_polyhedron_item.data,
      qt_meta_data_Scene_edit_polyhedron_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene_edit_polyhedron_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_edit_polyhedron_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_edit_polyhedron_item.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CGAL::Three::Scene_transparent_interface"))
        return static_cast< CGAL::Three::Scene_transparent_interface*>(this);
    if (!strcmp(_clname, "com.geometryfactory.PolyhedronDemo.TransparentInterface/1.0"))
        return static_cast< CGAL::Three::Scene_transparent_interface*>(this);
    return CGAL::Three::Scene_group_item::qt_metacast(_clname);
}

int Scene_edit_polyhedron_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::Three::Scene_group_item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xbc, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    ';',  0x00, 'c',  'o',  'm',  '.',  'g',  'e', 
    'o',  'm',  'e',  't',  'r',  'y',  'f',  'a', 
    'c',  't',  'o',  'r',  'y',  '.',  'P',  'o', 
    'l',  'y',  'h',  'e',  'd',  'r',  'o',  'n', 
    'D',  'e',  'm',  'o',  '.',  'T',  'r',  'a', 
    'n',  's',  'p',  'a',  'r',  'e',  'n',  't', 
    'I',  'n',  't',  'e',  'r',  'f',  'a',  'c', 
    'e',  '/',  '1',  '.',  '0',  0x00, 0x00, 0x00,
    0x1b, 0x0d, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x1a, 0x00, 'S',  'c',  'e',  'n',  'e',  '_', 
    'e',  'd',  'i',  't',  '_',  'p',  'o',  'l', 
    'y',  'h',  'e',  'd',  'r',  'o',  'n',  '_', 
    'i',  't',  'e',  'm',  ':',  '!',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x16, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xbc, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    ';',  0x00, 'c',  'o',  'm',  '.',  'g',  'e', 
    'o',  'm',  'e',  't',  'r',  'y',  'f',  'a', 
    'c',  't',  'o',  'r',  'y',  '.',  'P',  'o', 
    'l',  'y',  'h',  'e',  'd',  'r',  'o',  'n', 
    'D',  'e',  'm',  'o',  '.',  'T',  'r',  'a', 
    'n',  's',  'p',  'a',  'r',  'e',  'n',  't', 
    'I',  'n',  't',  'e',  'r',  'f',  'a',  'c', 
    'e',  '/',  '1',  '.',  '0',  0x00, 0x00, 0x00,
    0x15, 0x0d, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x10, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x1a, 0x00, 'S',  'c', 
    'e',  'n',  'e',  '_',  'e',  'd',  'i',  't', 
    '_',  'p',  'o',  'l',  'y',  'h',  'e',  'd', 
    'r',  'o',  'n',  '_',  'i',  't',  'e',  'm', 
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  '!',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(Scene_edit_polyhedron_item, Scene_edit_polyhedron_item)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
