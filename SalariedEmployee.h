#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H
#include "Employee.h"
class SalariedEmployee : public Employee {
private:
    double weeklyWage;
public:
    ~SalariedEmployee();
    SalariedEmployee(int empNum, string name, string addr, double weeklyWage=960.0);
    double getWeeklyWage();
    double calcPay();
    void printCheck();
};
#endif
