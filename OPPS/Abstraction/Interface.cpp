#include <iostream>
using namespace std;

// Interface
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
    virtual void eat() = 0;    // Another pure virtual function
};

// Dog implements Animal
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
    void eat() override {
        cout << "Dog eats bones." << endl;
    }
};

// Cat implements Animal
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
    void eat() override {
        cout << "Cat drinks milk." << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->sound();
    a1->eat();

    a2->sound();
    a2->eat();

    delete a1;
    delete a2;

    return 0;
}
