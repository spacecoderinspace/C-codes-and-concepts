/*
In structure by default, Everything is "Public", while In Class everything is private.
Except this everything is same in Struct(i.e. Structure) and Class 
*/
#include<iostream>
using namespace std;
struct Demo{
    int x, y;
    void Display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    Demo d;
    d.x=10;
    d.y=20;
    d.Display();
}