#include <iostream>
using namespace std;

// TODO 1: Write a template declaration that takes THREE arguments:
// 1. A type placeholder 'T1'
// 2. A type placeholder 'T2'
// 3. A non-type integer argument named 'maxMatches'
template <typename T1, typename T2, int maxMatches>

// TODO 2: Declare the 'Leaderboard' class.
class Leaderboard {
private:
    // TODO 3: Create a variable named 'playerName' of type T1.
    // Create an array named 'matchScores' of type T2, with a size of 'maxMatches'.
    T1 playerName;
    T2 matchScores[maxMatches];

public:
    Leaderboard(T1 name) {
        playerName = name;
        cout << "Leaderboard for " << playerName << " initialized for " << maxMatches << " matches." << endl;
    }
};

int main() {
    // TODO 4: Instantiate a Leaderboard object named 'board1'.
    // Make T1 a string. Make T2 a float. Set maxMatches to 5.
    // Pass the name "Subham" into the constructor.
    Leaderboard<string, float, 5> board1("Subham");

    return 0;
}