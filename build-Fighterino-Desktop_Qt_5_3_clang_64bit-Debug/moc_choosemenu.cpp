/****************************************************************************
** Meta object code from reading C++ file 'choosemenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Fighterino/choosemenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choosemenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChooseMenu_t {
    QByteArrayData data[17];
    char stringdata[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChooseMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChooseMenu_t qt_meta_stringdata_ChooseMenu = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 10),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 5),
QT_MOC_LITERAL(4, 29, 4),
QT_MOC_LITERAL(5, 34, 2),
QT_MOC_LITERAL(6, 37, 4),
QT_MOC_LITERAL(7, 42, 15),
QT_MOC_LITERAL(8, 58, 15),
QT_MOC_LITERAL(9, 74, 11),
QT_MOC_LITERAL(10, 86, 16),
QT_MOC_LITERAL(11, 103, 15),
QT_MOC_LITERAL(12, 119, 11),
QT_MOC_LITERAL(13, 131, 16),
QT_MOC_LITERAL(14, 148, 15),
QT_MOC_LITERAL(15, 164, 11),
QT_MOC_LITERAL(16, 176, 16)
    },
    "ChooseMenu\0setCurrent\0\0right\0down\0up\0"
    "left\0backToStartmenu\0selectedTopleft\0"
    "selectedTop\0selectedTopright\0"
    "selectedMidleft\0selectedMid\0"
    "selectedMidright\0selectedBotleft\0"
    "selectedBot\0selectedBotright"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    0,   92,    2, 0x06 /* Public */,
       4,    0,   93,    2, 0x06 /* Public */,
       5,    0,   94,    2, 0x06 /* Public */,
       6,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChooseMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChooseMenu *_t = static_cast<ChooseMenu *>(_o);
        switch (_id) {
        case 0: _t->setCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->right(); break;
        case 2: _t->down(); break;
        case 3: _t->up(); break;
        case 4: _t->left(); break;
        case 5: _t->backToStartmenu(); break;
        case 6: _t->selectedTopleft(); break;
        case 7: _t->selectedTop(); break;
        case 8: _t->selectedTopright(); break;
        case 9: _t->selectedMidleft(); break;
        case 10: _t->selectedMid(); break;
        case 11: _t->selectedMidright(); break;
        case 12: _t->selectedBotleft(); break;
        case 13: _t->selectedBot(); break;
        case 14: _t->selectedBotright(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChooseMenu::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseMenu::setCurrent)) {
                *result = 0;
            }
        }
        {
            typedef void (ChooseMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseMenu::right)) {
                *result = 1;
            }
        }
        {
            typedef void (ChooseMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseMenu::down)) {
                *result = 2;
            }
        }
        {
            typedef void (ChooseMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseMenu::up)) {
                *result = 3;
            }
        }
        {
            typedef void (ChooseMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseMenu::left)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ChooseMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChooseMenu.data,
      qt_meta_data_ChooseMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *ChooseMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseMenu.stringdata))
        return static_cast<void*>(const_cast< ChooseMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChooseMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ChooseMenu::setCurrent(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChooseMenu::right()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ChooseMenu::down()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ChooseMenu::up()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ChooseMenu::left()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
