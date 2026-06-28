#include <iostream>
using namespace std;

// --- BASE CLASS ---
class Device {
protected:
    string deviceID;
    bool isPoweredOn;

public:
    Device(string id) {
        deviceID = id;
        isPoweredOn = false;
    }

    void powerOn() {
        isPoweredOn = true;
        cout << "Device " << deviceID << " is now ON." << endl;
    }
};

// --- DERIVED CLASS ---
// TODO 1: Declare the 'SurveillanceCamera' class so that it inherits PUBLICLY from 'Device'.
class SurveillanceCamera : public Device {
public:
    SurveillanceCamera() : Device("") {}

    // Don't worry about constructors for the derived class just yet (Chapter 8.11).
    // I have set this up to bypass the base constructor requirement for this specific drill.
    void setCameraID(string id) {
        deviceID = id; // Inherited protected variable
    }

    // TODO 2: Write a function named 'detectLitter'. 
    // It takes no arguments and returns void.
    // Inside, check if the camera is powered on (using the inherited variable).
    // If it is, print "[Camera ID] AI Litter Detection Active."
    // If not, print "Cannot detect. Camera is OFF."
    void detectLitter(){
        if(isPoweredOn) cout << deviceID <<  "AI Litter Detection Active.\n";
        else cout <<  "Cannot detect. Camera is OFF.\n";
    }
    
    
};

int main() {
    SurveillanceCamera cam1;
    
    // 1. Give the camera an ID
    cam1.setCameraID("CAM-KOL-01");

    // 2. Try detecting before turning it on
    cam1.detectLitter(); 

    // TODO 3: Use the inherited 'powerOn()' function to turn cam1 on.
    cam1.powerOn();
    
    // TODO 4: Try detecting litter again.
    cam1.detectLitter();
    

    return 0;
}