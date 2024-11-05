/*
Acquiring the features of existing class into a new class.
*/
#include<iostream>
using namespace std;
class base{
    public:
    int x;
    void show(){
        cout<<x<<endl;
    }
};
class derived:public base{//Inherits Publicly and shows extension of a class
    public:
    int y;
    void display(){
        cout<<x<<" "<<y<<endl; //x is borrowed from base class
    }
};
int main(){
    base b;
    b.x=25;
    b.show();
    derived d;
    d.x=10;
    d.y=15;
    d.show();
    d.display();
}
/*
Every member of a class(Either function or data member) will be available to its child class 
unless if they are public.
*/