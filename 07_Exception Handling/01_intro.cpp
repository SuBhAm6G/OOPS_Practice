#include <iostream>
using namespace std;

void verifyAge(int age) {
    // TODO 1: Create a 'try' block.
    // Inside, write an if-statement. If 'age' is less than 18, 'throw' the age variable.
    // Otherwise, print "Registration successful. Access Granted."
    try{
        if(age<18) throw(age);
        cout << "Registration successful. Access Granted." << endl;
    }
    
    // TODO 2: Create a 'catch' block that accepts an integer (e.g., catch(int errorAge)).
    // Inside, print "Registration Denied. Age [errorAge] is below the requirement."
     catch(int){
        cout << "Registration Denied. Age " << age << " is below the requirement." << endl;
    }
    
}

int main() {
    cout << "--- Applicant 1 ---" << endl;
    verifyAge(20); 

    cout << "\n--- Applicant 2 ---" << endl;
    verifyAge(16); 

    cout << "\nPortal remains online!" << endl;

    return 0;
}