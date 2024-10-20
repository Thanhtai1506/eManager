#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee {
public:
    Employee(int no, const QString &name, const QString &bu);
    int getNo() const;
    QString getName() const;
    QString getBusinessUnit() const;

private:
    int number;
    QString name;
    QString businessUnit;
};

#endif // EMPLOYEE_H
