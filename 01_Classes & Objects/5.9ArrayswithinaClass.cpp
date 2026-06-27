#include <iostream>
using namespace std;

class WeatherStation {
private:
    // TODO 1: Declare an array of integers named 'temps' that can hold 4 elements.
    int temps[4];
    
public:
    // TODO 2: Write a function named 'setTemps' that takes 4 integer parameters (t1, t2, t3, t4).
    // Assign those parameters to the 4 slots in the 'temps' array.
    void setTemps(int t1, int t2, int t3, int t4){
        temps[0] = t1;
        temps[1] = t2;
        temps[2] = t3;
        temps[3] = t4;
    }
    

    void displayAverage() {
        double sum = 0;
        
        // TODO 3: Write a for-loop to iterate through the 'temps' array and add them to 'sum'.
        // After the loop, calculate the average (sum / 4.0) and cout it.
        for (int i = 0; i < 4; ++i) {
            sum += temps[i];
        }
        cout << sum/4.0;
        
    }
};

int main() {
    WeatherStation station;
    station.setTemps(72, 75, 80, 78);
    station.displayAverage(); // Should print 76.25
    return 0;
}