#include <iostream>
using namespace std;

int main() {
    // We want to count DOWN from 15 to 10.
    // i-- subtracts 1 from i each loop.
    for (int i = 15; i>=10 ; i--) {
        
        // We want to skip the rest of the loop if i is exactly 13
        if (i == 13) {
            // 'continue' forces the loop to skip to the next iteration immediately
            continue;; 
        }
        
        cout << "Timer: " << i << endl;
    }
    
    return 0;
}