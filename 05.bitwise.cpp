//These Operators are performed on the bits of the data, Not on the Numeric Data
#include<iostream>
using namespace std;
int main(){
    int x=11, y=5, z;
    z=x&y;   //Bitwise and
    cout<<z<<endl;
    z=x|y;        //Bitwise OR
    cout<<z<<endl;
    z=~y;         //Not
    cout<<z<<endl;
    z=y<<1;      //Left shift by 1 
    cout<<z<<endl;
}