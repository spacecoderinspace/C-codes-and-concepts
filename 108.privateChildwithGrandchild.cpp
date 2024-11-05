#include <iostream>
using namespace std;

class Parent {
public:
    void publicMethod() {
        cout << "Public method in Parent" << endl;
    }
protected:
    void protectedMethod() {
        cout << "Protected method in Parent" << endl;
    }
private:
    void privateMethod() {
        cout << "Private method in Parent" << endl;
    }
};

class Child : private Parent {
public:
    void accessParentMethods() {
        publicMethod();       // Accessible here, but private to Child
        protectedMethod();    // Accessible here, but private to Child
        // privateMethod();   // Error: privateMethod is not accessible
    }
};

class Grandchild : public Child {
public:
    void tryAccessParentMethods() {
        // publicMethod();    // Error: publicMethod is private in Child
        // protectedMethod(); // Error: protectedMethod is private in Child
        accessParentMethods(); // This is allowed because it's public in Child
    }
};

int main() {
    Grandchild obj;
    obj.tryAccessParentMethods(); // Allowed, calls Child's method

    // The following would cause errors:
    // obj.publicMethod();       // Error: publicMethod is not accessible in Grandchild
    // obj.protectedMethod();    // Error: protectedMethod is not accessible in Grandchild
    // obj.accessParentMethods(); // Error: accessible only within Child and Grandchild

    return 0;
}
/*
Key Points :-

a). publicMethod() and protectedMethod() from Parent are private in Child because of private inheritance. 
    Child can use them internally, but they are not accessible to Grandchild.
b). Grandchild has no direct access to any of Parent’s members, even though it is two levels down in the
    inheritance chain. It can only use whatever is public or protected in Child.
c). Using private inheritance as an "implementation detail": Private inheritance here essentially hides 
    the Parent class from Grandchild, so Grandchild is not aware it’s indirectly inheriting from Parent.


When to Use This Hierarchical Setup
This kind of inheritance is useful when:

#You want to use a class internally without exposing it to further derived classes. 
For example, Child might need functionality from Parent but does not want Grandchild to access it directly.

#You want to treat Child as a standalone class that uses Parent's functionality but does not represent a 
true "is-a" relationship with Parent. This can help in cases where Parent provides useful utility functions 
or base functionality that should not be exposed down the hierarchy.

#Encapsulation: You might have a situation where Child adds functionality to Parent, but you want to 
encapsulate Parent entirely to avoid exposing its methods and properties to further subclasses like 
Grandchild.

*/