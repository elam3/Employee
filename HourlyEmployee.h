#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H
#include "Employee.h"
class HourlyEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyWage;
public:
    ~HourlyEmployee();
    HourlyEmployee(int empNum, string name, string addr, double hrWrk=0.1, double hrWage=15.59);
    double getHoursWorked();
    double getHourlyWage();
    double calcPay();
    void printCheck();
};
#endif
