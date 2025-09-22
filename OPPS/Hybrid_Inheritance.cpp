#include <iostream>
using namespace std;

/*
📖 Short Theory

Hybrid Inheritance is a combination of two or more inheritance types (like multiple + hierarchical + multilevel).
It’s used when you need a more complex relationship between classes.

✅ In short:
Hybrid inheritance is when we mix different inheritance types (like multilevel + multiple).
It helps when classes need to inherit from different hierarchies simultaneously.

⚠️ Problem: Hybrid inheritance can sometimes lead to the Diamond Problem (when two parent classes have a common base).
C++ solves this using virtual inheritance.
*/

//  Hybrid Inheritance example with multilevel + multiple inheritance --->

// Base class
class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
};

// Derived class 1 (multilevel - from Person)
class Student : public Person {
public:
    int rollNo;
    void setRollNo(int r) {
        rollNo = r;
    }
};

// Another base class
class Sports {
public:
    int score;
    void setScore(int s) {
        score = s;
    }
};

// Derived class (Hybrid: inherits from Student and Sports)
class Result : public Student, public Sports {
public:
    void displayResult() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main() {
    Result r;
    r.setName("Alice");
    r.setRollNo(101);
    r.setScore(95);

    r.displayResult();

    return 0;
}
