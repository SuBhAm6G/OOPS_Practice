#include <iostream>
using namespace std;

// --- BASE CLASS ---
class Vehicle {
protected:
    int topSpeed;
public:
    Vehicle(int speed) { topSpeed = speed; }
};

// --- CLASS TO BE NESTED ---
class Motor {
private:
    int horsepower;
public:
    Motor(int hp) { horsepower = hp; }
    int getHP() { return horsepower; }
};

// --- DERIVED CLASS ---
// TODO 1: Declare the 'ElectricCar' class (Inherits from Vehicle)
class ElectricCar : public Vehicle{
    Motor evMotor;
    public:
    ElectricCar(int speed, int hp):Vehicle(speed), evMotor(hp){
        cout << "ElectricCar created with top speed " << topSpeed << " and motor horsepower " << evMotor.getHP() << endl;
    }


    // TODO 2: Create a private 'Motor' object named 'evMotor'.

    // TODO 3: Write the ElectricCar constructor. It needs parameters for speed and hp.
    // Use an initializer list to construct the Vehicle base and the evMotor object.

    // TODO 4: Write a void function 'showSpecs()'.
    // Print a message containing the inherited 'topSpeed' and the nested motor's HP.
    void showSpecs(){
        cout << "Top Speed: " << topSpeed << "mph | Motor: " << evMotor.getHP() << " HP" << endl;
    }
    
};

int main() {
    // Instantiate an ElectricCar with 150 topSpeed and 400 horsepower
    ElectricCar tesla(150, 400);
    
    tesla.showSpecs(); // Expected: Top Speed: 150mph | Motor: 400 HP

    return 0;
}