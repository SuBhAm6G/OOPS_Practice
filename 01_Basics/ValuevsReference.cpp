#include <iostream>
using namespace std;

// We want to pass the pointer by REFERENCE so we can change its target.
// Remember the syntax for a reference to an integer pointer!
void switchTarget(int* &targetPtr, int* newEnemy) {
    // Redirect the pointer to the new enemy
    targetPtr = newEnemy;
}

int main() {
    int goblin = 50;  // Enemy 1 (50 HP)
    int dragon = 500; // Enemy 2 (500 HP)

    // Player's targeting system initially points to the goblin
    int* currentTarget = &goblin; 

    cout << "Target locked! Enemy HP: " << *currentTarget << endl;

    // Uh oh, a dragon appeared! We need to pass our pointer to switchTarget
    switchTarget(currentTarget, &dragon);

    // Print the HP of the newly locked target by dereferencing currentTarget
    cout << "Target switched! New Enemy HP: " << *currentTarget << endl; 

    return 0;
}