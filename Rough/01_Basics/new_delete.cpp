#include <iostream>
using namespace std;

int main() {
    // 1. We want to dynamically allocate a single integer on the Heap.
    // Replace the blank with the keyword used to request memory.
    int* healthPotion = new int;
    
    // 2. Assign the value 50 to the memory location our pointer is pointing to.
    // Remember how to access the value at a pointer's address!
    *healthPotion = 50;
    
    cout << "You drank a potion and gained " << *healthPotion << " HP!" << endl;
    
    // 3. The potion is empty! We must free the memory to prevent a memory leak.
    // Replace the blank with the keyword used to free memory.
    delete healthPotion;
    
    return 0;
}