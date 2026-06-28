#include <iostream>
using namespace std;

class TallyCounter {
private:
    int count;

public:
    // Constructor initializes count to 0
    TallyCounter() {
        count = 0;
    }

    // TODO 1: Write the operator overload function for the prefix ++ operator.
    // 1. The return type should be void.
    // 2. Use the 'operator' keyword followed by '++'.
    // 3. It takes NO parameters.
    // 4. Inside the function, simply increment the 'count' variable by 1.
    void operator++(){
        count+=1;
    }
    
    

    void display() {
        cout << "Total Count: " << count << endl;
    }
};

int main() {
    TallyCounter gate;

    cout << "Opening the gates..." << endl;
    gate.display();

    // TODO 2: Use the overloaded prefix operator to increment 'gate' three times.
    // Example: ++gate;
    ++gate;
    ++gate;
    ++gate;

    gate.display(); // Should print 3

    return 0;
}