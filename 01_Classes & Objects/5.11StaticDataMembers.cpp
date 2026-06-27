#include <iostream>
using namespace std;

class GameServer {
public:
    // TODO 1: Declare a STATIC integer named 'activePlayers'
    static int activePlayers;
    
    void playerJoin() {
        activePlayers++;
        cout << "A player joined! Total active: " << activePlayers << endl;
    }
};

// TODO 2: Define and initialize the static variable 'activePlayers' OUTSIDE the class.
// Set its initial value to 0. Remember to use the Scope Resolution Operator (::)!

int GameServer::activePlayers = 0;

int main() {
    GameServer lobbyA;
    GameServer lobbyB;
    
    lobbyA.playerJoin(); // Count goes to 1
    lobbyA.playerJoin(); // Count goes to 2
    
    // lobbyB shares the exact same variable!
    lobbyB.playerJoin(); // Count should go to 3
    GameServer::activePlayers = 5;
    cout << lobbyB.activePlayers;
    
    return 0;
}