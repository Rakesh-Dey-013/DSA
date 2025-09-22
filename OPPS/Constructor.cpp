#include <iostream>
using namespace std;

class Hero
{
private:
    int health;
    int level;

public:
    string name;

    // Parameterized Constructor --->

    Hero(string name, int health, int level)
    {
        this->name = name;
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "\nPlayer : " << name << ", Health : " << health << ", Level : " << level << endl;
    }
};

int main()
{
    Hero player1("Dragon", 92, 51);
    player1.print();

    Hero player2("Ryomen Sukuna", 90, 50);
    player2.print();

    return 0;
}

/*
 What is a Constructor ?
    -> A constructor is a special method in a class.
    -> It is automatically called when you create an object of that class.
    -> Name = Class Name (must be same).
    -> No return type (not even void).

 Why Use a Constructor?
    -> Initialize objects automatically.
    -> Avoid repetitive code (no need to call a separate method to initialize data).
    -> Improve readability & maintainability of code.

 Types of Constructors
    -> Default Constructor – No parameters, initializes with default values.
    -> Parameterized Constructor – Takes parameters, initializes with custom values.
    ->Copy Constructor – Creates a new object by copying values from another object.
*/
