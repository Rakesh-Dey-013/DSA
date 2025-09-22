#include <iostream>
using namespace std;
/*
📖 Short Theory

Multiple Inheritance means a single derived class inherits from two or more base classes.
This allows the derived class to combine features of multiple classes.
*/


// Base class 1
class Teacher {
public:
    void teach() {
        cout << "Teaching students..." << endl;
    }
};

// Base class 2
class Researcher {
public:
    void research() {
        cout << "Doing research work..." << endl;
    }
};

// Derived class inheriting from both Teacher and Researcher
class Professor : public Teacher, public Researcher {
public:
    void guideStudents() {
        cout << "Guiding students in projects..." << endl;
    }
};

int main() {
    Professor p;

    // Accessing functions from both base classes
    p.teach();       // from Teacher
    p.research();    // from Researcher
    p.guideStudents(); // own function

    return 0;
}
