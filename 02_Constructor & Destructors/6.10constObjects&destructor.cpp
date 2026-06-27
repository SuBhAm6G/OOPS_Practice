#include <iostream>
using namespace std;

class SecureDatabase {
private:
    int* secretKey; // Dynamic memory pointer

public:
    // 1. CONSTRUCTOR (Allocates memory)
    SecureDatabase(int key) {
        secretKey = new int;
        *secretKey = key;
        cout << "Database opened. Memory allocated." << endl;
    }

    // 2. DESTRUCTOR (Frees memory)
    // Rules: Starts with ~, no return type, NO ARGUMENTS allowed!
    ~SecureDatabase() {
        delete secretKey; // This prevents the memory leak!
        cout << "Database closed. Memory completely freed." << endl;
    }

    // 3. CONST MEMBER FUNCTION (Safe to call on a const object)
    void readKey() const {
        cout << "Key is: " << *secretKey << endl;
    }
    
    // Normal member function
    void changeKey(int newKey) {
        *secretKey = newKey;
    }
    void call() const{return;}
};

int main() {
    // Creating a CONST object
    const SecureDatabase vault(9942);

    // Allowed: Calling a const function
    vault.readKey();

    // ERROR! The compiler will block this because 'vault' is const!
    // vault.changeKey(0000); 
    vault.call(); //must be an const member function
    cout << "Main function is ending..." << endl;
    
    // The moment the closing brace } is hit, the Destructor runs automatically!
    return 0; 
}