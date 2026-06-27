#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // TODO 1: Write a PARAMETERIZED constructor here.
    // It should take a string (name) and a double (initialDeposit).
    // Assign those parameters to 'accountHolder' and 'balance'.
    BankAccount(string name = "Null", double bal = 0){
        accountHolder = name;
        balance = bal;
    }
    
    
    void displayBalance() {
        cout << accountHolder << "'s Balance: $" << balance << endl;
    }
};

int main() {
    // TODO 2: Instantiate a BankAccount object named 'myAccount' using the IMPLICIT call method.
    // Pass in your name and an initial deposit of 500.50.
    BankAccount myAccount("Subham", 500.50);
    
    
    // TODO 3: Instantiate another BankAccount object named 'businessAccount' using the EXPLICIT call method.
    // Pass in "TechCorp" and an initial deposit of 10000.00.
    BankAccount businessAccount = BankAccount("TechCorp", 10000);
    

    // Displaying the data
    myAccount.displayBalance();
    businessAccount.displayBalance();
    
    return 0;
}