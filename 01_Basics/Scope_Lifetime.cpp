#include <iostream>
using namespace std;

// We want this variable to be accessible ANYWHERE in the program.
int maxScore = 100; 

void playLevel() {
    // We want this variable to remember its value every time playLevel() is called, 
    // but it should only be accessible INSIDE this function.
    static int score = 0; 
    
    // We want this variable to be created fresh every time the function runs.
    int currentLevelBonus = 10; 
    
    score += currentLevelBonus;
    cout << "Score is now: " << score << endl;
}

int main() {
    playLevel();
    playLevel();
    return 0;
}