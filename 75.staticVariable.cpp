/*
Static variable--> *Stays always in the memory(like a Global variable)
                   *accessible only by the member of its scope(like local variable)
Difference between Static & Global Variable
    * Global Variable can be accessed in any Function.
    * Static Variables are accessible only inside the function in which the are declared.
*/
#include<iostream>
using namespace std;
void fun(){
    static int v=0; //Even when fun() is gone it remains in memory as it is
    int a=5;        //while this is local variable and goes out of memory each time fun is gone
    v++;
    a++;
    cout<<a<<" "<<v<<endl;
}
int main(){
    fun();
    fun();
    fun();
    fun();
}