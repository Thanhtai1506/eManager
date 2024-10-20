#include "EmployeeManager.h"
#include <QVariantList>

EmployeeManager::EmployeeManager(QObject *parent) : QObject(parent) {
    // Khởi tạo dữ liệu mẫu
    employees.append(Employee(1, "Nguyen Thanh Tai", "GPE.EDS"));
    employees.append(Employee(2, "Jane Smith", "GPE.EDS"));
}

void EmployeeManager::addEmployee(const QString &name, const QString &bu) {
    int newNo = employees.size() + 1; // Tăng số thứ tự tự động
    employees.append(Employee(newNo, name, bu));
    emit employeesUpdated();
}

void EmployeeManager::removeEmployee(int no) {
    for (int i = 0; i < employees.size(); ++i) {
        if (employees[i].getNo() == no) {
            employees.removeAt(i);
            emit employeesUpdated();
            break;
        }
    }
}

void EmployeeManager::editEmployee(int no, const QString &name, const QString &bu) {
    for (Employee &employee : employees) {
        if (employee.getNo() == no) {
            employee = Employee(no, name, bu); // Cập nhật thông tin
            emit employeesUpdated();
            break;
        }
    }
}

QList<Employee> EmployeeManager::getEmployees() const {
    return employees;
}


