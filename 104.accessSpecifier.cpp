/*
There are three Access Specifiers :-
a). Public
b). Private
c). Protected
===============================================================


# Public, Private, and Protected all are accessible in the same class only. (can modify any)

# In Derived class, Private is not accessible, Protected and Public are accessible. (i.e. can not modify 
private) and it means:-
1). public members of the base class become public (in public inheritance) or protected (in protected inheritance)
    in the derived class.
2). protected members remain protected in the derived class.
3). private members of the base class are not accessible directly by the derived class. 
    However, they can still be accessed indirectly through public or protected methods of the base class.

# Upon an object, you can access only public member, and not Private, and Protected Memebers. (i.e. Everything is available 
here also but it should not modify protected and private ) It means:-
1). True: When accessing members of a class using an object (e.g., object.member), only public members are 
    accessible. private and protected members are not accessible outside the class.
2). Clarification: Although private and protected members exist within an object and can be modified or
    accessed within the class's member functions or friend functions, they cannot be accessed or modified 
    directly from outside the class.


================================================================================

*/
#include<iostream>
using namespace std;
class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funBase(){
        a=10;
        b=20;
        c=30;
    }
};
class Derived: Base{
    public:
    void funDerived(){
        //a=1; cant do
        b=2;
        c=3;
    }
};
int main(){
    Base x;
    //x.a=15; cant access
    //x.b=1234; cant access
    x.c=90;
}