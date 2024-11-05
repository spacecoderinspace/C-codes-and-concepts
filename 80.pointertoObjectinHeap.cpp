#include<iostream>
using namespace std;
class Rectangle{
    public:
    int breadth, length;
    int area(){
        return length*breadth;
    }
};
int main(){
    Rectangle r;
    Rectangle *p;
    p=&r;
    //r.length=10;
    p->length=10; //similar to r.length=10,Since p points to r,both statements achieve the same thing.
    p->breadth=5;
    cout<<p->area();
}
/*
1). as we can access member using dot operator with variable name
2). Similarly, '->' is used to access members of an object using a pointer on that object.
3). the arrow '->' is dereferencing operator instead of using '*', we can use this arrow for 
    accessing data members or functions.
4). Dereferencing operator(*) is used to access or modify the value pointed to by a pointer.
*/