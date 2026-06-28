#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // TODO 1: Overload the '==' operator as a member function to compare this object's 'str' with another MyString's 'str'.
    int operator==(MyString s2){
        if(strcmp(str,s2.str)==0) return 1;
        return 0;
    }
    
    

    void display() { cout << str << endl; }
};

int main() {
    MyString pswd1("Secret123");
    MyString pswd2("Secret123");
    MyString pswd3("Password");

    // TODO 2: Write an if/else block using your overloaded '==' operator to compare pswd1 and pswd2. 
    // Print a success message if they match.
    if(pswd1 == pswd2){
        cout << "Same Strings.\n";
    }
    
    

    return 0;
}