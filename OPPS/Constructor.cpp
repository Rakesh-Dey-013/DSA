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

    Hero(string name, int health, int level){
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
