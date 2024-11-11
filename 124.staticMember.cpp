/*
Static DataMembers (Variables) of a class belongs to a class, doesnot belong to an object, and 
all the objects can share it.
When you have static variable inside a class you must declare it outside again (using scope 
resolution, when we want that variable to be used only with the class)
Otherwise, it will be a global variable(as declared outside class) 

if we make static variable private then we will need function otherwise directly we can access.
Its like Global Variable, you are making it accessible only to the objects of the class i.e.  Static
variable
*/
#include<iostream>
using namespace std;
class test{
    private:
    int a,b;
    public:
    static int count;
    test(){
        a=10;
        b=10;
        count++;
    }
};
int test::count=0;
main(){
    test t1;
    test t2;
    cout<<t1.count;
    cout<<t2.count;
    cout<<test::count; //we can access static data member using objects and classname
}