/*
The value of actual parameters are copied in formal parameters and if any changes are done in
formal parameters, it will not change the actual parameters.
*/
#include<iostream>
using namespace std;
void swap(int a, int b){   //formal parameters
    int temp;
    cout<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;  //here swapped
}
int main(){
    int x=19,y=88; //Actual parameters
    swap(x,y);
    cout<<x<<" "<<y; //Values are same and not swapped
}