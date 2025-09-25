#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Normal function (can have implementation)
    void info() {
        cout << "This is a shape class." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();    // Calls Circle's draw()
    s2->draw();    // Calls Rectangle's draw()
    s1->info();    // Access normal function

    delete s1;
    delete s2;

    return 0;
}
