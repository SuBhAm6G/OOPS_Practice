#include <iostream>
using namespace std;

class Airplane {
private:
    int altitude;

public:
    void setAltitude(int alt) {
        altitude = alt;
    }

    // TODO 1: Write a function named 'getAltitude'.
    // It should return an integer.
    // It must take no parameters.
    // It MUST be declared as a 'const' member function.
    // Inside, simply return the 'altitude'.
    int getAltitude() const{
        return altitude;
    }
    
};

int main() {
    Airplane flight101;
    flight101.setAltitude(35000);
    
    // TODO 2: Call your const function to print the altitude.
    // Example output: "Current altitude: 35000 feet"
    
    cout << "Current altitude: " << flight101.getAltitude() << " feet\n";
    
    return 0;
}