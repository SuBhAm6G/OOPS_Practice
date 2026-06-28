#include <iostream>
using namespace std;

class Component {
public:
    void identify() { cout << "Generic Hardware Component Node." << endl; }
};

class Microcontroller : public Component {
public:
    void identify() { cout << "Microcontroller Unit Active." << endl; }
};

int main() {
    Microcontroller mcuNode;
    
    // TODO 1: Declare a pointer named 'compPtr' that can point to a 'Component'.
    Component *comPtr;

    // TODO 2: Assign the address of 'mcuNode' to your 'compPtr'.
    comPtr = &mcuNode;

    // TODO 3: Call the 'identify()' function using the pointer.
    // Think carefully: based on early binding, which message will print?
    comPtr->identify();

    return 0;
}