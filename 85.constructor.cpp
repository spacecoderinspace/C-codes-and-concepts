/*
1). A constructor is a 'Special' member function whose task is to initialise the objects of its class.
2). Its Special because its name is same as Class name, ad it don't have any return type.
3). The Constructor is invoked whenever an object of its associated class is created.
           It is called Constructor because it constructs the values of Data Members of class.
*/
#include <iostream>
using namespace std;
class Rectangle{
    int length, breadth;
    public:
    Rectangle(){    //Non-Parameterised Constructor
    length=1;
    breadth=1;
    }
    Rectangle(int l, int b){    //Parameterised Constructor
        setLength(l);
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