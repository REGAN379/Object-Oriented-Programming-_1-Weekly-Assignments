#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    // Base class pointer
    Shape *shapePtr;

    // Circle object
    Circle c;
    shapePtr = &c;
    shapePtr->draw();

    // Rectangle*object
    Rectangle r;
    shapePtr = &r;
    shapePtr->draw();

   // Triangle object
    Triangle t;
    shapePtr = &t;
    shapePtr->draw();

    return 0;
}