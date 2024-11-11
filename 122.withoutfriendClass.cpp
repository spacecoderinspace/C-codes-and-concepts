
/*
#include<iostream>
using namespace std;
class my{
    private:
    int a =10;
};
class your{
    public:
    my m;
    void fun(){
      //cout<<m.a; cannot access, as can only access public members
    }
};

We want 'your' class to access the private members of 'my' class upon object {As these classes are
not inheriting}
          Its Having 'has-a' Relation, Its not 'is-a' Relation.
*/

#include <iostream>
using namespace std;

class my {
    private:
    int a = 10;  // Private member variable

    public:
    int getA() const {  // Public getter function to access private member 'a'
        return a;
    }
};

class your {
    public:
    my m;
    void fun() {
        //cout<<m.a; can't access, since its private
        cout << m.getA();  // Access 'a' through the getter function
    }
};

int main() {
    your y;
    y.fun();  // Output: 10
    // y.m.a;  // This will still cause an error, as 'a' is private
    return 0;
}
