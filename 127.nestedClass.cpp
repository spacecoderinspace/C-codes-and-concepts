/*
Writing a class inside another class so, that its useful only within that class.
for reducing the complexity of a bigger class, we can write smaller class inside.

# Inner class can access the members of outer class only if they are static.
# Outer class can create the object of inner class.
# Using that object, outerclass can access all the members of Inner class.
# We can only access Public member of Inner class.
     We cannot access its Private or protected members.
*/

/*
1). Inner Class Access to Outer Class Members:
In C++, an inner (nested) class can access the static members of the outer class directly, 
but it cannot access non-static members unless it's provided an instance of the outer class.

2). Outer Class Access to Inner Class Members:
The outer class can create an instance of the inner class and use it to access the inner 
class's public members.
If any member of the inner class is private or protected, the outer class cannot 
access it directly (similar to typical access restrictions in C++).

3). Access Levels:
Public members of the inner class are accessible to the outer class, and other code, if the outer 
class provides access.
private or protected members of the inner class are not accessible to the outer class 
unless there is a friend declaration or other special permissions
*/
#include <iostream>
using namespace std;

class Outer {
public:
    int nonStaticMember = 10;
    static int staticMember;

    class Inner {
    public:
        int innerPublic = 100;
    private:
        int innerPrivate = 200;
    protected:
        int innerProtected = 300;
    public:
        // Inner class can access static member of outer class directly
        void displayOuterStaticMember() {
            cout << "Outer class static member: " << staticMember << endl;
        }
    };

    void accessInnerClass() {
        Inner innerObj;
        cout << "Inner class public member: " << innerObj.innerPublic << endl;

        // Following lines would cause errors
        // cout << innerObj.innerPrivate;   // ERROR: Cannot access private member
        // cout << innerObj.innerProtected; // ERROR: Cannot access protected member
    }
};

// Initialize static member of Outer class
int Outer::staticMember = 20;

int main() {
    Outer outerObj;

    // Access inner class public member through outer class
    outerObj.accessInnerClass();

    // Inner class accessing static member of outer class
    Outer::Inner innerObj;
    innerObj.displayOuterStaticMember();

    return 0;
}
/*
Explanation 
----------------
Inner Class Access to Outer Class: Inner class has a function displayOuterStaticMember() that
accesses Outer::staticMember, confirming it can directly access static members.

Outer Class Access to Inner Class: Outer class creates an object of Inner and accesses its 
innerPublic member. However, attempts to access innerPrivate and innerProtected will cause 
compilation errors
*/