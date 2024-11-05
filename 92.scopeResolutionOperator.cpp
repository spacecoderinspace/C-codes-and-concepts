#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;} //In-Line Function
    int getBreadth(){return breadth;}//In-Line Function except two of these all other functions 
    //need to be written outside the class using Scope Resolution Operator
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
Rectangle::Rectangle() {
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l) {
    length = l;
}

void Rectangle::setBreadth(int b) {
    breadth = b;
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

bool Rectangle::isSquare() {
    return length == breadth; //If both will be Equal, it will return True
}

Rectangle::~Rectangle() {
    cout<<"Rectangle is Destroyed";
}
int main(){
    Rectangle r1(10,10);
    cout<<"Area is:"<<r1.area()<<endl;
    if(r1.isSquare()) cout<<"Yes, Its a Square"<<endl;
}