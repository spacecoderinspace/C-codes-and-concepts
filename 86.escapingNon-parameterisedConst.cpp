/*
We can choose not to write Non-parameterised Constructor by Setting 'default value=0' for
parameterised constructor
*/
#include <iostream>
using namespace std;
class Rectangle{
    int length, breadth;
    public:
    /*Rectangle(){    //Non-Parameterised Constructor
    length=0;     we need not write Non-parameterised Constructor
    breadth=0;
    }*/
    Rectangle(int l=0, int b=0){    //Parameterised Constructor
        setLength(l);    //will work for both parameterised and non-parameterised constructor
        setBreadth(b);
    }
    Rectangle(Rectangle &Rect){ //Copy Constructor 
    /*Its used to create a new object as a copy of an existing object.
    It takes a reference to an object of same class as parameter.
    */
        length=Rect.length;
        breadth=Rect.breadth;
    }
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
    Rectangle r1; //or r1()  Non-Parameterised Constructor
    Rectangle r2(10,5); //Parametrised Constructor
    Rectangle r3(r2);   //Copy Constructor
    cout<<r1.getBreadth()<<endl;
    cout<<r1.getLength()<<endl;
    cout<<r2.getBreadth()<<endl;
    cout<<r3.getBreadth()<<endl;
    cout<<r2.getLength()<<endl;
    cout<<r3.getLength()<<endl;
}