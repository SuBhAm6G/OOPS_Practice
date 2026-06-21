#include <iostream>
using namespace std;

// We want this function to physically swap the original variables.
// Therefore, we must accept parameters 'a' and 'b' by REFERENCE.
void swapValues(int &a, int &b) {
    // To swap two things, we temporarily hold one in a 'temp' variable
    int temp = a; 
    
    // Now overwrite 'a' with 'b'
    a = b;        
    
    // Finally, put the original value of 'a' (which we saved) into 'b'
    b = temp; 
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    
    swapValues(x, y);
    
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}