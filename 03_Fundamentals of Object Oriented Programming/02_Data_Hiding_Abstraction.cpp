#include <iostream>
using namespace std;

class CoffeeMachine {
// 1. We want to HIDE the internal water level from the outside world.
private: 
    int waterLevel = 10;

// 2. We want to PROVIDE a public interface for the user to interact with.
public:
    void brewCoffee() {
        if (waterLevel >= 20) {
            waterLevel -= 20;
            cout << "Brewing a delicious cup of coffee!" << endl;
        } else {
            cout << "Error: Not enough water." << endl;
        }
    }
};

int main() {
    CoffeeMachine officeMachine;
    
    // 3. We cannot do: officeMachine.waterLevel = 0; 
    // Instead, use the simple interface to make a cup of coffee!
    officeMachine.brewCoffee();
    
    return 0;
}