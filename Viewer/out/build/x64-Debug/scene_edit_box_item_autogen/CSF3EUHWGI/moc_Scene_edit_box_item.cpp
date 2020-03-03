/****************************************************************************
** Meta object code from reading C++ file 'Scene_edit_box_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Plugins/PCA/Scene_edit_box_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_edit_box_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_edit_box_item_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_edit_box_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_edit_box_item_t qt_meta_stringdata_Scene_edit_box_item = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Scene_edit_box_item"
QT_MOC_LITERAL(1, 20, 9), // "highlight"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 30), // "CGAL::Three::Viewer_interface*"
QT_MOC_LITERAL(4, 62, 6), // "viewer"
QT_MOC_LITERAL(5, 69, 7), // "clearHL"
QT_MOC_LITERAL(6, 77, 16), // "connectNewViewer"
QT_MOC_LITERAL(7, 94, 1) // "o"

    },
    "Scene_edit_box_item\0highlight\0\0"
    "CGAL::Three::Viewer_interface*\0viewer\0"
    "clearHL\0connectNewViewer\0o"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_edit_box_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    0,   32,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    7,

       0        // eod
};

void Scene_edit_box_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_edit_box_item *_t = static_cast<Scene_edit_box_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->highlight((*reinterpret_cast< CGAL::Three::Viewer_interface*(*)>(_a[1]))); break;
        case 1: _t->clearHL(); break;
        case 2: _t->connectNewViewer((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Scene_edit_box_item::staticMetaObject = {
    { &CGAL::Three::Scene_item_rendering_helper::staticMetaObject, qt_meta_stringdata_Scene_edit_box_item.data,
      qt_meta_data_Scene_edit_box_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene_edit_box_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_edit_box_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_edit_box_item.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CGAL::Three::Scene_transparent_interface"))
        return static_cast< CGAL::Three::Scene_transparent_interface*>(this);
    if (!strcmp(_clname, "com.geometryfactory.PolyhedronDemo.TransparentInterface/1.0"))
        return static_cast< CGAL::Three::Scene_transparent_interface*>(this);
    return CGAL::Three::Scene_item_rendering_helper::qt_metacast(_clname);
}

int Scene_edit_box_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::Three::Scene_item_rendering_helper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xcc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x13, 0x00, 'S',  'c',  'e',  'n',  'e',  '_', 
    'e',  'd',  'i',  't',  '_',  'b',  'o',  'x', 
    '_',  'i',  't',  'e',  'm',  0x00, 0x00, 0x00,
    ':',  '!',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x15, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xcc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    'a',  'm',  'e',  0x00, 0x13, 0x00, 'S',  'c', 
    'e',  'n',  'e',  '_',  'e',  'd',  'i',  't', 
    '_',  'b',  'o',  'x',  '_',  'i',  't',  'e', 
    'm',  0x00, 0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  '!',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    't',  0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(Scene_edit_box_item, Scene_edit_box_item)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
