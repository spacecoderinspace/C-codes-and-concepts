/*
If a class is having a pure vitual function, then that class is called as Abstract class.

a).We can not create object of abstract class.
b).We can create pointer of Abstract class.
i.e.
Abstract class can not be instantiated, we can not have the objects.
But we can have pointer to achieve Polymorphism.
*/
#include<iostream>
using namespace std;
class base{
    public:
    void fun1(){
        cout<<"base fun1"<<endl;
    }
    virtual void fun2()=0; //Pure Virtual Function and hence its an abstract class
};
class derived:public base{
    public:
    void fun2(){
        cout<<"derived fun 2";
    }
};
int main(){
    //Base b; Not allowed
    base *p= new derived();
    p-> fun1();
    p->fun2();
}