#include <iostream>
using namespace std;

int main() {
    int originalPrice = 50;
    
    // We want to create an integer reference variable named 'discountedPrice' 
    // and make it an alias for 'originalPrice'.
    int &discountedPrice = originalPrice;
    
    // Now, apply a $10 discount by subtracting 10 from the REFERENCE variable.
    discountedPrice -= 10;
    
    // Because they are the same memory location, printing originalPrice will show the new value.
    cout << "The price is now: $" << originalPrice << endl;
    
    return 0;
}