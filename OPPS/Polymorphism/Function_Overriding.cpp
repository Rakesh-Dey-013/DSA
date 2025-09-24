#include <iostream>
using namespace std;

// Run-Time Polymorphism
// Base class pointer → derived class object.

class Animal {
public:
    virtual void sound() {    // virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;

    a = &d;
    a->sound();   // Dog barks

    a = &c;
    a->sound();   // Cat meows
}
