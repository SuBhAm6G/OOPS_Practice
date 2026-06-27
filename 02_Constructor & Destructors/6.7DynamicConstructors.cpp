#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr; // Pointer to hold the dynamic array
    int size;

public:
    // TODO 1: Write a dynamic parameterized constructor.
    // It should take one integer parameter named 's'.
    // 1. Assign 's' to the class variable 'size'.
    // 2. Use the 'new' keyword to allocate an integer array of size 's', and assign it to 'arr'.
    DynamicArray(int s){
        size = s;
        arr = new int[size];
    }
    
    
    
    void setElement(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }

    void display() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // TODO 2: Instantiate a DynamicArray object named 'myArray' requesting a size of 5.
    DynamicArray myArray(5);
    
    
    myArray.setElement(0, 10);
    myArray.setElement(1, 20);
    myArray.setElement(2, 30);
    myArray.setElement(3, 40);
    myArray.setElement(4, 50);

    cout << "Array contents: ";
    myArray.display(); // Should print 10 20 30 40 50

    return 0;
}