/*
Static member fucntion can access only static data members of a class{They cannot access 
Non-static data member.}
Static member function also belongs to a class.
Static members (Static member fucntions & static data members) can be accessed by using object &
class as well.

*/
#include<iostream>
using namespace std;
class Test{
    int a,b; 
    public:
    static int count;
    Test(){
        a=10;
        b=10;
        count++;
    }
    static int getCount(){
       // a++; cant access
        return count; //can only access static members
    }
};
int Test::count=0;
int main(){
    cout<<Test::getCount();
    Test t1;
    cout<<t1.getCount();
}