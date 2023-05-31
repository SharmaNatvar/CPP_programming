#include<iostream>
using namespace std;

int main(){
	
//	WAP to check given input is numeric or not.

	char a;
	
	cout <<"enter the number : ";
	cin >> a;
	
	if( a== 0 || a==9 ){
		cout << " number";
	}
	else{
		cout << "not";
	}
	
	return 0;
}
