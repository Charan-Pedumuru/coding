#include <stdio.h>

//Moves bits to the right by n places
//Equivalent to dividing by 2^n

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    // Shift right by 16 bits to remove lower 16 bits
    unsigned int result = num >> 16;

    printf("Remaining 16 bits: %u (0x%X)\n", result, result);

    unsigned int a = 8; // (0000 1000)
    printf("a >> 1 = %u\n", a >> 1); // Output: 4 (0000 0100)

    return 0;
}