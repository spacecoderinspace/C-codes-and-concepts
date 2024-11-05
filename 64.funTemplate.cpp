/*
we can write multiple functions together as a single function where difference is in data types.
it works for every datatype, even for an object of our class

Now this template function will work for any type that supports the > operator, 
such as int, double, float, and char.
*/
#include<iostream>
using namespace std;
template<class T>         //T is a Template class
T max1(T x, T y){          //Template function
    return (x > y) ? x : y;    
}
int main(){ 
    int c=max1(10,5);             //Both arguments should have same data type
    float d=max1(10.4f, 6.9f);
    cout<<c<<endl;
    cout<<d;
    return 0;
}