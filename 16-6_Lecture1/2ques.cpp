#include<iostream>
using namespace std;

class Cricket{
	public:
		void over(int a){
			cout <<"enter over : "<<endl;
//			cin>>b>>endl;
		}
};
class t20 : public Cricket{
	public:
		void getTotalOver(int a){
			cout<<"t20 over : "<<a<<endl;
		}
};

class test : public Cricket{
	public:
		void getTotalOver(int a){
			cout<<"test over : "<<a<<endl;
		}
};

int main(){
	t20 obj;
	obj.getTotalOver(20);
	
//	test obj;
//	obj.getTotalOver(90);
////	obj.over(8);
	
	
	return 0;
}
