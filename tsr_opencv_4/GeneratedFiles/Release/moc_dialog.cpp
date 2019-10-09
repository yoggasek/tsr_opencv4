/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[17];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 22), // "wait_until_next_second"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "on_stop_Button_clicked"
QT_MOC_LITERAL(4, 54, 25), // "on_zdjecie_Button_clicked"
QT_MOC_LITERAL(5, 80, 17), // "on_nagraj_clicked"
QT_MOC_LITERAL(6, 98, 24), // "on_kamera_Button_clicked"
QT_MOC_LITERAL(7, 123, 19), // "on_videooff_clicked"
QT_MOC_LITERAL(8, 143, 22), // "on_film_Button_clicked"
QT_MOC_LITERAL(9, 166, 28), // "on_wykrywanie_Button_clicked"
QT_MOC_LITERAL(10, 195, 24), // "processFrameAndUpdateGUI"
QT_MOC_LITERAL(11, 220, 18), // "on_zdjecie_clicked"
QT_MOC_LITERAL(12, 239, 14), // "numberofframes"
QT_MOC_LITERAL(13, 254, 7), // "kamerka"
QT_MOC_LITERAL(14, 262, 11), // "svm_predict"
QT_MOC_LITERAL(15, 274, 4), // "Mat&"
QT_MOC_LITERAL(16, 279, 5) // "image"

    },
    "Dialog\0wait_until_next_second\0\0"
    "on_stop_Button_clicked\0on_zdjecie_Button_clicked\0"
    "on_nagraj_clicked\0on_kamera_Button_clicked\0"
    "on_videooff_clicked\0on_film_Button_clicked\0"
    "on_wykrywanie_Button_clicked\0"
    "processFrameAndUpdateGUI\0on_zdjecie_clicked\0"
    "numberofframes\0kamerka\0svm_predict\0"
    "Mat&\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wait_until_next_second(); break;
        case 1: _t->on_stop_Button_clicked(); break;
        case 2: _t->on_zdjecie_Button_clicked(); break;
        case 3: _t->on_nagraj_clicked(); break;
        case 4: _t->on_kamera_Button_clicked(); break;
        case 5: _t->on_videooff_clicked(); break;
        case 6: _t->on_film_Button_clicked(); break;
        case 7: _t->on_wykrywanie_Button_clicked(); break;
        case 8: _t->processFrameAndUpdateGUI(); break;
        case 9: _t->on_zdjecie_clicked(); break;
        case 10: _t->numberofframes(); break;
        case 11: _t->kamerka(); break;
        case 12: _t->svm_predict((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Dialog.data,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
