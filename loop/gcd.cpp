#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"enter two number : ";
    cin>>a>>b;

    cout <<"your gcd number :";

    while(a!=b){
        if(a>b){
            a-=b;
        }
        else{
            b-=a;
        }
    }

    cout<<a;

    return 0;
}