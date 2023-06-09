#include<iostream>

using namespace std;

class data{
	private:
//		int cafe_id,
//			cafe_establish_year,
//			cafe_staff_quantity;
		
		char cafe_name[100],
			 cafe_type[100],
			 cafe_rating[50],
			 cafe_location[100];

	
	public:
		
		data(){
			
			cout<<"enter your cafe name :";
			cin>>cafe_name;
			
			cout<<"enter your cafe type (like rooftop or normal) :";
			cin>>cafe_type;
			
			cout<<"enter your cafe rating (like 1 Star, 2 Start, ..., 5 Star) :";
			cin>>cafe_rating;
			
			cout<<"enter your cafe location (city name) :";
			cin>>cafe_location;
			
			cout<<"enter your cafe id : 1"<<endl;
			cout<<"enter your cafe establish year : 2019"<<endl;
			cout<<"enter your cafe staff quantity : 2"<<endl;
		}
			
//		void setter(){
//			cout<<"enter your cafe id :";
//			cin>>cafe_id;
			

//			cout<<"enter your cafe establish year :";
//			cin>>cafe_establish_year;
			
//			cout<<"enter your cafe staff quantity :";
//			cin>>cafe_staff_quantity;
//		}
		void getter(){
//			cout<<"cafe_id : " <<cafe_id <<endl;
			cout<<"cafe_name : " <<cafe_name <<endl;
			cout<<"cafe_type : " <<cafe_type << endl;
			cout<<"cafe_rating : " <<cafe_rating << endl;
			cout<<"cafe_location : " <<cafe_location << endl;
//			cout<<"cafe_establish_year : " <<cafe_establish_year << endl;
//			cout<<"cafe_staff_quantity : " <<cafe_staff_quantity << endl;
		}
};



int main(){
	
	data obj;
	
//	obj.setter();	
		
	obj.getter();
	

	return 0;
}
