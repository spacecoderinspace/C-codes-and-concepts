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
    Rectangle r1, r2;
    r1.length=10; //using dot operator we can access the member of a class
    r1.breadth=5;
    cout<<r1.area();  //similarly we can do for r2 as well.
}