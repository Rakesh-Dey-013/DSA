#include <iostream>
using namespace std;

// Compile-Time Polymorphism
// Same function name, different parameter lists.

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math obj;
    cout << obj.add(2, 3) << endl;        // calls int version
    cout << obj.add(2.5, 3.5) << endl;    // calls double version
    cout << obj.add(1, 2, 3) << endl;     // calls 3-parameter version
}
