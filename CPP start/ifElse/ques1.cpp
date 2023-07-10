#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"enter your buget to provide you best trip for your weekend : ";
    cin>>amount;

    if(amount>=500000){
        cout<<"we have internationl trip plan for you";
    }
    else if(amount>=100000 && amount<=500000){
        cout<<"we have nationl trip plan for you";
    }
    else if(amount>=10000 && amount<=100000){
        cout<<"we have state trip plan for you";
    }
    else if(amount>=1000 && amount<=10000){
        cout<<"we have city trip plan for you";
    }
    else{
        cout<<"bhai bhar ja kar kya karga ghar par enjoy kar";
    }

    return 0;
}