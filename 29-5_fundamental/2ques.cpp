#include<iostream>

using namespace std;

int main(){
	int i=2000;
	
	cout<<"leap years from 2000 to 3000 \n ";
    for(i=2000;i<=3000;i++){
    	if(i%4==0){
    		cout<<i;
    		cout<<"\n";
		}
	}
	
	
	return 0;
}
