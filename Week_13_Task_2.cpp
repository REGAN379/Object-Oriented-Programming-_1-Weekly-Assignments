#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    Student s;

    ifstream file("results.dat", ios::binary);

    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    cout << "Student Records\n";
    cout << "--------------------\n";

    while (file.read((char*)&s, sizeof(s))) {
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.totalMarks << endl;
        cout << endl;
    }

    file.close();

    return 0;
}