#include <iostream>
#include <string>
using namespace std;

//Base Class
class Person{
	protected:
	string name;
	int age;
	
	public:
		Person(string n, int a){
			name = n;
			age = a;
		}
	
	void displayPerson(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	}	
};

//Derived class
class Student: public Person{
	private:
	string admission_number;
	string Class;
	
	public:
		Student(string n, int a, string ID, string c): Person(n,a){
			admission_number = ID;
			Class = c;
		}
	
	void displayStudent(){
		displayPerson();
		cout<<"admission Number: "<<admission_number<<endl;
		cout<<"Class: "<<Class<<endl;
	}
};

int main(){
	Student s1("REGAN", 21, "26595", "2E");
	s1.displayStudent();
	
	return 0;
};