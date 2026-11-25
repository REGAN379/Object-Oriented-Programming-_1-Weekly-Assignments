#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    // Input initial account balance
    cout << "Enter account balance: ";
    cin >> balance;

    // Allow withdrawals while balance is available
    while (balance > 0) {
        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawal;

        // Check if withdrawal is greater than balance
        if (withdrawal > balance) {
            cout << "Insufficient balance!" << endl;
            break;
        }

        // Deduct withdrawal from balance
        balance = balance - withdrawal;

        // Display remaining balance
        cout << "Remaining Balance: " << balance << endl;

        // Stop if balance becomes zero
        if (balance == 0) {
            cout << "Account balance is zero. No more withdrawals allowed." << endl;
            break;
        }
    }

    return 0;
}