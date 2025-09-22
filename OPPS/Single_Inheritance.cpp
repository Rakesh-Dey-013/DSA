#include <iostream>
using namespace std;

//  1. Single Inheritance --->

// Base class
class Person {
public:
    string name;
    int age;

    void getDetails(string n, int a) {
        name = n;
        age = a;
    }

    void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class (inherits from Person)
class Student : public Person {
public:
    string course;

    void setCourse(string c) {
        course = c;
    }

    void showStudentDetails() {
        showDetails();  // calling base class function
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1;
    s1.getDetails("John", 21); // inherited function
    s1.setCourse("Computer Science");
    s1.showStudentDetails();

    return 0;
}


/*

📖 Short Theory

    Inheritance is an OOP concept that allows one class (called derived class or child class) to inherit properties and methods from another class (called base class or parent class).

    This promotes code reusability and hierarchical classification.

Types of Inheritance in C++

    1. Single Inheritance – One base → one derived class

    2. Multiple Inheritance – Multiple bases → one derived class

    3. Multilevel Inheritance – Chain of inheritance (A → B → C)

    4. Hierarchical Inheritance – One base → multiple derived classes

    5. Hybrid Inheritance – Combination of above types.

*/