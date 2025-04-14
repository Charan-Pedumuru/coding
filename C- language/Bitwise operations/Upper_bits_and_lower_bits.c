#include <stdio.h>

int main()
{
    unsigned int n = 0xabcd1234;

    unsigned int upper_16 = (n >> 16) & 0xffff;
    unsigned int lower_16 = n & 0xffff;

    printf("Upper: 0x%X\n", upper_16);
    printf("Lower: 0x%X\n", lower_16);
}