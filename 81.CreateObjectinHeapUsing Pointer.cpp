/*
rectangle r; // Object is created in stack
rectangle *p=New rectangle() or rectangle *p=New rectangle //object is created in Heap
*/


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
    Rectangle *p;
    p=new Rectangle;
    Rectangle *q=new Rectangle();
    p->length=10;
    p->breadth=10;
    cout<<p->area()<<endl;
    cout<<q->breadth; //breadth and length would be initialized to 0.
}
/*
Rectangle *q = new Rectangle;
This syntax creates an object without value-initialization.
For a class with no explicit constructor (like your Rectangle class), it leaves primitive data members (int breadth, length;) uninitialized.
In your example, breadth and length would contain garbage values until explicitly assigned.


Rectangle *q = new Rectangle();
This syntax creates an object with value-initialization.
When used with a class that has no constructor, it initializes the primitive data members to their default values (e.g., 0 for int).
So breadth and length would be initialized to 0.
*/