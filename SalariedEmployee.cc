#include "SalariedEmployee.h"
#include <iomanip>

SalariedEmployee::~SalariedEmployee() {}

SalariedEmployee::SalariedEmployee(int employeeNumber, string name, string address, double weeklyWage) : Employee(employeeNumber, name, address) {
    this->weeklyWage = weeklyWage;
}

double SalariedEmployee::getWeeklyWage() {
    return weeklyWage;
}

double SalariedEmployee::calcPay() {
    return 4 * weeklyWage;
}

void SalariedEmployee::printCheck() {
    cout << fixed << setprecision(2)
        << "\t==================================================\n"
        << "\t " << name << endl
        << "\t " << address << endl
        << "\t Pay To The Order of: " << name << endl
        << endl
        << "\t Earnings: $" << calcPay() << endl
        << endl
        << "\t==================================================\n\n";
}
