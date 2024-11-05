#include<iostream>
using namespace std;
int main(){
    int n,r,m,rev=0;
    cout<<"Enter the number :";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<"Reverse of a number is: "<<rev;
}