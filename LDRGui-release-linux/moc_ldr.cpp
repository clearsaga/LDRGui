/****************************************************************************
** Meta object code from reading C++ file 'ldr.h'
**
** Created: Tue Jul 3 09:27:38 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LDRGui/ldr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ldr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LDR[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    4,    5,    4, 0x08,
      24,   19,    4,    4, 0x08,
      38,    4,    5,    4, 0x08,
      49,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LDR[] = {
    "LDR\0\0short\0parIn()\0data\0parOut(short)\0"
    "parCheck()\0update()\0"
};

void LDR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LDR *_t = static_cast<LDR *>(_o);
        switch (_id) {
        case 0: { short _r = _t->parIn();
            if (_a[0]) *reinterpret_cast< short*>(_a[0]) = _r; }  break;
        case 1: _t->parOut((*reinterpret_cast< short(*)>(_a[1]))); break;
        case 2: { short _r = _t->parCheck();
            if (_a[0]) *reinterpret_cast< short*>(_a[0]) = _r; }  break;
        case 3: _t->update(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LDR::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LDR::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LDR,
      qt_meta_data_LDR, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LDR::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LDR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LDR::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LDR))
        return static_cast<void*>(const_cast< LDR*>(this));
    return QObject::qt_metacast(_clname);
}

int LDR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
