#include <stdio.h>

int main() {
    unsigned int a = 5, b = 3; // (0101 ^ 0011)
    printf("a ^ b = %u\n", a ^ b); // Output: 6 (0110)
    return 0;
}