
#include <iostream>
using namespace std;

// Create Payment class
class Payment {

    public:

        // 1. Cash payment - one parameter
        void processPayment(int amount) {
            cout << "Cash Payment: " << amount << endl;
        }

        // 2. Card payment - two parameters
        void processPayment(double amount, double fee) {
            double finalAmount = amount + fee;

            cout << "Card Payment: " << finalAmount << endl;
        }

        // 3. Mobile payment - three parameters
        void processPayment(double amount, double fee, double discount) {
            double finalAmount = amount + fee - discount;

            cout << "Mobile Payment: " << finalAmount << endl;
        }
};

int main() {

    // Create an object of Payment class
    Payment p;

    // Demonstrate the three payment methods
    cout << "===== PAYMENT SYSTEM =====" << endl;

    p.processPayment(1000);

    p.processPayment(2000.0, 100.0);

    p.processPayment(3000.0, 50.0, 200.0);

    return 0;
}
