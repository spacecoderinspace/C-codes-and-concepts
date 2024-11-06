/*
an interface is typically represented as a class with only pure virtual functions, 
meaning it does not provide any implementation.
*/
#include <iostream>
using namespace std;

class Shape {  // Interface 
public:
    virtual void draw() = 0;     // Pure virtual function
    virtual double area() = 0;   // Pure virtual function
};

class Circle : public Shape { 
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape { // Derived class implementing the interface
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }

    double area() override {
        return width * height;
    }
};

int main() {
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    // Using the interface
    circle->draw();
    cout << "Area of Circle: " << circle->area() << endl;

    rectangle->draw();
    cout << "Area of Rectangle: " << rectangle->area() << endl;

    delete circle;  // Clean up
    delete rectangle;

    return 0;
}