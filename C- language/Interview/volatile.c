#include <stdio.h>

int main() {
    volatile int x = 0;
    int y = 0;
    
    // Simulate external modification of x
    // In reality, this might be an interrupt or hardware change
    x = 10; 

    y = x; // Read the volatile variable x

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    return 0;
}