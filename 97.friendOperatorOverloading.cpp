/*
There is one more method for Overloading an operator, using Friend Function.
Friend Function has to be written outside the class without using Scope Resolution.
               It will be treated as Independent function, It doesnot belong to class but a friend 
of class.{as we will not use Scope Resolution Operator.}
*/
#include<iostream>
using namespace std;

class complex {
    int real, img;
public:
    // Constructor to initialize real and img
    complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Friend function to overload the + operator
    friend complex operator+(complex c1, complex c2);

    // Member function to print complex number
    void print() const {
        cout << real << " + " << img << "i" << endl;
    }
};

// Definition of friend function for operator+
complex operator+(complex c1, complex c2) {
    complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

int main() {
    complex c1(3, 7);
    complex c2(5, 4);
    complex c3;
    c3 = c1 + c2;
    c3.print(); // Using the print() function to display the result
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