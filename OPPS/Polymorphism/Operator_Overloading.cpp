#include <iostream>
using namespace std;

// Compile-Time Polymorphism
// Same operator behaves differently for user-defined types.

/*
 What is Operator Overloading?

    In C++, operators like +, -, *, <<, etc. have predefined meanings.
    Operator overloading allows you to redefine these operators to work with user-defined types (classes/objects).
    Basically, you give a special meaning to an operator when it is applied to objects.

    👉 Example: Adding two complex numbers using + instead of writing a separate function.
*/

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}
    
    // Overloading '+' operator
    Complex operator + (const Complex &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;   // invokes operator+
    c3.display();           // Output: 6 + 8i
}
