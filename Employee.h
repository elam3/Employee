#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    int employeeNumber;
    string name;
    string address;
public:
    virtual ~Employee();
    Employee(int empNum, string name, string addr);
    int getEmployeeNumber() const;
    string getName() const;
    string getAddress() const;
    virtual double calcPay() = 0;
    virtual void printCheck() = 0;
};
#endif
