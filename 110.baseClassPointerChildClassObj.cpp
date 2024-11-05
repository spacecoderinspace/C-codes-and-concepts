/*
Base class pointer pointing on Derived class object.{i.e. Pointer is of one class and object is of another
class.}

In this case, you can call only those functions which are present in base class and can't call the functions 
defined in Derived class, though the object is derived class object, while the pointer is base class.
*/
#include <iostream>
using namespace std;

class base {
public:
    void fun1() { cout << "Base fun1\n"; }
    void fun2() { cout << "Base fun2\n"; }
    void fun3() { cout << "Base fun3\n"; }
};

class derived : public base {
public:
    void fun4() { cout << "Derived fun4\n"; }
    void fun5() { cout << "Derived fun5\n"; }
};

int main() {
    base *p = new derived();

    // Calls to functions in the base class
    p->fun1(); // Output: Base fun1
    p->fun2(); // Output: Base fun2
    p->fun3(); // Output: Base fun3
    
    // p->fun4(); // Error: still can't call fun4 or fun5 as they are not part of base

    delete p;
    return 0;
}
