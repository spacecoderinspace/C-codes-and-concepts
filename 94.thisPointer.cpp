/*
This allows us to access the members of the current Object.
It represents a pointer to the Object that invokes a member function.
*/
#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(int length, int breadth) //when we write length and breadth properly
    {                           
        this->length=length; //using this to avoid Name Ambiguity b/w parameter & data member name
        this->breadth=breadth;
    }
    int getLength(){       
        return length;
    }
    int getBreadth(){     
        return breadth;
    }
};
int main(){
    Rectangle r(10,4);
    cout<<r.getBreadth()<<endl;
    cout<<r.getLength();
}