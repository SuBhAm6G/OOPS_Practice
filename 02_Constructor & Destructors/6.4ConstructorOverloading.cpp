#include <iostream>
using namespace std;

class Smartphone {
private:
    int storageCapacity;

public:
    // TODO 1: Write a DEFAULT constructor here (no parameters).
    // Inside, set 'storageCapacity' to 64.
    Smartphone(){ storageCapacity = 64;}
    
    
    // TODO 2: Write a PARAMETERIZED constructor here.
    // It should take one integer parameter (e.g., int capacity).
    // Inside, assign the parameter to 'storageCapacity'.
    Smartphone(int mem){
        storageCapacity = mem;
    }
    
    
    void checkSpecs() {
        cout << "Phone Storage: " << storageCapacity << "GB" << endl;
    }
};

int main() {
    // TODO 3: Create a Smartphone object named 'standardPhone' using the default constructor.
    Smartphone standardPhone;
    
    // TODO 4: Create a Smartphone object named 'proPhone' with 256GB of storage using the parameterized constructor.
    Smartphone proPhone(256);
    
    
    standardPhone.checkSpecs();
    proPhone.checkSpecs();

    return 0;
}