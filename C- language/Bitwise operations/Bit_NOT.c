#include <stdio.h>

int main() {
    unsigned int a = 5; // (0101)
    printf("~a = %u\n", ~a); // Output: 4294967290 (1111...1010)
    return 0;
}