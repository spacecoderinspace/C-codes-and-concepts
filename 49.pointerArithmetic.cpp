#include<iostream>
using namespace std;
int main(){
    int a[6]={2,6,4,8,20,10};
    int *p=a, *q=&a[4],d;    //total there are 5 Operations 
    cout<<*p<<endl;
    p++; //pointer will move to the next location rn its a[0] to a[1]
    cout<<*p<<endl;
    p--; //pointer will move backward
    cout<<*p<<endl;
    p+=2;  //move pointer forward by 2 elements
    cout<<*p<<endl;
    p-=2;  //move pointer backward by 2 elements
    cout<<*p<<endl;
    d=q-p;      //distance between 2 Pointers or Number of elements b/w them
    cout<<d<<endl;
    return 0;
}