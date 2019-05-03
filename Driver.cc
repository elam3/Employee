#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <iomanip>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 2;
    Employee* employees[NUM_EMPLOYEES];

    employees[0] = new HourlyEmployee(
            0,
            "bob",
            "123 fake st.",
            15.0,
            4.2
    );
    employees[1] = new SalariedEmployee(
            1,
            "joe",
            "321 null st.",
            960.0
    );

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        time_t now = time(0);
        char *current_time = ctime(&now);
        cout << "EMPLOYEE #:" << setfill('0') << setw(6) 
            << employees[i]->getEmployeeNumber() << "\t"
            << "Calculated Wage: $" << employees[i]->calcPay() << "\t"
            << current_time;
        employees[i]->printCheck();
    }

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        delete employees[i];
        employees[i] = nullptr;
    }
    return 0;
}
