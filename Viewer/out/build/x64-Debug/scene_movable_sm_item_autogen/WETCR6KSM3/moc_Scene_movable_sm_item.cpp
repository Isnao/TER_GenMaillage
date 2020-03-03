/****************************************************************************
** Meta object code from reading C++ file 'Scene_movable_sm_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Plugins/AABB_tree/Scene_movable_sm_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene_movable_sm_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_movable_sm_item_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_movable_sm_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_movable_sm_item_t qt_meta_stringdata_Scene_movable_sm_item = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Scene_movable_sm_item"
QT_MOC_LITERAL(1, 22, 4), // "stop"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6) // "killed"

    },
    "Scene_movable_sm_item\0stop\0\0killed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene_movable_sm_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scene_movable_sm_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene_movable_sm_item *_t = static_cast<Scene_movable_sm_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stop(); break;
        case 1: _t->killed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Scene_movable_sm_item::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scene_movable_sm_item::stop)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Scene_movable_sm_item::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scene_movable_sm_item::killed)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Scene_movable_sm_item::staticMetaObject = {
    { &CGAL::Three::Scene_item_rendering_helper::staticMetaObject, qt_meta_stringdata_Scene_movable_sm_item.data,
      qt_meta_data_Scene_movable_sm_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene_movable_sm_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene_movable_sm_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_movable_sm_item.stringdata0))
        return static_cast<void*>(this);
    return CGAL::Three::Scene_item_rendering_helper::qt_metacast(_clname);
}

int Scene_movable_sm_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::Three::Scene_item_rendering_helper::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Scene_movable_sm_item::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Scene_movable_sm_item::killed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
