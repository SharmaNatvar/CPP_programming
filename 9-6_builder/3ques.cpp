#include<iostream>

using namespace std;

class Hotel{
	private:
		int id,
			staff_size,
			room_size,
			establish_year;
		
		char name[30],
			 type[30],
			 address[100],
			 rating [30],
			 website[100];
		
	public:
	    void setter(int id){
	    	this -> id=id;
	    	
	    	cout<<"Enter the name hotel:";
	    	cin>>name;
	    	
	    	cout<<"Enter the type :";
	    	cin>>type;
	    	
	    	cout<<"Enter the size of staff :";
	    	cin>>staff_size;
	    	
	    	cout<<"Enter the size of room :";
	    	cin>>room_size;
	    	
	    	cout<<"Enter the establish year :";
	    	cin>>establish_year;
	    	
	    	cout<<"Enter the address of hotel:";
	    	cin>>address;
	    	
	    	cout<<"Enter the Ratings (3star,2star,5star..):";
	    	cin>>rating;
	    	
	    	cout<<"Enter the website of hotel:";
	    	cin>>website;
	    }
	    void getter(){
	    	cout<<endl<<"id :"<<id<<endl;
	    	
	    	cout<<"Hotel Name :"<<name<<endl;
	    	
	    	cout<<"Type :"<<type<<endl;
	    	
	    	cout<<"Staff size :"<<staff_size<<endl;
	    	
	    	cout<<"Room size :"<<room_size<<endl;
	    	
	    	cout<<"establish year :"<<establish_year<<endl;
	    	
	    	cout<<"Address :"<<address<<endl;
	    	
	    	cout<<"Ratings :"<<rating<<endl;
	    	
	    	cout<<"Website :"<<website<<endl;
		}
};
	    	
int main(){
	Hotel obj;
	
	obj.setter(203);
	obj.getter();
	
	return 0;
}
