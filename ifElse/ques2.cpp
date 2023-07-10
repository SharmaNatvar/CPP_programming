#include<iostream>
using namespace std;

int main(){
    int length, breath;

    cout<<"enter the length";
    cin>>length;

    cout<<"enter the breath";
    cin>>breath;

    if(length==breath){
        cout<<"it is square";
    }
    else{
        cout<<"not square";
    }
    return 0;
}