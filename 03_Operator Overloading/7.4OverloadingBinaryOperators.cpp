#include <iostream>
using namespace std;

class Vector2D {
private:
    int x, y;

public:
    Vector2D(int a = 0, int b = 0) { x = a; y = b; }

    // TODO 1: Overload the binary '+' operator as a MEMBER function.
    // 1. Return type is Vector2D. 
    // 2. Function name is operator+. 
    // 3. Takes ONE parameter: Vector2D v2.
    // 4. Inside, return a new Vector2D where the X values are added and Y values are added.
    Vector2D operator+(Vector2D v2){
        return Vector2D(x + v2.x, y + v2.y);
    }
    
    
    
    // TODO 2: Declare the friend function to overload the '==' operator here.
    // 1. Return type is bool. 
    // 2. Function name is operator==.
    // 3. Takes TWO parameters: Vector2D v1, Vector2D v2.
    friend bool operator==(Vector2D v1, Vector2D v2);
    

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// TODO 3: Define the friend function 'operator==' here in the global scope.
// Compare v1.x with v2.x AND v1.y with v2.y. 
// Return true if they perfectly match, false otherwise.
bool operator==(Vector2D v1, Vector2D v2){
        if(v1.x==v2.x && v1.y==v2.y){
            return true;
        }
        else return false;
    }

int main() {
    Vector2D vec1(3, 4);
    Vector2D vec2(3, 4);
    Vector2D vec3(1, 2);

    // Using the overloaded member function (+)
    Vector2D result = vec1 + vec3;
    cout << "Addition Result: ";
    result.display(); // Should print (4, 6)

    // Using the overloaded friend function (==)
    if (vec1 == vec2) {
        cout << "vec1 and vec2 are equal!" << endl;
    }

    return 0;
}