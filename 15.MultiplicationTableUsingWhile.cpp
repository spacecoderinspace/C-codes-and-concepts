#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter the Number :";
    cin>>n;
    while (i<=10)
    {
        cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
        i++;        
    }
}