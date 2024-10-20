/****************************************************************************
** Meta object code from reading C++ file 'employeemanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../employeemanager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employeemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSEmployeeManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEmployeeManagerENDCLASS = QtMocHelpers::stringData(
    "EmployeeManager",
    "employeesUpdated",
    "",
    "addEmployee",
    "name",
    "bu",
    "removeEmployee",
    "no",
    "editEmployee",
    "getEmployees",
    "QList<Employee>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEmployeeManagerENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[16];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[5];
    char stringdata5[3];
    char stringdata6[15];
    char stringdata7[3];
    char stringdata8[13];
    char stringdata9[13];
    char stringdata10[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEmployeeManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEmployeeManagerENDCLASS_t qt_meta_stringdata_CLASSEmployeeManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "EmployeeManager"
        QT_MOC_LITERAL(16, 16),  // "employeesUpdated"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 11),  // "addEmployee"
        QT_MOC_LITERAL(46, 4),  // "name"
        QT_MOC_LITERAL(51, 2),  // "bu"
        QT_MOC_LITERAL(54, 14),  // "removeEmployee"
        QT_MOC_LITERAL(69, 2),  // "no"
        QT_MOC_LITERAL(72, 12),  // "editEmployee"
        QT_MOC_LITERAL(85, 12),  // "getEmployees"
        QT_MOC_LITERAL(98, 15)   // "QList<Employee>"
    },
    "EmployeeManager",
    "employeesUpdated",
    "",
    "addEmployee",
    "name",
    "bu",
    "removeEmployee",
    "no",
    "editEmployee",
    "getEmployees",
    "QList<Employee>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEmployeeManagerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   45,    2, 0x02,    2 /* Public */,
       6,    1,   50,    2, 0x02,    5 /* Public */,
       8,    3,   53,    2, 0x02,    7 /* Public */,
       9,    0,   60,    2, 0x102,   11 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    7,    4,    5,
    0x80000000 | 10,

       0        // eod
};

Q_CONSTINIT const QMetaObject EmployeeManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSEmployeeManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEmployeeManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEmployeeManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EmployeeManager, std::true_type>,
        // method 'employeesUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addEmployee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'removeEmployee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'editEmployee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getEmployees'
        QtPrivate::TypeAndForceComplete<QList<Employee>, std::false_type>
    >,
    nullptr
} };

void EmployeeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmployeeManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->employeesUpdated(); break;
        case 1: _t->addEmployee((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->removeEmployee((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->editEmployee((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: { QList<Employee> _r = _t->getEmployees();
            if (_a[0]) *reinterpret_cast< QList<Employee>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EmployeeManager::*)();
            if (_t _q_method = &EmployeeManager::employeesUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *EmployeeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmployeeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEmployeeManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EmployeeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EmployeeManager::employeesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
