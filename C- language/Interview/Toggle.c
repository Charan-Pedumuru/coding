#include <stdio.h>

int main() {
    unsigned char num = 0b00000000; // Initial value (8-bit)
    
    num ^= (1 << 1) | (1 << 6); // Toggle 2nd bit from left and right
    
    printf("Result: 0b%08b\n", num); // Custom binary output

    return 0;
}
