
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age, score;

    // Enter student details
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    // Determine admission using nested if statements
    if (age >= 18) {

        if (score >= 50) {
            cout << "\nAdmission Status: Admitted" << endl;
        }
        else {
            cout << "\nAdmission Status: Not Admitted - Low Score" << endl;
        }

    }
    else {
        cout << "\nAdmission Status: Not Admitted - Underage" << endl;
    }

    return 0;
}
