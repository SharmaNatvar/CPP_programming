#include<iostream>
using namespace std;

int main(){
    int n,reverseNum = 0, remainder;

    cout <<"enter your number";
    cin>>n;

    while (n!=0)
    {
        remainder = n%10;
        reverseNum = reverseNum*10+remainder;
        n/=10;
    }

    cout<<"re nv = "<<reverseNum;
    return 0;
    
}