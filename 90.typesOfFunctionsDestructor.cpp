/*
Explicit Call of Destructor (Not Recommended):
Directly calling the destructor is typically not recommended because the destructor will also be 
called again when the object goes out of scope, leading to undefined behavior. 
However, for educational purposes, you can do:

r3.~Rectangle(); // Explicitly call destructor (useful for educational purposes only)
Remember, this is generally not needed or recommended as C++ handles the destruction of objects 
automatically.
*/
#include <iostream>
using namespace std;
class Rectangle{
    int length, breadth;
    public:
    Rectangle(){    //Non-Parameterised Constructor
    length=1;
    breadth=1;
    }
    Rectangle(int l, int b){    //Parameterised Constructor
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &Rect){ //Copy Constructor or Deep Copy Constructor
        length=Rect.length;
        breadth=Rect.breadth;
    }
    void setLength(int l){    //Mutators or setters
        if(l>0) length=l; //if condition is validating the  data
        else length=1;
    }
    void setBreadth(int b){  //mutators or setters
        if(b>0) breadth=b;
        else breadth=1;
    }
    int getLength(){       //accessors or getters
        return length;
    }
    int getBreadth(){     //accessors or getters
        return breadth;
    }
    int area(){            //Facilitators
        return length*breadth;
    }
    int perimeter(){      //Facilitators
        return 2*(length+breadth);
    }
    int isSquare(){       //Inspector or Enquiry function --> Returns Int or Boolean (True or False)
        if(length==breadth){
            cout<<"Its a Sqaure"<<endl;
            return 0;
        }
        else cout<<"Its not a Square"<<endl;
        return 1;
    }
    ~Rectangle(){
        cout<<"Object is Destroyed"<<endl;
    }
};
int main() {
    Rectangle r1; // Non-Parameterised Constructor
    Rectangle r2(10, 5); // Parameterised Constructor

    {
        Rectangle r3(r2); // Copy Constructor
        cout << r1.getBreadth() << endl;
        cout << r1.getLength() << endl;
        cout << r2.getBreadth() << endl;
        cout << r3.getBreadth() << endl;
        cout << r2.getLength() << endl;
        cout << r3.getLength() << endl;
        int value = r3.isSquare();
        cout << value << endl;
    } // r3 goes out of scope here and its destructor is called
    return 0;
/*When the program reaches the end of the main function, the destructors for r3, r2, and r1 
are called in reverse order of their creation. This is the normal behavior in C++:

The destructor for r3 is called first.
The destructor for r2 is called second.
The destructor for r1 is called last.
Since each Rectangle destructor prints Object is Destroyed, you see this message three times, 
once for each object.
*/ 
}