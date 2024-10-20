#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include <QObject>
#include <QList>
#include "Employee.h"
class EmployeeManager : public QObject {
    Q_OBJECT

public:
    explicit EmployeeManager(QObject *parent = nullptr);

    // Sử dụng Q_INVOKABLE để các phương thức này có thể được gọi từ QML
    Q_INVOKABLE void addEmployee(const QString &name, const QString &bu);
    Q_INVOKABLE void removeEmployee(int no);
    Q_INVOKABLE void editEmployee(int no, const QString &name, const QString &bu);
    Q_INVOKABLE QList<Employee> getEmployees() const;

signals:
    void employeesUpdated();

private:
    QList<Employee> employees;
};

#endif // EMPLOYEEMANAGER_H
