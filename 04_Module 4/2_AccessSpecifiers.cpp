#include <iostream>
#include <string>
using namespace std;

class SecurityAgent {
// 1. We want the agent's real identity to be strictly hidden. 
// No other classes or external functions should EVER see this.
private:
    string realName = "Classified";

// 2. We want the agent's badge number to be hidden from the public, 
// BUT we want to allow future "JuniorAgent" (child) classes to access it.
protected:
    int badgeNumber = 99;

// 3. We want anyone in the program to be able to ask the agent to introduce their cover identity.
public:
    void introduce() {
        cout << "Hello, I am Agent Smith." << endl;
    }
};

int main() {
    SecurityAgent agent;
    
    // This should be the ONLY line below that compiles correctly!
    agent.introduce(); 
    
    return 0;
}