#include<iostream>
using namespace std;

int main(){
    // print "hello" with this symbol""
    cout<<"\"hello bro\""<<endl;

    // add two number with out using + opertar
    // int a,b,sum;
    // cout << "enter two number ";
    // cin>> a >>b;
    // sum=a-(-b);
    // cout<< "sum of number : " <<sum;

    // divide number without using / opertar
    // int a ,sum;
    // cout << "enter number ";
    // cin>> a;
    // sum = a>>2;
    // cout <<"answer : "<<sum;

    // swap a number without using there varible

    int a,b;
    cout <<"enter two number";
    cin>>a>>b;

    cout<<"before swap"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"after swap "<<endl<<"a = "<<a<<endl<<"b = "<<b;


    return 0;
}