/*
Actually Class is written like this only:-
*We don't write the function body inside(Do not Eleborate them). 
*Just write the Header or Prototype of Function.
*Functions are Eleborated outside the Class by Using Scope Resolution Operator.
==================================================================================
Its recommended to write function body outisde using scope resolution operator
As it may be compilcated when complex logic using loops is written for In-Line Function
{In-Line Function is a Function which is written Inside Class} and when In-Line Function is 
Called, Its Machine Code will be Available inside main() and bahaves as part of main() only.
----------------------------------------------VS--------------------------------------------
So, Its better to write Complex Function body outside, As Function means Separate piece of code 
should be there.
i.e. When function body is written outside Class and when its called, Its Machine code will not be 
available inside main() But its Machine code will be available outside main() as its body was
written outside class using Scope Resolution Operator.

*/
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){     //In-Line Function
    length=1;
    breadth=1;
    }
    Rectangle(int l, int b){    
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &Rect){ 
        length=Rect.length;
        breadth=Rect.breadth;
    }
    void setLength(int l){    
        if(l>0) length=l; 
    }
    void setBreadth(int b){  
        if(b>0) breadth=b;
        else breadth=1;
    }
    int getLength(){       
        return length;
    }
    int getBreadth(){     
        return breadth;
    }
    int area(){            
        return length*breadth;
    } //All above written functions are Inline Functions
    int perimeter();//we can write their function body outside class using Scope Resolution Operator
};
int Rectangle::perimeter(){  //This Function is written outside Class.
    return 2*(length+breadth);
}
int main(){
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter();
}