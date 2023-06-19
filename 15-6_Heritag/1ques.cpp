#include<iostream>

using namespace std;

class Mother{
	public:
	void display(){
		cout<<"Name : mother "<<endl;
		cout<<"Age : 76 "<<endl;
	}
};
class Daughter : public Mother{
	public:
	void display(){
		
		cout<<"Name : daugther "<<endl;
		cout<<"Age : 26 ";
	}
};
int main(){
	Daughter obj;
	
	obj.Mother::display();
	
	obj.display();
	
	
	return 0;
}

