#include <iostream>
using namespace std;

// --- ABSTRACT BASE CLASS ---
class PaymentMethod {
protected:
    string accountHolder;

public:
    PaymentMethod(string name) { accountHolder = name; }

    // TODO 1: Declare a pure virtual function named 'processPayment' that takes a float (amount) and returns void.
    virtual void processPayment(float amount) = 0;
};

// --- DERIVED CLASS 1 ---
// TODO 2: Create a 'CreditCard' class that inherits from 'PaymentMethod'.
// Include a constructor that passes the name up to the base class (e.g., CreditCard(string n) : PaymentMethod(n) {} ).
// Implement the pure virtual function to print a specific message (e.g., "[Name] paid $[amount] via Credit Card.")
class CreditCard : public PaymentMethod{
public:
    CreditCard(string name):PaymentMethod(name){};
    void processPayment(float amount){
        cout << accountHolder << " paid $" << amount << " via Credit Card." << endl;
    }

};


// --- DERIVED CLASS 2 ---
// TODO 3: Create a 'UPI' class that inherits from 'PaymentMethod'.
// Include a constructor like you did for CreditCard.
// Implement the pure virtual function to print a specific message (e.g., "[Name] paid $[amount] via UPI.")
class  UPI : public PaymentMethod{
public:
    UPI(string name) : PaymentMethod(name){};
    void processPayment(float amount){
        cout << accountHolder << " paid $" << amount << " via UPI." << endl;
    }
};


int main() {
    // PaymentMethod genericPay("John"); // This would cause an error!

    CreditCard card1("Subham");
    UPI upi1("Subham");

    card1.processPayment(150.75);
    upi1.processPayment(25.00);

    return 0;
}