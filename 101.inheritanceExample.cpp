#include <iostream>
using namespace std;

class Rectangle {
    int length; // Private by default, so wouldnt be accessible to child class
    int breadth;

public://all these public functions will be already available in its child class
    Rectangle(int l = 0, int b = 0);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
};

Rectangle::Rectangle(int l, int b) : length(l), breadth(b) {}

void Rectangle::setLength(int l) {
    length = l;
}

void Rectangle::setBreadth(int b) {
    breadth = b;
}

int Rectangle::getLength() {
    return length;
}

int Rectangle::getBreadth() {
    return breadth;
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

class cuboid : public Rectangle {
    int height;

public:
    cuboid(int l = 0, int b = 0, int h = 0);
    int getHeight() { return height; }
    void setHeight(int h) { height = h; }
    int volume();
};

cuboid::cuboid(int l, int b, int h) : Rectangle(l, b), height(h) {}

int cuboid::volume() {
    return getLength() * getBreadth() * height;
}


int main() {
    cuboid c(10, 5, 3);
    cout << c.getLength() << endl;
    cout << c.volume() << endl;
    cout << c.area() << endl;
    //cout << c << endl; // Demonstrating operator overloading
}
