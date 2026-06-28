#include <iostream>
using namespace std;

class Drone {
protected:
    int altitude;
public:
    // TODO 1: Use the 'this' pointer to assign the parameter 'altitude' to the class variable 'altitude'.
    void setAltitude(int altitude) {
        this->altitude = altitude;
    }

    // TODO 2: Make this function VIRTUAL so derived classes can override it dynamically.
    virtual void fly() {
        cout << "Drone hovering at " << altitude << " feet." << endl;
    }
};

class ScoutDrone : public Drone {
public:
    // TODO 3: Override the 'fly' function. 
    // It should print: "Scout Drone scanning terrain at [altitude] feet."
    void fly(){
        cout << "Scout Drone scanning terrain at " << altitude << " feet." << endl;
    }
    
};

int main() {
    ScoutDrone alphaActual;
    alphaActual.setAltitude(500);

    // TODO 4: Create a base 'Drone' pointer named 'fleetCommander'.
    Drone *fleetCommander;
    
    // TODO 5: Point 'fleetCommander' at the 'alphaActual' object.
    fleetCommander = &alphaActual;
    
    // TODO 6: Call the 'fly()' function using the pointer. 
    // (If you did everything right, it should print the Scout message, not the Drone message!)
    fleetCommander->fly();
    

    return 0;
}