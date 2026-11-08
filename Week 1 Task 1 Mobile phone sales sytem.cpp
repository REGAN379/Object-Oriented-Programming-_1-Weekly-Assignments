//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 1 Assignment
//CODE:SPC 2204:OOP1


#include <iostream> //cout,cin
using namespace std;

int main (){
	string Customer_name;
	string Model;
	int Quantity;
	float Price;
	int TotalSalesAmount;
	
	cout <<"Enter your name: " <<endl;
	cin>>Customer_name;
	
	cout<<"Enter Phone Model: "<<endl;
	cin>>Model;
	
	cout<<"Enter quantity purchased: " <<endl;
	cin>>Quantity;
	
	cout<<"Enter Phone's price: "<<endl;
	cin>>Price;
	
	TotalSalesAmount=Quantity*Price;
	cout<<"\n";
	
	cout<<"SALES RECIEPT" <<endl;
	cout<<"==============" <<endl;
	cout<<"Customer Name: "<<Customer_name <<endl;
	cout<<"Phone Model: "<<Model<<endl;
	cout<<"Quantity purchased: " <<Quantity<<endl;
	cout<<"Price Per Phone: "<<Price<<endl;
	cout<<"=============="<<endl;
	cout<<"TOTAL SALES: "<<TotalSalesAmount<<endl;
}