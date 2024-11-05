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
    Test(Test &t){  //Deep Copy Constructor
        a=t.a;
        p=new int[a]; //Creating array same as done in Test(int x)
    }
};
int main(){
    Test t1(5);
    Test t2(t1); 
}