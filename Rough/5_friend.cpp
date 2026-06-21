#include <iostream>
using namespace std;

// Forward declaration of the Manager class
class BankManager;

class SecureVault {
private:
    int millionsStored = 50;

public:
    // TODO 1: Grant friendship to the BankManager class here.
    // Use the keyword 'friend' followed by 'class' and the class name.
    friend class BankManager;
    
};

class BankManager {
public:
    // This function takes a SecureVault object by reference.
    void checkVaultBalance(SecureVault &vault) {
        // TODO 2: Write a cout statement that prints the vault's 'millionsStored'.
        // Because BankManager is a friend, you can access the private variable directly using the 'vault' object.
        cout << "Money Stored(million): "<<vault.millionsStored<<endl;
        
    }
};

int main() {
    SecureVault mainVault;
    BankManager theBoss;

    cout << "The boss is checking the vault..." << endl;
    theBoss.checkVaultBalance(mainVault);

    return 0;
}