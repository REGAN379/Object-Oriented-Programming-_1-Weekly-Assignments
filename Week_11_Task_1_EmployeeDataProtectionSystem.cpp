//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 11 Assignment:Encapsulation Task 1
//CODE:SPC 2204:OOP1

#include <iostream>
#include <string>
using namespace std;

class Employee{
	private:
		string employeeName;
		int employeeID;
		double basicSalary;
		double netSalary;
		
		public:
			void setEmployeeDetails(){
				cout<< "Enter employee name: ";
				getline(cin,employeeName);
				
				cout<<"Enter employee ID: ";
				cin>> employeeID;
				
				cout<< "Enter basic salary: ";
				cin>> basicSalary;;				
			}
			
			void calculateSalary(){
				netSalary = basicSalary + (0.10 * basicSalary);
			}
			
			void displayEmployeeDetails(){
				cout<<"\n--- Employee Details---"<<endl;
				cout<<"Employee Name: "<<employeeName <<endl;
				cout<<"Employee ID: "<<employeeID<<endl;
				cout<<"Basic Salary: "<<basicSalary<<endl;
				cout<<"Net Salary: "<<netSalary<<endl;
			}
};

int main(){
	Employee emp1;
	
	emp1.setEmployeeDetails();
	emp1.calculateSalary();
	emp1.displayEmployeeDetails();
	
	return 0;	
}