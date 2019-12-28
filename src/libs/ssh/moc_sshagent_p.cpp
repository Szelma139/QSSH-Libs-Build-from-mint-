/****************************************************************************
** Meta object code from reading C++ file 'sshagent_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/libs/ssh/sshagent_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshagent_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSsh__Internal__SshAgent_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__Internal__SshAgent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__Internal__SshAgent_t qt_meta_stringdata_QSsh__Internal__SshAgent = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QSsh::Internal::SshAgent"
QT_MOC_LITERAL(1, 25, 13), // "errorOccurred"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "keysUpdated"
QT_MOC_LITERAL(4, 52, 18), // "signatureAvailable"
QT_MOC_LITERAL(5, 71, 3), // "key"
QT_MOC_LITERAL(6, 75, 9), // "signature"
QT_MOC_LITERAL(7, 85, 5) // "token"

    },
    "QSsh::Internal::SshAgent\0errorOccurred\0"
    "\0keysUpdated\0signatureAvailable\0key\0"
    "signature\0token"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__Internal__SshAgent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    3,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray, QMetaType::UInt,    5,    6,    7,

       0        // eod
};

void QSsh::Internal::SshAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SshAgent *_t = static_cast<SshAgent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorOccurred(); break;
        case 1: _t->keysUpdated(); break;
        case 2: _t->signatureAvailable((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SshAgent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshAgent::errorOccurred)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SshAgent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshAgent::keysUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SshAgent::*_t)(const QByteArray & , const QByteArray & , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshAgent::signatureAvailable)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QSsh::Internal::SshAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSsh__Internal__SshAgent.data,
      qt_meta_data_QSsh__Internal__SshAgent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSsh::Internal::SshAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::Internal::SshAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__Internal__SshAgent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSsh::Internal::SshAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QSsh::Internal::SshAgent::errorOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSsh::Internal::SshAgent::keysUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSsh::Internal::SshAgent::signatureAvailable(const QByteArray & _t1, const QByteArray & _t2, uint _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
