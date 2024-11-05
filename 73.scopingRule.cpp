#include<iostream>
using namespace std;
int x=101;
int main(){
    int x=20;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;  //:: is scope resolution operator, used to access global variable
}

/* 
cpp has block level scope, will always check nearest scope of x.
*/