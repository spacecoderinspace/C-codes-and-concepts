/*
TYPES OF FUNCTIONS In Class
1). Constructor --> a). Rectangle() //Non-parameterised Constructor
                    b). Rectangle(int l, int b)  //Parameterised Constructor
                    c). Rectangle(Rectangle &r) //Copy Constructor or Deep Copy Constructor
2). Mutator --> Void setLength(int l)
                Void setBreadth(int b)
3). Accessor --> int getLength()
                 int getBreadth()
4). Facilitator -->int area() {These are Actual Functions useful for class}
                -->int perimeter()
5). Inspector or Enquiry -->int isSqaure()
6). Destructor --> ~Rectangle()
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
    Rectangle(Rectangle &Rect){ //Copy Constructor or Deep Copy Constructor
        length=Rect.length;
        breadth=Rect.breadth;
    }
    void setLength(int l){    //Mutators or setters
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
    int getBreadth(){     //accessors or getters
        return breadth;
    }
    int area(){            //Facilitators
        return length*breadth;
    }
    int perimeter(){      //Facilitators
        return 2*(length+breadth);
    }
    int isSquare(){       //Inspector or Enquiry function --> Returns Int or Boolean (True or False)
        if(length==breadth){
            cout<<"Its a Sqaure"<<endl;
            return 0;
        }
        else cout<<"Its not a Square"<<endl;
        return 1;
    }
    ~Rectangle(){
        cout<<"Object is Destroyed";
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
    int value=r3.isSquare();
    cout<<value;
}