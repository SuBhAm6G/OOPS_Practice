#include <iostream>
using namespace std;

class Currency {
public:
    int dollars;
    int cents;

    void setCurrency(int d, int c) {
        dollars = d;
        cents = c;
    }

    // TODO 1: Write a function named 'addCurrency'.
    // Its return type MUST be 'Currency'.
    // It should take one parameter: a 'Currency' object named 'c2'.
    Currency addCurrency(Currency c2){
        Currency total;
        // initialize then add this object's values to c2
        total.dollars = dollars + c2.dollars;
        total.cents = cents + c2.cents;
        return total;
    }
    
        // TODO 2: Inside the function, create a local Currency object named 'total'.
        
        // TODO 3: Add this object's dollars to c2.dollars, save in total.dollars.
        // Add this object's cents to c2.cents, save in total.cents.
        // (Don't worry about rolling over 100 cents into a dollar for this drill).
        
        // TODO 4: Return the 'total' object.
        
        

    void display() {
        cout << "$" << dollars << "." << cents << endl;
    }
};

int main() {
    Currency wallet1, wallet2, totalFunds;
    
    wallet1.setCurrency(10, 50);
    wallet2.setCurrency(5, 25);

    // TODO 5: Call the 'addCurrency' function using wallet1.
    // Pass wallet2 as the argument.
    // Assign the result of this function call to the 'totalFunds' object.
    totalFunds = wallet1.addCurrency(wallet2);
    
    cout << "Total Funds: ";
    totalFunds.display(); // Should print $15.75

    return 0;
}