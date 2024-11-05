#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 3 numbers";
    cin>>x>>y>>z;
    if(x>y && y>z) cout<<"Max is "<<x;
    else if(z>y) cout<<"Max is "<<z;
    else cout<<"Max is "<<y;
    return 0;
}