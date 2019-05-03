#include "HourlyEmployee.h"
#include <iomanip>

HourlyEmployee::~HourlyEmployee() {}

HourlyEmployee::HourlyEmployee(int employeeNumber, string name, string address, double hoursWorked, double hourlyWage) : Employee(employeeNumber, name, address) {
    this->hoursWorked = hoursWorked;
    this->hourlyWage = hourlyWage;
}

double HourlyEmployee::getHoursWorked() {
    return hoursWorked;
}

double HourlyEmployee::getHourlyWage() {
    return hourlyWage;
}

double HourlyEmployee::calcPay() {
    return hoursWorked * hourlyWage;
}

void HourlyEmployee::printCheck() {
    cout << fixed << setprecision(2)
        << "\t==================================================\n"
        << "\t  " << name << endl
        << "\t  Address: " << address << endl
        << "\t  Pay To The Order of: " << name << endl
        << endl
        << "\t  Amount: $" << calcPay() << endl
        << "\t==================================================\n"
        << "\t  EARNINGS" << endl
        << "\t--------------------------------------------------\n"
        << "\t  Rate: \t$" << getHourlyWage() << "/Hr" << endl
        << "\t  Hours: \t" << getHoursWorked() << "Hrs" << endl
        << "\t  This Period: \t$" << calcPay() << endl
        << "\t  Gross Pay: \t$" << calcPay() << endl
        << "\t==================================================\n\n";
}
