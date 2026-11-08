#include <iostream>
using namespace std;

class RoomBooking{
	private:
		string guestName;
		int roomNumber;
		int noOfDaysBooked;
		
		public:
			//constructor
			RoomBooking(string name,int number, int days){
				guestName = name;
				roomNumber = number;
				noOfDaysBooked = days;	
				
				cout<<"Room booking confirmed"<<endl;
			}
			
			void displayBooking(){
				cout<<"Guest Name: "<<guestName<<endl;
				cout<<"Room Number: "<<roomNumber<<endl;
				cout<<"Number of Days Booked: "<<noOfDaysBooked<<endl;
			}
			
			//Destructor
			~RoomBooking(){
				cout<<"Booking ended,room released"<<endl;
			}
};

int main(){
	//Object of the class Roomooking
   RoomBooking room1("Regan", 130, 30);
   
   //Display booking details
   room1.displayBooking();
   
   return 0;
}