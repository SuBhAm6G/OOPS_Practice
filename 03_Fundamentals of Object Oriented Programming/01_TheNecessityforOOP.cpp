#include <iostream>
using namespace std;

// 1. We use this keyword to define a blueprint that bundles data and functions
class SmartLight {
public: // Allows us to access these from main()

    // 2. The DATA: A boolean variable to track if the light is on or off.
    // Let's name it 'isOn' and start it as false.
    bool isOn = false;

    // 3. The FUNCTION: A method to toggle the light.
    // It shouldn't return anything (void).
    void toggle() {
        // If it's on, turn it off. If it's off, turn it on.
        isOn = !isOn; 
        
        if(isOn) {
            cout << "The light is now ON." << endl;
        } else {
            cout << "The light is now OFF." << endl;
        }
    }
};

int main() {
    // We create an actual Object from our blueprint
    SmartLight livingRoomLight; 
    
    // We use the dot (.) operator to interact with the object's bundled function
    livingRoomLight.toggle(); 
    livingRoomLight.toggle();

    return 0;
}