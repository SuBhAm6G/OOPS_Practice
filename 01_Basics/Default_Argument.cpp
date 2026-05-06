#include <iostream>
#include <string>
using namespace std;

// We want a function that creates a user profile.
// 'name' is a mandatory string.
// 'age' should be an integer with a default of 18.
// 'role' should be a string with a default of "Guest".
void createProfile(string name, int age = 18, string role = "Guest") {
    cout << "Created user: " << name << " | Age: " << age << " | Role: " << role << endl;
}

int main() {
    // 1. Call with only the required argument (Uses both defaults)
    createProfile("Alice");

    // 2. Call overriding the age, but keeping the default role
    createProfile("Bob", 25);

    // 3. Call overriding everything
    createProfile("Charlie", 30, "Admin");

    return 0;
}