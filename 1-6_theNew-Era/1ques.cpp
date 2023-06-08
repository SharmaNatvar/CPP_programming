#include<iostream>
#include<string.h>
//1. WAP to create a class in which Read and Print House details along with Room details.

using namespace std;

class Home{
	public:
	
	int homeNumber;
	char homeName[10];
	int roomNumber;
};

int main(){
	
	Home obj;
	
	strcpy(obj.homeName , "hay");
	cout<<obj.homeName;
	
	obj.homeNumber=1;
	cout<<obj.homeNumber;
	

	
	obj.roomNumber=2;
	cout<<obj.roomNumber;
	
	return 0;
}
