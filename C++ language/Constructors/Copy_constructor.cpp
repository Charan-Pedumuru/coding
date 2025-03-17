#include <iostream>
using namespace std;

class Car {
public:
    int speed;
    
    // Parameterized Constructor
    Car(int s) {
        speed = s;
    }

    // Copy Constructor
    Car(const Car &c) {
        speed = c.speed;
        cout << "Copy Constructor Called. Speed: " << speed << endl;
    }
};

int main() {
    Car c1(150); // Calls the parameterized constructor
    Car c2 = c1; // Calls the copy constructor

    return 0;
}
