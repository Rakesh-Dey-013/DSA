#include <iostream>
using namespace std;

/*
📖 Short Theory

Hierarchical Inheritance means multiple derived classes inherit from the same base class.
This allows all child classes to share common properties/methods from the parent class but also have their own specific features.
*/

// Base class (Parent)
class Shape {
public:
    void setValues(int a, int b) {
        width = a;
        height = b;
    }

protected:
    int width, height;
};

// Derived class 1
class Rectangle : public Shape {
public:
    int area() {
        return width * height;
    }
};

// Derived class 2
class Triangle : public Shape {
public:
    float area() {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle rect;
    Triangle tri;

    rect.setValues(10, 5);
    tri.setValues(10, 5);

    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Triangle Area: " << tri.area() << endl;

    return 0;
}
