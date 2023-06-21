#include<iostream>

using namespace std;

class Mother{
	private:
	    char name[100];
		int age;	
	public:
	void set_value(){
	    cout<<"Enter the Mother Name :";
		cin>>name;
		
		cout<<"Enter the Mother Age :";
		cin>>age;
		
		cout<<"Mother Name :"<<name<<endl;
		cout<<"Mother Age :"<<age<<endl;
	}	
};
class Zebra : public Mother{
    public:
	    void get_valuez(){
	    	cout<<"Information Of Zebra "<<endl<<endl;
	    	
	   		set_value();
	   		
	   		cout<<"Name : Zebra "<<endl;
	   		cout<<"Age : 24 year "<<endl;
	   		cout<<"Place Of orgin : land"<<endl<<endl;
		}
};
class Dolphin : public Zebra{
	public:
		void get_value(){
			cout<<"Information Of Dolphin :"<<endl<<endl;
			
//	   		set_value();
	   		
	   		cout<<"Name : Dolphin "<<endl;
	   		cout<<"Age : 25 year "<<endl;
	   		cout<<"Place Of orgin : water"<<endl;
		}
};

int main(){
//	Zebra obj;
	Dolphin obj1;
	
//	obj.get_value();

//	obj1.set_value();
	obj1.get_valuez();
	obj1.get_value();
	
	
	return 0;
}
