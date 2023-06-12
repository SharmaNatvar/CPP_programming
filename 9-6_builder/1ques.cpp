#include<iostream>

using namespace std;

class data{
	private:
		int id,
			role,
			salary;
		
		char name[50],
			 experience[50],
			 address[100],
			 email[30],
			 contact[100];
	
	public:
		void setter(){
			cout<<"enter your id :";
			cin>>id;
			
			cout<<"enter your name :";
			cin>>name;
			
			cout<<"enter your age :";
			cin>>role;
			
			cout<<"enter your salary :";
			cin>>salary;
			
			cout<<"enter your experience :";
			cin>>experience;
			
			cout<<"enter your address :";
			cin>>address;
			
			cout<<"enter your email :";
			cin>>email;
		
			cout<<"enter your email :";
			cin>>email;
		}
		void getter(){
			cout<<"id : " <<id <<endl;
			cout<<"name : " <<name << endl;
			cout<<"role : " <<role << endl;
			cout<<"salary : " <<salary << endl;
			cout<<"experience : " <<experience << endl;
			cout<<"address : " <<address << endl;
			cout<<"email : " <<email << endl;
			cout<<"contact : " <<contact << endl;
		}
};

int main(){
	int i;
	
	data obj;
	
	for(i=0; i<=4; i++){
		obj.setter();	
	}

	for(i=0; i<=4; i++){
		obj.getter();
	}	
	
	
	return 0;
}
