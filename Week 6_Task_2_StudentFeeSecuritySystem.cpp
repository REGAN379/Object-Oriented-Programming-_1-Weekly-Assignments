//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 11 Assignment:Encapsulation Task 2
//CODE:SPC 2204:OOP1


#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		string studentName;
		int admissionNumber;
		double feeBalance;
		
		public:
			void inputStudentData(){
				cout<<"Enter student name: ";
				getline(cin, studentName);
				
				cout<<"Enter admission number: ";
				cin>>admissionNumber;
				
				cout<<"Enter fee balance: ";
				cin>>feeBalance;
			}
			
			void makePayment(){
				double amount;
				
				cout<<"Enter payment amount: ";
				cin>> amount;
				
				if(amount > 0 && amount <= feeBalance){
					feeBalance = feeBalance - amount;
					cout<<"Payment successful."<<endl;
				}
				else {
					cout<<"Invalid payment amount."<<endl;
				}
			}
			
			void displayStatus(){
				cout<<"\n---Student Fee Status---"<<endl;
				cout<<"Student Name: "<<studentName<<endl;
				cout<<"Admission Number: "<<admissionNumber<<endl;
				cout<<"Remaining Fee Balance: Ksh "<<feeBalance <<endl;
			}
};

int main(){
	Student s1;
	
	s1.inputStudentData();
    s1.makePayment();
    s1.displayStatus();
    
    return 0;
}