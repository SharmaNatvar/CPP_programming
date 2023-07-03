#include<iostream>
#include<string.h>

using namespace std;

class Message{
	private:
		char name[30];
	public:
		Message(char a[]){
			strcpy(name,a);
		}
	void print(){
		cout<<"Your Name :";
	}
	void print(char lastname[]){
		cout<<name<<" "<<lastname<<endl;
	}	
};
int main(){
	
	Message obj("krishna");
	
	obj.print();
	obj.print("sharma");
	
	return 0;
}

