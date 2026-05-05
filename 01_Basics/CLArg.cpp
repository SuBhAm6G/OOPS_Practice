#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    // We expect exactly ONE extra argument (the name) besides the program name itself.
    // Therefore, the total argument count should be exactly 2.
    if (argc != 2) {
        cout << "Error! Usage: ./greet_user <YourName>" << endl;
        return 1; // Exit with an error code
    }

    // If we get past the check, print the name. 
    // Remember, the program name is at index 0, so the user's name is at the next index.
    cout << "Welcome to the system, " << argv[1] << "!" << endl;
    
    return 0;
}