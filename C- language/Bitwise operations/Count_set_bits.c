#include <stdio.h>
//Counting Set Bits in a Number (Brian Kernighan’s Algorithm)
//Efficient way to count 1s in a binary representation.

int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1); // Clears the lowest set bit
        count++;
    }
    return count;
}

int main() {
    int num = 1;
    printf("Set bits: %d\n", countSetBits(num));
    return 0;
}
