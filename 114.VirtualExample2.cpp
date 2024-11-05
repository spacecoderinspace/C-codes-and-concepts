#include<iostream>
using namespace std;
class BasicCar{
    public:
    virtual void start() {cout<<"Basic Car Started"<<endl;}
};
class AdvanceCar:public BasicCar{
    public:
    void start() {cout<<"Advanced Car Started"<<endl;}
};
int main(){
    BasicCar *p=new AdvanceCar();
    p->start();
}
/*
If we Add 'Virtual', It means existence of that class is virtual and not real.
Thats Generalisation
================================

This is nothing but Polymorphism (Run-Time Polymorphism)
i.e.
a). Using Virtual Function
b). Overriding Function
c). Base class Pointer
d). Derived class Object
*/
