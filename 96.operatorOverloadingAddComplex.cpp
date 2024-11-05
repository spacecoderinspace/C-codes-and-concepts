/*
Operator overloading allows you to redefine how standard Operators (like +, -, *, ==, etc.)behave
for user-defined datatypes such as classes and structure.

In order to perform Operator Overloading 2 Important Things are:-
a). How to write function body
b). How to write function signature
*/
//Adding complex Numbers
#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    complex operator+(complex x){
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
 // Member function to print the complex number
    void print()  {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    complex c1(3, 7);
    complex c2(5, 4);
    complex c3;
    c3 = c1 + c2;  // Using operator overloading
    //as cout<<c3 wont work 
    c3.print();    // Print the result using the print() function
}
/*
Overloading the << operator in C++ is necessary when you want to print an object of a user-defined 
class using cout. The standard output stream cout doesn't know how to handle complex types or 
objects directly, so you need to teach it how to do so by defining an appropriate 
operator<< for your class.

Key Reasons to Overload <<:


By overloading <<, you can customize how the object should be printed, making the output format more
readable and meaningful. For example, when printing a complex number, you might want it to appear
in the format real + imgi.
Convenience:

Overloading << allows you to use cout seamlessly with objects, just like you do with primitive
 types (e.g., int, float). This makes the code more intuitive and easier to read.
Consistent with C++ Style:

Using cout with << maintains consistency with C++'s input/output style. It integrates object 
printing into the same syntax used for printing basic types.
How It Works:
The << operator is part of the ostream class, and overloading it requires a function that can
take an ostream reference and your custom object as parameters. For example:


friend ostream& operator<<(ostream& out, const complex& c) {
    out << c.real << " + " << c.img << "i";
    return out;
}
Without Overloading:
If you don't overload <<, the compiler doesn't know how to print the object. 
For example:

complex c1(3, 7);
cout << c1;  // Error: no match for 'operator<<'
This results in a compilation error because cout can't handle complex objects directly.

Alternative Approach (Not Recommended):
You could write a member function like print():

c1.print();  // Prints the object using a member function
However, this approach is less idiomatic in C++, as the standard way to output objects is to use 
the << operator, aligning with the use of cout for built-in types.

Summary:
Overloading the << operator improves code readability, maintains consistency with the C++ style,
and allows custom formatting for printing objects.
*/