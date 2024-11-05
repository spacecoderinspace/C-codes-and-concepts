#include <iostream>
using namespace std;
class Test{
    int a;
    int *p;
    public:
    Test(int x){
        a=x;
        p=new int [a];  //Dynamic memory allocation
    }
    Test(Test &t){  //Copy constructor
        a=t.a;
        p=t.p; //Instead of this we should create a new array of same size as done by object which 
        //it is trying to copy.
    }
};
int main(){
    Test t1(5);
    Test t2(t1); //Copy Constructor, its copying object t1 of class Test(int x), which is creating an 
    //array in heap.
}
/* SHALLOW COPY PROBLEM
If there is Dynamic Memory allocation done by an object, then the copy constructor may not create 
a new memory for it. It may be pointing on the same memory.

*/