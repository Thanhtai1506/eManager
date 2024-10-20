#include "Employee.h"

Employee::Employee(int no, const QString &name, const QString &bu)
    : number(no), name(name), businessUnit(bu) {}

int Employee::getNo() const { return number; }
QString Employee::getName() const { return name; }
QString Employee::getBusinessUnit() const { return businessUnit; }
