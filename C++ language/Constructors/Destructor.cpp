#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Constructor Called" << endl;
    }
    
    ~Car() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Car c1; // Constructor is called
    return 0; // Destructor is called automatically
}