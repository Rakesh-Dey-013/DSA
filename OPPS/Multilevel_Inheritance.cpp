#include<iostream>
using namespace std;

/*
📖 Short Theory

Multilevel Inheritance means a class is derived from another derived class — forming a chain of inheritance.

Example structure:
Grandparent → Parent → Child

This allows the child class to inherit features from both parent and grandparent classes.
*/


// Base class (Grandparent)
class Person {
public:
    string name;
    int age;

    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void showPersonDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class (Parent)
class Student : public Person {
public:
    string course;

    void setCourse(string c) {
        course = c;
    }

    void showStudentDetails() {
        showPersonDetails();
        cout << "Course: " << course << endl;
    }
};

// Further Derived class (Child)
class GraduateStudent : public Student {
public:
    string thesisTopic;

    void setThesis(string topic) {
        thesisTopic = topic;
    }

    void showGraduateDetails() {
        showStudentDetails();
        cout << "Thesis Topic: " << thesisTopic << endl;
    }
};

int main() {
    GraduateStudent gs;

    gs.setPersonDetails("Alice", 24);  // from Person
    gs.setCourse("Computer Science");  // from Student
    gs.setThesis("Artificial Intelligence");  // from GraduateStudent

    gs.showGraduateDetails();

    return 0;
}