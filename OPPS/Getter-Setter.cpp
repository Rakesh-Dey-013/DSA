#include <iostream>
using namespace std;

class Hero
{
private:
    int health;
    int level;

public:
    string name;

    // Getter & Setter --->
    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        this->health = h;
    }
    void setLevel(int l)
    {
        this->level = l;
    }

    // Parameterized Constructor --->

    // Hero(string name, int health, int level){
    //     this->name = name;
    //     this->health = health;
    //     this->level = level;
    // }

    void print()
    {
        cout << "\nPlayer : " << name << ", Health : " << health << ", Level : " << level << "\n" << endl;
    }
};

int main()
{
    Hero player1;

    player1.setHealth(70);
    player1.setLevel(31);
    player1.name = "Dragon";

    cout << player1.getHealth() << endl;

    player1.print();

    // Hero player2("Ryomen Sukuna", 90, 50);
    // player2.print();

    return 0;
}
