#include<iostream>
using namespace std;
int main(){
    int n,r,m,sum=0;
    cout<<"Enter the number :";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum+=r*r*r;     //Dont use pow(r,3)
    }
    if(sum==m)cout<<"Its an Armstrong Number";
    else cout<<"Not an Armstrong Number";
    return 0;
}