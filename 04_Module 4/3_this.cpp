#include <iostream>
using namespace std;

class Employee {
private:
    int salary = 50000;

public:
    // The parameter is named 'salary', colliding with the private variable!
    void updateSalary(int salary) {
        
        // We want to assign the incoming parameter 'salary' 
        // to the object's internal variable 'salary'.
        this->salary = salary;
        
        cout << "Salary updated to: $" << this->salary << endl;
    }
};

int main() {
    Employee bob;
    
    // Give Bob a raise!
    bob.updateSalary(60000); 
    
    return 0;
}