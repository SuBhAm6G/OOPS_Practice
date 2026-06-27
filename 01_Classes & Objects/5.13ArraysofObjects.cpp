#include <iostream>
using namespace std;

class Book {
private:
    int bookID;

public:
    void setID(int id) {
        bookID = id;
    }

    void displayID() {
        cout << "Book ID: " << bookID << endl;
    }
};

int main() {
    // TODO 1: Declare an array named 'shelf' that holds 5 'Book' objects.
    Book shelf[5];
    
    // TODO 2: Write a for-loop (from i = 0 to 4).
    // Inside the loop, call the 'setID' function for each book in the array.
    // Set the ID to (i + 100). So the first book gets ID 100, the second gets 101, etc.
    for(int i = 0; i < 5; i++){
        shelf[i].setID(100+i);
    }
    
    
    cout << "--- Books on Shelf ---" << endl;
    
    // TODO 3: Write another for-loop to iterate through the array.
    // Call the 'displayID()' function for every book in the array.
    for(int i = 0; i < 5; i++){
        shelf[i].displayID();
    }
    
    
    return 0;
}