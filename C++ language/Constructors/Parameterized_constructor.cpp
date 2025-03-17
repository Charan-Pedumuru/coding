#include <iostream>
using namespace std;

class Car {
public:
    int speed;
    
    // Parameterized Constructor
    Car(int s) {
        speed = s;
        cout << "Parameterized Constructor Called. Speed: " << speed << endl;
    }
};

int main() {
    Car c1(100); // Calls the parameterized constructor
    return 0;
}
