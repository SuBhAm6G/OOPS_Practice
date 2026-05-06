#include <iostream>
using namespace std;

class Player {
private:
    int health = 100;

public:
    // 1. GETTER: Return the private health variable
    int getHealth() {
        return health;
    }

    // 2. SETTER: Safely update the health
    void setHealth(int newHealth) {
        // If the damage drops them below 0, just set health to exactly 0
        if (newHealth < 0) {
            health = 0;
        } 
        // If a potion heals them above 100, cap the health at exactly 100
        else if (newHealth > 100) {
            health = 100;
        } 
        // Otherwise, it's a normal number, so update normally
        else {
            health = newHealth;
        }
    }
};

int main() {
    Player hero;
    
    hero.setHealth(150); // Trying to overheal!
    cout << "Hero HP: " << hero.getHealth() << endl; // Should cap at 100
    
    hero.setHealth(-20); // Taking massive damage!
    cout << "Hero HP: " << hero.getHealth() << endl; // Should stop at 0
    
    hero.setHealth(80); // Taking massive damage!
    cout << "Hero HP: " << hero.getHealth() << endl; // Should stop at 0
    
    return 0;
}