
//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 1 Assignment
//CODE:SPC 2204:OOP1



#include <iostream>//cout, cin
using namespace std;

int main(){
	string Student_Name,test_results;
	float Theory_marks, Practical_test_marks;
	float Average_Score;
	
	cout<<"Enter Student Name: "<<endl;
	cin>>Student_Name;
	
	cout<<"Enter Theory_marks: "<<endl;
	cin>>Theory_marks;
	
	cout<<"Enter Practical Test Marks: "<<endl;
	cin>>Practical_test_marks;
	
	Average_Score=(Theory_marks + Practical_test_marks)/2;
	cout<<"DRIVING TEST RESULTS" <<endl;
	cout<<"Student Name: "<<Student_Name <<endl;
	cout<<"Theory Marks: "<< Theory_marks <<endl;
	cout<<"Practical marks: "<< Practical_test_marks <<endl;
	cout<<"Average Score: "<<Average_Score <<endl;
	
	if(Average_Score>=50){
		test_results = "PASSED";
	}
	else {
		test_results="FAILED";
	}
	cout<<"Test Results: " << test_results <<endl;
}