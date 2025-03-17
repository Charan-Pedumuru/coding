#include <iostream>
using namespace std;

class Car {
public:
    int speed;
    
    // Constructor with Default Argument
    Car(int s = 50) {
        speed = s;
        cout << "Constructor Called. Speed: " << speed << endl;
    }
};

int main() {
    Car c1;    // Uses default value (50)
    Car c2(120); // Uses provided value (120)

    return 0;
}
