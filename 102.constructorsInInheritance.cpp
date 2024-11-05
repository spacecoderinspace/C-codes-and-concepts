/*
when we create an object of derived class, first the parent/base class constructor and then the derived
or child class constructor is executed.

Q. Which constructor of parent class is executed ?
Always the default constructor of parent class is executed
*/
#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Default constructor of base class"<<endl;
    }
    base(int x){
        cout<<"parameterised constructor of base class"<<x<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"Default constructor of Derived class"<<endl;
    }
    derived(int a){
        cout<<"Parameterised constructor of Derived class"<<a<<endl;
    }
    derived(int x, int a):base(x) //special constructor, when we want to call parameterised constructor of
    {                                        //  parent class when object of child class executed
        cout<<"parameterised of derived"<<a<<endl;
    }                              
};
int main(){
    derived d1; //Default of Base, Default of derived
    derived d(10);   //Default of Base ,Parameterised of Derived 10
    derived d2(20,10); //Parameterised of Base 20, Parameterised of derived 10
}
//constructors are called from child to parent but executed from parent to child class