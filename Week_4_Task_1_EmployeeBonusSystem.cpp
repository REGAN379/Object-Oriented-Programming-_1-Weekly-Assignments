#include <iostream>
#include <string>
using namespace std;

int main() {
    string employeeName;
    double basicSalary, bonus, totalSalary;

    // Loop for 5 employees
    for (int i = 1; i <= 5; i++) {
        cout << "\nEnter details for Employee " << i << endl;

        cout << "Employee Name: ";
        cin >> employeeName;

        cout << "Basic Salary: ";
        cin >> basicSalary;

        // Calculate bonus
        bonus = 0.05 * basicSalary;

        // Calculate total salary
        totalSalary = basicSalary + bonus;

        // Display report
        cout << "\n--- Employee Report ---" << endl;
        cout << "Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}