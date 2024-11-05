#include<iostream>
using namespace std;
int g=0; //Global variable
void fun(){
    int a=5; //local variable
    g=g+a;
    cout<<g<<endl;
}
int main(){
    int x=10;
    g=15;
    fun();
    g++;
    cout<<g;
}