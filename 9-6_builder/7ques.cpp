#include<iostream>

using namespace std;

class Bank{
	private:
		char name[100];
	public:
		Bank(int bal){
			cout<<"Enter your Name :";
			cin>>name;
			cout<<endl;
			cout<<"your name :"<<name<<endl;
			cout<<"Your bank Balance is :"<<bal;
		}
};

int main(){
	
	Bank obj(1000);
	
	return 0;
}
