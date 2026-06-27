#include <iostream>
using namespace std;

class Data {
public:
    int value;
    void printValue() { cout << "Value: " << value << endl; }
};

int main() {
    // 1. Declare a pointer to an integer member of the 'Data' class
    int Data::*ptrToData = &Data::value;

    // 2. Declare a pointer to a member function of the 'Data' class
    void (Data::*ptrToFunc)() = &Data::printValue;

    // 3. Create actual objects (The "Islands")
    Data obj1;
    Data obj2;

    // 4. Use the pointer WITH the object using the .* operator
    obj1.*ptrToData = 100;
    obj2.*ptrToData = 200;

    // Call the function using the pointer
    (obj1.*ptrToFunc)(); // Prints 100
    (obj2.*ptrToFunc)(); // Prints 200

    return 0;
}