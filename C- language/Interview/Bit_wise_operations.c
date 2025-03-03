// C program to set, clear and toggle a bit of the given number
#include <stdio.h>

int setBit(int N, int K) {
  
    // Bitwise OR with the mask
    return (N | (1 << (K - 1)));
}

int clearBit(int N, int K) {
  
    // Bitwise AND with the mask
    return (N & (~(1 << (K - 1))));
}

int toggleBit(int N, int K) {
  
    // Bitwise XOR with the mask
    return (N ^ (1 << (K - 1)));
}

int main() {
    int N = 5, K = 1;
      printf("Original Number: %d,  Bit Position: %d\n", N, K);

     // Performing the operations 
    printf("%d with %d-th bit Set: %d\n", N, K, setBit(N, K));
    printf("%d with %d-th bit Cleared: %d\n", N, K, clearBit(N, K));
    printf("%d with %d-th bit Toggled: %d\n", N, K, toggleBit(N, K));
  
    return 0;
}
