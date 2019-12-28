/****************************************************************************
** Meta object code from reading C++ file 'sshx11inforetriever_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/libs/ssh/sshx11inforetriever_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshx11inforetriever_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSsh__Internal__SshX11InfoRetriever_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__Internal__SshX11InfoRetriever_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__Internal__SshX11InfoRetriever_t qt_meta_stringdata_QSsh__Internal__SshX11InfoRetriever = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QSsh::Internal::SshX11InfoRet..."
QT_MOC_LITERAL(1, 36, 7), // "failure"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "message"
QT_MOC_LITERAL(4, 53, 7), // "success"
QT_MOC_LITERAL(5, 61, 14), // "X11DisplayInfo"
QT_MOC_LITERAL(6, 76, 11) // "displayInfo"

    },
    "QSsh::Internal::SshX11InfoRetriever\0"
    "failure\0\0message\0success\0X11DisplayInfo\0"
    "displayInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__Internal__SshX11InfoRetriever[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void QSsh::Internal::SshX11InfoRetriever::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SshX11InfoRetriever *_t = static_cast<SshX11InfoRetriever *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->failure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->success((*reinterpret_cast< const X11DisplayInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SshX11InfoRetriever::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshX11InfoRetriever::failure)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SshX11InfoRetriever::*_t)(const X11DisplayInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshX11InfoRetriever::success)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QSsh::Internal::SshX11InfoRetriever::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSsh__Internal__SshX11InfoRetriever.data,
      qt_meta_data_QSsh__Internal__SshX11InfoRetriever,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSsh::Internal::SshX11InfoRetriever::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::Internal::SshX11InfoRetriever::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__Internal__SshX11InfoRetriever.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSsh::Internal::SshX11InfoRetriever::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QSsh::Internal::SshX11InfoRetriever::failure(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSsh::Internal::SshX11InfoRetriever::success(const X11DisplayInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
