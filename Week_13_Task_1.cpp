#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string title;

    cout << "Enter Book Title: ";
    getline(cin, title);

    // Open file in append mode
    ofstream file("borrowed_books.txt", ios::app);

    if (file.is_open()) {
        file << title << endl;
        cout << "Book title successfully stored." << endl;
        file.close();
    } else {
        cout << "Error opening file." << endl;
    }

    return 0;
}