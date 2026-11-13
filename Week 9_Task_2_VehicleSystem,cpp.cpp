#include <iostream>
#include <string>
using namespace std;

//Base class
class Vehicle{
	protected:
		string brand;
		int year_of_manufacture;
		
		public:
			Vehicle(string b, int y){
				brand = b;
				year_of_manufacture = y;
				
				}	
				void displayVehicle(){
					cout<<"Brand: "<<brand<<endl;
					cout<<"Year Of Manufacture: "<<year_of_manufacture<<endl;
				}			
};

//derived class
class Car: public Vehicle{
	private:
	int numberOfDoors;
	string engine_capacity;
	
	public:
		Car(string b, int y, int n, string e):Vehicle(b,y){
			numberOfDoors = n;
			engine_capacity = e;
		}
	void displayCar(){
		displayVehicle();
		cout<<"Number of doors: "<<numberOfDoors<<endl;
		cout<<"Engine Capacity: "<<engine_capacity<<endl;
	}
};

int main(){
	 
	 Car car1("Toyota",1905,5,"2700cc");
	 car1.displayCar();
	 
	 return 0;
};