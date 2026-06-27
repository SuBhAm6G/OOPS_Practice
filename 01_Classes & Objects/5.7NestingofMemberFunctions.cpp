#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a, b, c;

    // A helper function to find the semi-perimeter (s)
    double calcSemiPerimeter() {
        return (a + b + c) / 2.0;
    }

public:
    void setSides(double side1, double side2, double side3) {
        a = side1; b = side2; c = side3;
    }

    void displayArea() {
        // TODO 1: Declare a double named 's'.
        // Assign it the value returned by calling 'calcSemiPerimeter()'.
        // Remember, you do NOT need an object to call it here!
        double s = calcSemiPerimeter();
        
        // (Logic to calculate and print area using 's')
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of the triangle is: " << area << endl;
    }
};

int main() {
    Triangle myTri;
    myTri.setSides(3.0, 4.0, 5.0);
    
    // The main function only asks for the area.
    // The nesting happens silently in the background!
    myTri.displayArea(); 
    
    return 0;
}