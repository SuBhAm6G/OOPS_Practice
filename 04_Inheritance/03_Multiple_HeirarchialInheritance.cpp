#include <iostream>
#include <string>
using namespace std;

// --- BASE CLASS 1 ---
class MagicUser {
protected:
    int manaLevel;
public:
    void setMana(int m) { manaLevel = m; }
    void castSpell() { cout << "Casting spell with " << manaLevel << " mana." << endl; }
};

// --- BASE CLASS 2 ---
class Swordsman {
protected:
    int swordSharpness;
public:
    void setSharpness(int s) { swordSharpness = s; }
    void slash() { cout << "Slashing with sharpness level " << swordSharpness << "." << endl; }
};

// --- DERIVED CLASS ---
// TODO 1: Declare the 'MagicKnight' class so that it publicly inherits from BOTH 'MagicUser' and 'Swordsman'.
class MagicKnight : public MagicUser, public Swordsman{
public:
    void ultimateAttack(){
        cout << "Ultimate Attack! Combining " << manaLevel<< " mana with a " << swordSharpness << " sharpness blade!\n";
    }
};

    // TODO 2: Write a void function named 'ultimateAttack'.
    // Inside, print a message combining both inherited protected variables.
    // E.g., "Ultimate Attack! Combining [manaLevel] mana with a [swordSharpness] sharpness blade!"
    


int main() {
    MagicKnight hero;
    
    // TODO 3: Set the hero's mana to 1500 using the appropriate inherited function.
    hero.setMana(1500);
    
    // TODO 4: Set the hero's sword sharpness to 99 using the appropriate inherited function.
    hero.setSharpness(99);
    
    // Test the abilities
    hero.castSpell();
    hero.slash();
    hero.ultimateAttack();

    return 0;
}