/*
Data hiding is a fundamental concept in object-oriented programming (OOP) that involves 
restricting direct access to an object's internal state. This is achieved by declaring 
data members as private, limiting their visibility to within the class itself.

Only functions should be made public, data should be private,otherwise It may lead to mishandling 
of data.
*/
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r;
    r.length=10;
    r.breadth=-5; //mishandled so data should not be public
    cout<<r.area(); 
}