/*
writing a function once again is function overriding and for this prototype of function must be same.
*/
#include<iostream>
using namespace std;
class parent{
    public:
    void display(){
        cout<<"Display of parent"<<endl;
    }
};
class child: public parent{
    public:
    void display(){
        cout<<"Display of child"<<endl;
    }
    void display(int x){

        cout<<"Display of child";
    }
    /** This function has the same name as display() but has a different
     parameter (int x). This is function overloading, not overriding, because the parameter list
      is different. 
    the overloaded display(int x) function in child:

      *Will not override any function in parent, as parent has no display(int) function.
      
      *Is only accessible when you call c.display(10) or any integer value. 
      It cannot be called with p or without an argument, as parent has no knowledge of display(int).
    */
};
int main(){
    parent p;
    p.display();
    child c;
    c.display();
    c.parent::display(); /*
    This explicitly calls the display() function of parent from the child instance c. 
    It outputs "Display of parent".
    */
}