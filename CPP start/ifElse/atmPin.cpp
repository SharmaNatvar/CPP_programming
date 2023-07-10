#include<iostream>

using namespace std;

int main(){

    int atm;

    cout<<" enter the atm pin"<<endl;
    cin>>atm;

    if(atm==1234){
        cout<<"you can check your balance";
    }
    else{
        cout<<"incorrect password"<<endl;
        cout<<"try agin";
    }


    return 0;
}