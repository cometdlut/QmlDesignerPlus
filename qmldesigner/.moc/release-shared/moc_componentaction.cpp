/****************************************************************************
** Meta object code from reading C++ file 'componentaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/integration/componentaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'componentaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__ComponentAction_t {
    QByteArrayData data[9];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__ComponentAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__ComponentAction_t qt_meta_stringdata_QmlDesigner__ComponentAction = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmlDesigner::ComponentAction"
QT_MOC_LITERAL(1, 29, 23), // "currentComponentChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 9), // "ModelNode"
QT_MOC_LITERAL(4, 64, 4), // "node"
QT_MOC_LITERAL(5, 69, 15), // "changedToMaster"
QT_MOC_LITERAL(6, 85, 19), // "currentIndexChanged"
QT_MOC_LITERAL(7, 105, 5), // "index"
QT_MOC_LITERAL(8, 111, 27) // "emitCurrentComponentChanged"

    },
    "QmlDesigner::ComponentAction\0"
    "currentComponentChanged\0\0ModelNode\0"
    "node\0changedToMaster\0currentIndexChanged\0"
    "index\0emitCurrentComponentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__ComponentAction[] = {

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
       5,    0,   37,    2, 0x06 /* Public */,
       6,    1,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void QmlDesigner::ComponentAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComponentAction *_t = static_cast<ComponentAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentComponentChanged((*reinterpret_cast< const ModelNode(*)>(_a[1]))); break;
        case 1: _t->changedToMaster(); break;
        case 2: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->emitCurrentComponentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ComponentAction::*_t)(const ModelNode & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ComponentAction::currentComponentChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ComponentAction::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ComponentAction::changedToMaster)) {
                *result = 1;
            }
        }
        {
            typedef void (ComponentAction::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ComponentAction::currentIndexChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmlDesigner::ComponentAction::staticMetaObject = {
    { &QWidgetAction::staticMetaObject, qt_meta_stringdata_QmlDesigner__ComponentAction.data,
      qt_meta_data_QmlDesigner__ComponentAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::ComponentAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::ComponentAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__ComponentAction.stringdata0))
        return static_cast<void*>(const_cast< ComponentAction*>(this));
    return QWidgetAction::qt_metacast(_clname);
}

int QmlDesigner::ComponentAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QmlDesigner::ComponentAction::currentComponentChanged(const ModelNode & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlDesigner::ComponentAction::changedToMaster()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmlDesigner::ComponentAction::currentIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
