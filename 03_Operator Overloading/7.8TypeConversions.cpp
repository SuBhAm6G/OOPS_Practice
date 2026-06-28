#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    Distance() { meters = 0; centimeters = 0; }

    // TODO 1: Write a constructor to convert a basic 'float' (totalMeters) into a Distance object.
    // E.g. If totalMeters is 2.75, meters = 2, centimeters = 75.
    // Hint: You can cast totalMeters to an (int) to get the whole meters.
    Distance(float totalmeters){
        meters = int(totalmeters);
        centimeters = (totalmeters - int(totalmeters))*100;
    }

    // TODO 2: Write an overloaded casting operator to convert this object back into a 'float'.
    // E.g. If meters = 2 and centimeters = 75, it should return 2.75.
    // Hint: Remember the weird syntax! 'operator float()' with NO return type at the very left.
    operator float(){
        return (float(meters) + float(centimeters)/100);
    }

    void display() {
        cout << meters << "m " << centimeters << "cm" << endl;
    }
};

int main() {
    Distance d1;
    
    // Testing Basic to Class
    float rawDistance = 4.25;
    d1 = rawDistance; 
    
    cout << "Object State: "; 
    d1.display(); // Should print "4m 25cm"

    // Testing Class to Basic
    float extractedValue = d1;
    cout << "Extracted Float: " << extractedValue << endl; // Should print 4.25

    return 0;
}