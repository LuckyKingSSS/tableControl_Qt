/****************************************************************************
** Meta object code from reading C++ file 'ccustomtabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ccustomtabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccustomtabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CCustomTabButton_t {
    QByteArrayData data[6];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CCustomTabButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CCustomTabButton_t qt_meta_stringdata_CCustomTabButton = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CCustomTabButton"
QT_MOC_LITERAL(1, 17, 7), // "clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "nIndex"
QT_MOC_LITERAL(4, 33, 12), // "closeClicked"
QT_MOC_LITERAL(5, 46, 19) // "on_btnClose_clicked"

    },
    "CCustomTabButton\0clicked\0\0nIndex\0"
    "closeClicked\0on_btnClose_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CCustomTabButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CCustomTabButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CCustomTabButton *_t = static_cast<CCustomTabButton *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->closeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btnClose_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CCustomTabButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CCustomTabButton::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (CCustomTabButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CCustomTabButton::closeClicked)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CCustomTabButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_CCustomTabButton.data,
      qt_meta_data_CCustomTabButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CCustomTabButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CCustomTabButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CCustomTabButton.stringdata))
        return static_cast<void*>(const_cast< CCustomTabButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int CCustomTabButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void CCustomTabButton::clicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CCustomTabButton::closeClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_CCustomTabWidget_t {
    QByteArrayData data[5];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CCustomTabWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CCustomTabWidget_t qt_meta_stringdata_CCustomTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CCustomTabWidget"
QT_MOC_LITERAL(1, 17, 22), // "on_tabbar_closeClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "nIndex"
QT_MOC_LITERAL(4, 48, 17) // "on_tabbar_clicked"

    },
    "CCustomTabWidget\0on_tabbar_closeClicked\0"
    "\0nIndex\0on_tabbar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CCustomTabWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CCustomTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CCustomTabWidget *_t = static_cast<CCustomTabWidget *>(_o);
        switch (_id) {
        case 0: _t->on_tabbar_closeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_tabbar_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CCustomTabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CCustomTabWidget.data,
      qt_meta_data_CCustomTabWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CCustomTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CCustomTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CCustomTabWidget.stringdata))
        return static_cast<void*>(const_cast< CCustomTabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CCustomTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
