#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class MedicalStaff {
protected:
    string staffName;
    int staffID;

public:
    // Constructor
    MedicalStaff(string name, int id) {
        staffName = name;
        staffID = id;
    }

    // Pure Virtual Function
    virtual void calculateSalary() = 0;

    // Non-Virtual Function
    void displayDetails() {
        cout << "Staff Name: " << staffName << endl;
        cout << "Staff ID: " << staffID << endl;
    }
};

// Derived Class Doctor
class Doctor : public MedicalStaff {
private:
    double basicSalary, allowance;

public:
    Doctor(string name, int id, double salary, double allow)
        : MedicalStaff(name, id) {
        basicSalary = salary;
        allowance = allow;
    }

    void calculateSalary() {
        double totalSalary = basicSalary + allowance;
        cout << "Doctor Salary: " << totalSalary << endl;
    }
};

// Derived Class Nurse
class Nurse : public MedicalStaff {
private:
    double basicSalary, overtimePay;

public:
    Nurse(string name, int id, double salary, double overtime)
        : MedicalStaff(name, id) {
        basicSalary = salary;
        overtimePay = overtime;
    }

    void calculateSalary() {
        double totalSalary = basicSalary + overtimePay;
        cout << "Nurse Salary: " << totalSalary << endl;
    }
};

int main() {
    // Create objects
    Doctor doctor("John", 101, 80000, 15000);
    Nurse nurse("Mary", 202, 50000, 5000);

    // Base class pointer
    MedicalStaff *staffPtr;

    // Doctor
    staffPtr = &doctor;
    staffPtr->displayDetails();
    staffPtr->calculateSalary();

    cout << endl;

    // Nurse
    staffPtr = &nurse;
    staffPtr->displayDetails();
    staffPtr->calculateSalary();

    return 0;
}