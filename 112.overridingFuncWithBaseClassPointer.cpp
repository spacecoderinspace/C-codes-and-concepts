/*
Using a parent class pointer, when you call an overrided function, then parent class function 
will be called.
*/
#include<iostream>
using namespace std;
class base{
    public:
    void fun(){
        cout<<"fun of base";
    }
};
class derived: public base{
    public:
    void fun(){
        cout<<"fun of derived";
    }
};
int main(){
    base *p=new derived();
    p->fun();
}
/*
For this, we have 'virtual' keyword{If we want child class funxtion to be called instead of base 
class function}
  So, Inside the base or parent class you make the function{ which has to be overrided and then
called by parent class pointer on the object of child class} as Virtual, and then the function
of child class(which is overrided in child class) will be called.
*/