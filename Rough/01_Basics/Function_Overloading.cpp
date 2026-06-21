#include <iostream>
using namespace std;

// Function 1: Calculate area of a SQUARE
// A square's area is side * side. We just need one integer parameter named 'side'.
int calculateArea(int side) {
    return side * side;
}

// Function 2: Calculate area of a RECTANGLE
// A rectangle's area is length * width. We need two integer parameters: 'length' and 'width'.
int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    // This will automatically call the Square version (1 argument)
    cout << "Area of square (side 5): " << calculateArea(5) << endl;
    
    // This will automatically call the Rectangle version (2 arguments)
    cout << "Area of rectangle (4x6): " << calculateArea(4, 6) << endl;
    
    return 0;
}