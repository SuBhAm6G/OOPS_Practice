#include <iostream>
using namespace std;

// TODO 1: Write a Forward Declaration for the 'Square' class so 'Rectangle' knows about it.
class Square;

class Rectangle {
private:
    int length, width;
public:
    void setDimensions(int l, int w) { length = l; width = w; }
    
    // TODO 2: Declare the friend function 'compareArea' here.
    // It returns void, and takes two arguments: a Rectangle object and a Square object.
    friend void compareArea(Rectangle r, Square s);
};

class Square {
private:
    int side;
public:
    void setSide(int s) { side = s; }
    
    // TODO 3: Declare the exact same friend function 'compareArea' here.
    friend void compareArea(Rectangle r, Square s);
};

// TODO 4: Define the 'compareArea' function out here in the global scope.
// Remember: No scope resolution operator (::) needed!
// Inside, calculate rectArea (length * width) and sqArea (side * side).
// Print out which one is larger (or if they are equal).
void compareArea(Rectangle r, Square s){
    ((r.length * r.width) > (s.side * s.side))? cout << "Rectangle has larger area" : ((r.length * r.width) < (s.side * s.side))? cout << "Square has larger area" : cout << "Both have equal area";
}


int main() {
    Rectangle rect;
    Square sq;
    
    rect.setDimensions(4, 5); // Area = 20
    sq.setSide(4);            // Area = 16
    
    // TODO 5: Call 'compareArea' and pass both objects to it.
    compareArea(rect,sq);
    
    return 0;
}