#include <iostream>
using namespace std;

class Character {
private:
    int health;
    int mana;

public:
    // Standard Parameterized Constructor
    Character(int h, int m) {
        health = h;
        mana = m;
    }

    // TODO 1: Write the Copy Constructor here!
    // It should take a constant reference to a Character object (name it 'source').
    // Inside, copy 'source's health into this object's health.
    // Copy 'source's mana into this object's mana.
    Character(const Character &source){
        health = source.health;
        mana = source.mana;
    }
    
    
    
    void getStats() {
        cout << "HP: " << health << " | MP: " << mana << endl;
    }
};

int main() {
    // 1. Create the original Hero
    Character hero(100, 50);
    
    // TODO 2: Create a new Character object named 'heroClone'.
    // Use the Copy Constructor by passing 'hero' into it.
    Character heroClone(hero);
    
    
    cout << "Original Hero - "; hero.getStats();
    cout << "Cloned Hero - "; heroClone.getStats();

    return 0;
}