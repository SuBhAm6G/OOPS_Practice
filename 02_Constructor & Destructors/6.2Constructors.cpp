#include <iostream>
#include <string>
using namespace std;

class SmartBulb {
private:
    bool isOn;
    int brightness;

public:
    // TODO 1: Write the Constructor for the SmartBulb class.
    // Inside the constructor:
    // 1. Set 'isOn' to false.
    // 2. Set 'brightness' to 50.
    // 3. Print a message saying "Bulb initialized."
    
    SmartBulb(){
        isOn = false;
        brightness = 50;
        cout << "Bulb initialized." << endl;
    }
    
    void displayStatus() {
        cout << "Power: " << (isOn ? "ON" : "OFF") << " | Brightness: " << brightness << "%" << endl;
    }
};

int main() {
    cout << "Unboxing new bulb..." << endl;
    
    // TODO 2: Instantiate a SmartBulb object named 'livingRoomBulb'.
    SmartBulb livingRoomBulb;
    
    // Display to verify the constructor worked
    livingRoomBulb.displayStatus();
    
    return 0;
}