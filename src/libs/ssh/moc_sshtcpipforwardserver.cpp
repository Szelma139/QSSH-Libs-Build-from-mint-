/****************************************************************************
** Meta object code from reading C++ file 'sshtcpipforwardserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/libs/ssh/sshtcpipforwardserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshtcpipforwardserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSsh__SshTcpIpForwardServer_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__SshTcpIpForwardServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__SshTcpIpForwardServer_t qt_meta_stringdata_QSsh__SshTcpIpForwardServer = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QSsh::SshTcpIpForwardServer"
QT_MOC_LITERAL(1, 28, 5), // "error"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "reason"
QT_MOC_LITERAL(4, 42, 13), // "newConnection"
QT_MOC_LITERAL(5, 56, 12), // "stateChanged"
QT_MOC_LITERAL(6, 69, 5), // "State"
QT_MOC_LITERAL(7, 75, 5) // "state"

    },
    "QSsh::SshTcpIpForwardServer\0error\0\0"
    "reason\0newConnection\0stateChanged\0"
    "State\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__SshTcpIpForwardServer[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void QSsh::SshTcpIpForwardServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SshTcpIpForwardServer *_t = static_cast<SshTcpIpForwardServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newConnection(); break;
        case 2: _t->stateChanged((*reinterpret_cast< State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SshTcpIpForwardServer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshTcpIpForwardServer::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SshTcpIpForwardServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshTcpIpForwardServer::newConnection)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SshTcpIpForwardServer::*_t)(State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshTcpIpForwardServer::stateChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QSsh::SshTcpIpForwardServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSsh__SshTcpIpForwardServer.data,
      qt_meta_data_QSsh__SshTcpIpForwardServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSsh::SshTcpIpForwardServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::SshTcpIpForwardServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__SshTcpIpForwardServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSsh::SshTcpIpForwardServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QSsh::SshTcpIpForwardServer::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSsh::SshTcpIpForwardServer::newConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSsh::SshTcpIpForwardServer::stateChanged(State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
