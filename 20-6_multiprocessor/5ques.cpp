#include<iostream>

using namespace std;

class Add{
    private:
      int a;
	public:
	    void set(int p){
	  	a=p;
	    }	
	    void get(){
	  	cout<<a<<endl;
	    }
	    Add operator +(Add n){
	    	Add value;
	    	value.a=n.a+a;
	    	return value;
		}	  	
};
int main(){
	Add obj,obj1,obj2;
	
	obj.set(12);
	obj1.set(12);
	
	cout<<"Your entered value :";
	obj.get();
	
	obj2= obj+obj1;
	cout<<"After (+)operator overloading value :";
	obj2.get();
	
	
	return 0;
}
