/****************************************************************************
** Meta object code from reading C++ file 'Viewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Viewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Viewer_t {
    QByteArrayData data[26];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Viewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Viewer_t qt_meta_stringdata_Viewer = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Viewer"
QT_MOC_LITERAL(1, 7, 11), // "sendMessage"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "doneInitGL"
QT_MOC_LITERAL(4, 31, 30), // "CGAL::Three::Viewer_interface*"
QT_MOC_LITERAL(5, 62, 15), // "setAntiAliasing"
QT_MOC_LITERAL(6, 78, 1), // "b"
QT_MOC_LITERAL(7, 80, 11), // "setTwoSides"
QT_MOC_LITERAL(8, 92, 18), // "SetOrthoProjection"
QT_MOC_LITERAL(9, 111, 14), // "setFastDrawing"
QT_MOC_LITERAL(10, 126, 21), // "turnCameraBy180Degres"
QT_MOC_LITERAL(11, 148, 21), // "dumpCameraCoordinates"
QT_MOC_LITERAL(12, 170, 23), // "moveCameraToCoordinates"
QT_MOC_LITERAL(13, 194, 18), // "animation_duration"
QT_MOC_LITERAL(14, 213, 12), // "printMessage"
QT_MOC_LITERAL(15, 226, 7), // "message"
QT_MOC_LITERAL(16, 234, 8), // "ms_delay"
QT_MOC_LITERAL(17, 243, 14), // "displayMessage"
QT_MOC_LITERAL(18, 258, 8), // "_message"
QT_MOC_LITERAL(19, 267, 5), // "delay"
QT_MOC_LITERAL(20, 273, 11), // "hideMessage"
QT_MOC_LITERAL(21, 285, 16), // "setBindingSelect"
QT_MOC_LITERAL(22, 302, 12), // "setNoBinding"
QT_MOC_LITERAL(23, 315, 11), // "setLighting"
QT_MOC_LITERAL(24, 327, 13), // "messageLogged"
QT_MOC_LITERAL(25, 341, 19) // "QOpenGLDebugMessage"

    },
    "Viewer\0sendMessage\0\0doneInitGL\0"
    "CGAL::Three::Viewer_interface*\0"
    "setAntiAliasing\0b\0setTwoSides\0"
    "SetOrthoProjection\0setFastDrawing\0"
    "turnCameraBy180Degres\0dumpCameraCoordinates\0"
    "moveCameraToCoordinates\0animation_duration\0"
    "printMessage\0message\0ms_delay\0"
    "displayMessage\0_message\0delay\0hideMessage\0"
    "setBindingSelect\0setNoBinding\0setLighting\0"
    "messageLogged\0QOpenGLDebugMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Viewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  110,    2, 0x0a /* Public */,
       7,    1,  113,    2, 0x0a /* Public */,
       8,    1,  116,    2, 0x0a /* Public */,
       9,    1,  119,    2, 0x0a /* Public */,
      10,    0,  122,    2, 0x0a /* Public */,
      11,    0,  123,    2, 0x0a /* Public */,
      12,    2,  124,    2, 0x0a /* Public */,
      12,    1,  129,    2, 0x2a /* Public | MethodCloned */,
      14,    2,  132,    2, 0x0a /* Public */,
      17,    2,  137,    2, 0x0a /* Public */,
      17,    1,  142,    2, 0x0a /* Public */,
      20,    0,  145,    2, 0x0a /* Public */,
      21,    0,  146,    2, 0x0a /* Public */,
      22,    0,  147,    2, 0x0a /* Public */,
      23,    0,  148,    2, 0x0a /* Public */,
      24,    1,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::Float,    2,   13,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,    2,

       0        // eod
};

void Viewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Viewer *_t = static_cast<Viewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->doneInitGL((*reinterpret_cast< CGAL::Three::Viewer_interface*(*)>(_a[1]))); break;
        case 2: _t->setAntiAliasing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setTwoSides((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetOrthoProjection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setFastDrawing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->turnCameraBy180Degres(); break;
        case 7: { QString _r = _t->dumpCameraCoordinates();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->moveCameraToCoordinates((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->moveCameraToCoordinates((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->printMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->hideMessage(); break;
        case 14: _t->setBindingSelect(); break;
        case 15: _t->setNoBinding(); break;
        case 16: _t->setLighting(); break;
        case 17: _t->messageLogged((*reinterpret_cast< QOpenGLDebugMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CGAL::Three::Viewer_interface* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QOpenGLDebugMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Viewer::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer::sendMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Viewer::*_t)(CGAL::Three::Viewer_interface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer::doneInitGL)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Viewer::staticMetaObject = {
    { &CGAL::Three::Viewer_interface::staticMetaObject, qt_meta_stringdata_Viewer.data,
      qt_meta_data_Viewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Viewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Viewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Viewer.stringdata0))
        return static_cast<void*>(this);
    return CGAL::Three::Viewer_interface::qt_metacast(_clname);
}

int Viewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGAL::Three::Viewer_interface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Viewer::sendMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Viewer::doneInitGL(CGAL::Three::Viewer_interface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
