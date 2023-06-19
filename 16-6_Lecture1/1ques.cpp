#include<iostream>
using namespace std;

class cal{
	public:
	void display(int a , int b){
		cout<<"div"<<a/b<<endl;
	}
	void display(int a , int b , int c){
		cout<<"multi"<<a*b*c<<endl;
	}
	void display(int a , int b , int c , int d){
		cout<<"sub"<<a-b-c-c-d<<endl;
	}
	void display(int a , int b , int c , int d , int e){
		cout<<""<<a+b+c+c+d+e<<endl;
	}
};

//class 
int main(){
	
	cal obj;
	obj.display(20,10);
	
	return 0;
}
