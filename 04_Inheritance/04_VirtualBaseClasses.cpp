#include <iostream>
using namespace std;

// --- GRANDPARENT ---
class GameObject {
protected:
    int entityID;
public:
    void setID(int id) { entityID = id; }
};

// --- PARENT 1 ---
// TODO 1: Make 'Renderable' inherit VIRTUALLY and publicly from 'GameObject'.
class Renderable:virtual public GameObject{
protected:
    bool isVisible = true;
};

// --- PARENT 2 ---
// TODO 2: Make 'Collidable' inherit VIRTUALLY and publicly from 'GameObject'.
class Collidable : virtual public GameObject {
protected:
    bool hasHitbox = true;
};

// --- CHILD ---
// TODO 3: Make 'PlayerCharacter' inherit publicly from BOTH 'Renderable' and 'Collidable'.
class PlayerCharacter :  public Renderable, public Collidable{
public:
    
    // TODO 4: Write a void function named 'spawnPlayer'.
    // Inside, print a message proving you can access 'entityID', 'isVisible', and 'hasHitbox'.
    // E.g., "Player [id] spawned. Visible: [isVisible], Hitbox: [hasHitbox]"
    void spawnPlayer(){
        cout << "Player " << entityID << " spawned. Visible: " << isVisible << ", Hitbox: " << hasHitbox << endl;
    }

};

int main() {
    PlayerCharacter hero;
    
    // Setting the Grandparent's variable through the Child object
    hero.setID(999); 
    
    hero.spawnPlayer();

    return 0;
}