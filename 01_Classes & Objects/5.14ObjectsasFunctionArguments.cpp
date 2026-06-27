#include <iostream>
using namespace std;

class Distance {
public:
    int feet;
    int inches;

    void setDistance(int f, int i) {
        feet = f;
        inches = i;
    }

    // TODO 1: Write a member function named 'addDistance'.
    // It should return nothing (void).
    // It must take ONE parameter: a Distance object passed by REFERENCE (name it 'd').
    // Inside the function:
    // 1. Add d.feet to this object's feet.
    // 2. Add d.inches to this object's inches.
    // 3. (Optional but good) If inches goes over 11, subtract 12 from inches and add 1 to feet.
    void addDistance(Distance &d){
        feet += d.feet;
        inches += d.inches;
        (inches>11)? (inches -= 12, feet += 1) : (inches = inches);
    }
    
    

    void display() {
        cout << feet << " feet, " << inches << " inches" << endl;
    }
};

int main() {
    Distance dist1, dist2;
    dist1.setDistance(5, 8);
    dist2.setDistance(4, 6);

    cout << "Original Dist 1: "; dist1.display();
    cout << "Original Dist 2: "; dist2.display();

    // TODO 2: Call the 'addDistance' function on 'dist1', passing 'dist2' as the argument.
    dist1.addDistance(dist2);
    
    cout << "Dist 1 after addition: "; dist1.display(); // Should be 10 feet, 2 inches

    return 0;
}