/****************************************************************************
** Meta object code from reading C++ file 'Scene_points_with_normal_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Scene_points_with_normal_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_points_with_normal_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_points_with_normal_item_t {
    QByteArrayData data[15];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_points_with_normal_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_points_with_normal_item_t qt_meta_stringdata_Scene_points_with_normal_item = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Scene_points_with_normal_item"
QT_MOC_LITERAL(1, 30, 15), // "deleteSelection"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 15), // "invertSelection"
QT_MOC_LITERAL(4, 63, 9), // "selectAll"
QT_MOC_LITERAL(5, 73, 14), // "resetSelection"
QT_MOC_LITERAL(6, 88, 16), // "selectDuplicates"
QT_MOC_LITERAL(7, 105, 18), // "pointSliderPressed"
QT_MOC_LITERAL(8, 124, 19), // "pointSliderReleased"
QT_MOC_LITERAL(9, 144, 22), // "itemAboutToBeDestroyed"
QT_MOC_LITERAL(10, 167, 11), // "Scene_item*"
QT_MOC_LITERAL(11, 179, 12), // "setPointSize"
QT_MOC_LITERAL(12, 192, 4), // "size"
QT_MOC_LITERAL(13, 197, 13), // "setNormalSize"
QT_MOC_LITERAL(14, 211, 11) // "resetColors"

    },
    "Scene_points_with_normal_item\0"
    "deleteSelection\0\0invertSelection\0"
    "selectAll\0resetSelection\0selectDuplicates\0"
    "pointSliderPressed\0pointSliderReleased\0"
    "itemAboutToBeDestroyed\0Scene_item*\0"
    "setPointSize\0size\0setNormalSize\0"
    "resetColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_points_with_normal_item[] = {

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
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void Scene_points_with_normal_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_points_with_normal_item *_t = static_cast<Scene_points_with_normal_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteSelection(); break;
        case 1: _t->invertSelection(); break;
        case 2: _t->selectAll(); break;
        case 3: _t->resetSelection(); break;
        case 4: _t->selectDuplicates(); break;
        case 5: _t->pointSliderPressed(); break;
        case 6: _t->pointSliderReleased(); break;
        case 7: _t->itemAboutToBeDestroyed((*reinterpret_cast< Scene_item*(*)>(_a[1]))); break;
        case 8: _t->setPointSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setNormalSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->resetColors(); break;
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

const QMetaObject Scene_points_with_normal_item::staticMetaObject = {
    { &CGAL::Three::Scene_item_rendering_helper::staticMetaObject, qt_meta_stringdata_Scene_points_with_normal_item.data,
      qt_meta_data_Scene_points_with_normal_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene_points_with_normal_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_points_with_normal_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_points_with_normal_item.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CGAL::Three::Scene_item_with_properties"))
        return static_cast< CGAL::Three::Scene_item_with_properties*>(this);
    if (!strcmp(_clname, "CGAL::Three::Scene_zoomable_item_interface"))
        return static_cast< CGAL::Three::Scene_zoomable_item_interface*>(this);
    if (!strcmp(_clname, "com.geometryfactory.PolyhedronDemo.ZoomInterface/1.0"))
        return static_cast< CGAL::Three::Scene_zoomable_item_interface*>(this);
    return CGAL::Three::Scene_item_rendering_helper::qt_metacast(_clname);
}

int Scene_points_with_normal_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
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
    '4',  0x00, 'c',  'o',  'm',  '.',  'g',  'e', 
    'o',  'm',  'e',  't',  'r',  'y',  'f',  'a', 
    'c',  't',  'o',  'r',  'y',  '.',  'P',  'o', 
    'l',  'y',  'h',  'e',  'd',  'r',  'o',  'n', 
    'D',  'e',  'm',  'o',  '.',  'Z',  'o',  'o', 
    'm',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  '/',  '1',  '.',  '0',  0x00, 0x00,
    0x1b, 0x0c, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x1d, 0x00, 'S',  'c',  'e',  'n',  'e',  '_', 
    'p',  'o',  'i',  'n',  't',  's',  '_',  'w', 
    'i',  't',  'h',  '_',  'n',  'o',  'r',  'm', 
    'a',  'l',  '_',  'i',  't',  'e',  'm',  0x00,
    ':',  '!',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x15, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    'P',  0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
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
    'a',  'm',  'e',  0x00, 0x1d, 0x00, 'S',  'c', 
    'e',  'n',  'e',  '_',  'p',  'o',  'i',  'n', 
    't',  's',  '_',  'w',  'i',  't',  'h',  '_', 
    'n',  'o',  'r',  'm',  'a',  'l',  '_',  'i', 
    't',  'e',  'm',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  '!',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'P',  0x00, 0x00, 0x00,
    'l',  0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(Scene_points_with_normal_item, Scene_points_with_normal_item)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
