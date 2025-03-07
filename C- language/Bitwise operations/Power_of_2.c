#include <stdio.h>

// (n&(n-1)==0) A power of 2 has only one 1 bit.

int isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num = 9;
    if (isPowerOfTwo(num))
        printf("Power of 2\n");
    else
        printf("Not a power of 2\n");
    return 0;
}
