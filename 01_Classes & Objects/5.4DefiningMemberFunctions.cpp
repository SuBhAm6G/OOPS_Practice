#include <iostream>
using namespace std;

class MathBot {
public:
    // TODO 1: Declare a member function named 'multiply' inside the class.
    // It should return an integer, and take two integers as parameters (a and b).
    // DO NOT write the logic here, just the declaration!
    int multiply(int a, int b);
};

// TODO 2: Define the 'multiply' function OUTSIDE the class.
// Remember the syntax: ReturnType ClassName::FunctionName(params) { logic }
// The logic should simply return a * b.
int MathBot::multiply(int a, int b){
    return a*b;
}


// --- End of Definition ---

int main() {
    MathBot bot;
    cout << "5 * 4 = " << bot.multiply(5, 4) << endl;
    return 0;
}