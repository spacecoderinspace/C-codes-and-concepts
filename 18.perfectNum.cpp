#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter N :";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0) sum+=i;
    }
    if(2*n==sum) cout<<"Its a perfect Number";
    else cout<<"Not a Perfect Number";
}