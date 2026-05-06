#include <iostream>
#include <string>
using namespace std;

class FileHandler {
private:
    string filename;

public:
    // TODO 1: Write the entire CONSTRUCTOR here. 
    FileHandler(string filename){
        this->filename=filename;
        cout << "Opening file: " << filename << endl;
    }
    
    // TODO 2: Write the entire DESTRUCTOR here.
    ~FileHandler(){
        cout << "Closing file: " << filename << endl;
    }
    
};

int main() {
    cout << "Starting program..." << endl;
    
    // This will trigger your constructor
    FileHandler myConfig("config.txt"); 
    
    cout << "Reading configurations..." << endl;
    
    // When main ends, myConfig is destroyed, triggering your destructor
    return 0;
}