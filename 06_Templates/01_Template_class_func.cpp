#include <iostream>
using namespace std;

// TODO 1: Write the template declaration using 'class T' or 'typename T'.
template <typename T>
// TODO 2: Create a generic function named 'swapValues'.
// It should return void.
// It takes two parameters of type 'T', passed by REFERENCE (T &a, T &b) so we can modify the originals!
// Inside, use a temporary variable of type 'T' to swap 'a' and 'b'.
void swapValues(T &a, T &b){
    swap(a,b);
}



// TODO 3: Write the template declaration for a class.
template <class T>
// TODO 4: Create a class named 'DataPair'.
// It should have two private variables, 'first' and 'second', both of type 'T'.
// Create a constructor to initialize both variables.
// Create a 'display()' function to print them.
class DataPair{
T first, second;
public:
    DataPair(T a, T b){
        first = a;
        second = b;
    }
    void display(){
        cout << "First: " << first << ", Second: " << second << endl;
    }
};



int main() {
    // Testing the generic function
    int x = 10, y = 20;
    swapValues<int>(x, y);
    cout << "Swapped Ints: " << x << ", " << y << endl;

    double c = 1.5, d = 9.9;
    swapValues<double>(c, d);
    cout << "Swapped Doubles: " << c << ", " << d << endl;

    // TODO 5: Instantiate a DataPair object named 'charPair' that holds the 'char' data type.
    // Initialize it with 'A' and 'Z'.
    DataPair<char> charPair('A','Z');
    
    charPair.display(); // Uncomment when ready

    return 0;
}