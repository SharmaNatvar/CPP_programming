#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    //ok
    cout<<"enter the number of a : ";
    cin>>a;
    cout<<"enter the number of b : ";
    cin>>b;

    cout<<"before swapping"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    // temp=a;
    // a=b;
    // b=temp;


    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"after swapping"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}