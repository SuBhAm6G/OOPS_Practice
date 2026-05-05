#include <iostream>
using namespace std;

// The dangerous macro
#define MULTIPLY(a, b) a * b

// We want to create a safe inline function named 'multiplySafe'.
// It needs to return an integer and take two integer parameters: 'a' and 'b'.
inline int multiplySafe(int a, int b) {
    return a*b;
}

int main() {
    // Macro trap: 2 + 3 * 4 = 14
    cout << "Macro result of (2+3)*4: " << MULTIPLY(2 + 3, 4) << endl; 
    
    // Inline safety: (2 + 3) evaluates to 5, then 5 * 4 = 20
    cout << "Inline result of (2+3)*4: " << multiplySafe(2 + 3, 4) << endl; 
    
    return 0;
}