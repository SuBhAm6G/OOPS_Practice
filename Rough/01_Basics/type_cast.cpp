#include <iostream>
using namespace std;

int main() {
    char secretLetter = 'Z';
    
    // We want to cast secretLetter into an integer to see its ASCII value.
    // Replace the blanks to complete the static_cast syntax!
    int asciiValue = static_cast<int>(secretLetter);
    
    cout << "The letter " << secretLetter << " is stored as the number " << asciiValue << endl;
    
    return 0;
}