#include<iostream>

using namespace std;

class Distances{
	private:
		float a;
	public:
	    void set(float n){
	    	a=n;
		}
		void get(){
			cout<<a<<endl;
		}
		Distances operator +(Distances n){
			Distances ans;
			
			ans.a=n.a+a;
			
			return ans;
		}	
};
int main(){
	Distances obj1,obj2,obj3;
	
	obj1.set(12.1);
	obj2.set(11.4);
	
	obj3=obj1+obj2;
	cout<<"Two Distances Add => ";
	obj3.get();
	
	return 0;
}
