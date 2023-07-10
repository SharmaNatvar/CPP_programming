#include<iostream>
using namespace std;
int main(){

    int a,b,sum;
    char chart;
    
    cout<<"enter your value";
    cin>>a>>b>>chart;

    if(chart == '+'){
        sum = a+b;
        cout<<" your add sum"<<sum;
    }

    else if(chart == '-'){
        sum = a-b;
        cout<<" your sub sum"<<sum;
    }
    else if(chart == '*'){
        sum = a*b;
        cout<<" your multi sum"<<sum;
    }
    else if(chart == '/'){
        sum = a/b;
        cout<<" your div sum"<<sum;
    }
    else{
        cout<<"invalid input";
    }

    return 0;
}