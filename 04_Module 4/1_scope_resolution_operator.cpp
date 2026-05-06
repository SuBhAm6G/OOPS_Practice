#include <iostream>
using namespace std;

class Bank {
public:
    int vaultCash = 1000;

    // 1. Declare the member function inside the class scope
    void withdraw(int amount); 
};

// 2. Define the member function outside the class scope.
// We must use the Scope Resolution Operator to link it to 'Bank'.
void Bank::withdraw(int amount) {
    if (amount <= vaultCash) {
        vaultCash -= amount;
        cout << "Withdrew $" << amount << ". Vault remaining: $" << vaultCash << endl;
    } else {
        cout << "Not enough cash in the vault!" << endl;
    }
}

int main() {
    Bank myLocalBranch;
    
    // 3. Call the function using the object we just created
    myLocalBranch.withdraw(200);

    return 0;
}