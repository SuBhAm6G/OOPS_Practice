#include <iostream>
using namespace std;

// --- TIER 1 (Grandparent) ---
class HardwareNode {
protected:
    string macAddress;
public:
    void setMAC(string mac) { macAddress = mac; }
};

// --- TIER 2 (Parent) ---
// TODO 1: Make OpticalSensor inherit publicly from HardwareNode
class OpticalSensor:public HardwareNode {
protected:
    int resolution; // in megapixels
public:
    void setResolution(int res) { resolution = res; }
};

// --- TIER 3 (Child) ---
// TODO 2: Make CivicEyeCamera inherit publicly from OpticalSensor
class CivicEyeCamera : public OpticalSensor {
public:
    
    // TODO 3: Write a void function named 'runDiagnostics'.
    // Inside, print a message that uses BOTH 'macAddress' (from Tier 1) 
    // AND 'resolution' (from Tier 2).
    // Example output: "CivicEye [MAC] online at [RES] MP."
    void runDiagnostics(){
        cout <<"CivicEye "<<macAddress<<" online at "<<resolution<<" MP.\n";
    }
    
};

int main() {
    CivicEyeCamera streetNode;
    
    // TODO 4: Call the inherited Grandparent function to set the MAC to "00:1A:2B"
    streetNode.setMAC("00:1A:2B");
    
    // TODO 5: Call the inherited Parent function to set the resolution to 12
    streetNode.setResolution(12);
    
    // Run the bottom-tier function 
    streetNode.runDiagnostics();

    return 0;
}