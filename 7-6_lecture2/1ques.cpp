#include<iostream>

using namespace std;

class data{
	private:
		int hotel_id,
			hotel_establish_year,
			hotel_staff_quantity,
			hotel_room_quantity;
		
		char 
			 hotel_type[50],
			 hotel_rating[100],
			 hotel_location[50];
		
		static char hotel_name[50];	 

	
	public:
		void setter(){
			cout<<"enter your Hotel id :";
			cin>>hotel_id;
			
//			cout<<"enter your Hotel Name :";
//			cin>>hotel_name;
			
			cout<<"enter your Hotel Type (like hotel or motel) :";
			cin>>hotel_type;
			
			cout<<"enter your Hotel Rating (like 1 Star, 2 Start, ..., 7 Star) :";
			cin>>hotel_rating;
	
			cout<<"enter your Hotel hotel_location (city name) :";
			cin>>hotel_location;
					
			cout<<"enter your Hotel establish Year :";
			cin>>hotel_establish_year;
			
			cout<<"enter your Hotel Staff Quantity :";
			cin>>hotel_staff_quantity;
			
			cout<<"enter your Hotel Room Quantity :";
			cin>>hotel_room_quantity;
		}
		void getter(){
			cout<<"hotel_id : " <<hotel_id <<endl;
			cout<<"hotel_name : " <<hotel_name << endl;
			cout<<"hotel_type : " <<hotel_type << endl;
			cout<<"hotel_rating : " <<hotel_rating << endl;
			cout<<"hotel_location : " <<hotel_location << endl;
			cout<<"hotel_establish_year : " <<hotel_establish_year << endl;
			cout<<"hotel_staff_quantity : " <<hotel_staff_quantity << endl;
			cout<<"hotel_room_quantity : " <<hotel_room_quantity << endl;

		}
};
char data :: hotel_name[]="fcgfc";

int main(){

	data obj;
	
	obj.setter();	

	obj.getter();	
	
	return 0;
}
