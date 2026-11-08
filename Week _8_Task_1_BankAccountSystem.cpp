//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 8 Assignment:Constructors and Destructors
//CODE:SPC 2204:OOP1


#include <iostream>
using namespace std;

class BankAccount{
	private:
	string accountHolderName;
	int accountNo;
	float accountBalance;
	
	public:
		//Constructor
		BankAccount(string name, int number,double balance){
			accountHolderName = name;
			accountNo = number;
			accountBalance = balance;
			cout<<"Account successfully created"<< endl;
		}
	
	void displayAccount(){
		cout<< "Account Holder: "<<accountHolderName <<endl;
		cout<<"Account Number: "<<accountNo <<endl;
		cout<<"Account Balance: "<<accountBalance <<endl;
	}
	
	//Destructor
	~BankAccount(){
		cout<<"Account closed successfully" <<endl;
	}	
	
};

int main(){
	//Object of class BankAccount 
	BankAccount acc1("Regan Odwori",26688,10000);
	
	//Display account deatils
	acc1.displayAccount();
	
	return 0;
}