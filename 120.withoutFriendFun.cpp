/*
Friend Function is a Global Function(Outside of class function), which can access all the members of
a class upon object.
This is useful in operator overloading mostly.
*/
#include<iostream>
using namespace std;
class Test{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};
void fun(){
    Test t;
    //t.a=15; accessing these two will be possible using friend function
    //t.b=10;
    t.c=5;
    cout << "Public c: " << t.c << endl;
}
int main(){
    fun();
    return 0;
}