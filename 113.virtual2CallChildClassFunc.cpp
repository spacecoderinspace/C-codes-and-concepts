#include <iostream>
using namespace std;

class base {
public:
    virtual void fun1() { cout << "Base fun1\n"; }
    virtual void fun2() { cout << "Base fun2\n"; }
    virtual void fun3() { cout << "Base fun3\n"; }
};

class derived : public base {
public:
    void fun1() { cout << "Derived fun1\n"; }
    void fun2() { cout << "Derived fun2\n"; }
    void fun3() { cout << "Derived fun3\n"; }
    void fun4() { cout << "Derived fun4\n"; }
    void fun5() { cout << "Derived fun5\n"; }
};

int main() {
    base *p = new derived();

    // Calls to functions in the base class
    p->fun1(); // Output: Derived fun1
    p->fun2(); // Output: Derived fun2
    p->fun3(); // Output: Derived fun3
    
    // p->fun4(); // Error: still can't call fun4 or fun5 as they are not part of base

    delete p;
    return 0;
}
