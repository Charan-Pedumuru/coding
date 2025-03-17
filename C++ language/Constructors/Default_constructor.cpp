#include <iostream>
using namespace std;

class Car {
public:
    int speed;
    
    // Default Constructor
    Car() {
        speed = 0;
        cout << "Default Constructor Called. Speed: " << speed << endl;
    }
};

int main() {
    Car c1; // Calls the default constructor
    return 0;
}
