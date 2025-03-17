#include <iostream>
using namespace std;

class Car {
public:
    int* speed;
    
    // Constructor
    Car(int s) {
        speed = new int(s);
    }

    // Move Constructor
    Car(Car&& c) noexcept {
        speed = c.speed;
        c.speed = nullptr; // Make the source object null
        cout << "Move Constructor Called" << endl;
    }

    ~Car() {
        delete speed;
    }
};

int main() {
    Car c1(200);
    Car c2 = move(c1); // Calls the move constructor

    return 0;
}
