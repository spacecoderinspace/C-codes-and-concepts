/*
Constructors and Destructors are features of CPP, would enable  us to initialise the objects when
they are created and Destroy them when no longer needed.
Setter functions can not be used to initialise the Data member variables at the time of creation of
their objects.
A Constructor is used to initialise an object when its created, without a constructor you would need
to manually set up each object's data member, which is error-prone and inefficient.
                          Constructors ensure that data members have valid and meaningful values 
from the start, eliminating the risk of uninitialised variables containing Garbage Values.
*/
#include <bits/stdc++.h>
using namespace std;
class Rectangle{
    int length, breadth;
    public:
    void setLength(int l){
        if(l>0) length=l; //if condition is validating the  data
        else length=1;
    }
    void setBreadth(int b){  //mutators or setters
        if(b>0) breadth=b;
        else breadth=1;
    }
    int getLength(){       //accessors or getters
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    //Rectangle r(10,5);we want data members to be set at the time of constructions of that object.
    //r.setBreadth(10); No Need of this then 
    //r.setLength(5);
    return 0;
}
/*
We should have a function which should be automatically called, when the Object is constructed.
There are 4 Types of Constructors:
1). Default Constructor {Built-in Constructor or Compiler Provided Constructor}
2). Non-Parameterised Constructor
Non-Parameterised Constructor is quite same as Default Constructor
3). Parameterised Constructor 
4). Copy Constructor

*/