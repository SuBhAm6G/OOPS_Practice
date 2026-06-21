#include <iostream>
#include <string>
using namespace std;

// TODO 1: Declare a class named Student
// (Don't forget the closing brace and semicolon at the very end of the class!)
class Student{
    private:
    string studentName;
    float gpa;

    public:
    void setStudent(string name, float grade){
        studentName = name;
        gpa = grade;
    }

    void printStudent(){
        cout << studentName << "\n";
        cout << gpa << endl;
    }
};
    // TODO 2: Create a private section.
    // Inside it, declare a string named 'studentName' and a float named 'gpa'.


    // TODO 3: Create a public section.
    // Inside it, write a void function named 'setStudent' that takes a string 'name' and float 'grade'.
    // Assign those parameters to the private variables.


    // TODO 4: Still in the public section, write a void function named 'printStudent'.
    // It should just cout the name and gpa.


// --- End of Class Specification ---

int main() {
    Student scholar;
    scholar.setStudent("Alice", 3.9);
    scholar.printStudent();
    return 0;
}