#include<iostream>
using namespace std;
int g=5;
void fun(){
    int g=10;  //compiler will look for declaration of variable in the nearest scope
    g++;      //and increment local variable g. i.e.{g is local variable here for fun()}
    {
        int g=0;
        g++;
        cout<<g<<" ";  //this g=0 belongs to this block only
    }
    cout<<g<<endl;
}
int main(){
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
}