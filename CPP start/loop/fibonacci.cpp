#include<iostream>
using namespace std;

int main(){
    int i, n ,first =0, second=1, sum;

    cout <<"enter the number for fibonacci";
    cin>>n;

    for(i=1; i<=n; i++){
        if(i==1){
            cout<<first <<" ,";
            continue;
        }
        if(i==2){
            cout<<second;
            continue;
        }

        sum=first+second;
        first=second;
        second=sum;

        cout<<" , "<<sum;
    }

    return 0;
}