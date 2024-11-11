/* 
To access private member of a class from another class{which is not inheriting} upon an object then
we have to declare this 'your class' as a friend inside this 'my' class in order to access all
(Private, Protected, Public) members of the 'my' class.
*/
#include <iostream>
using namespace std;

class your;  // Forward declaration of class 'your'

class my {
    private:
    int a = 10;
    friend class your;  // Corrected friend declaration
};

class your {
    public:
    my m;
    void fun() {
        cout << m.a;
    }
};

int main() {
    your y;
    y.fun();  // Output: 10
    return 0;
}