#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "enter three value";
    cin>> a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a is grater"<< a;
        }
        else{
            cout<<"c is grater"<< c;
        }
    }
    else{
        if(b>c){
            cout<<"b is grater"<< b;
        }
        else{
            cout<<"c is grater"<< c;
        }
    }

    return 0;
}