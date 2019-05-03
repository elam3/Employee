#include "Employee.h"

Employee::~Employee() {}

Employee::Employee(int employeeNumber, string name, string address) {
    this->employeeNumber = employeeNumber;
    this->name = name;
    this->address = address;
}

int Employee::getEmployeeNumber() const {
    return employeeNumber;
}

string Employee::getName() const {
    return name;
}

string Employee::getAddress() const {
    return address;
}
