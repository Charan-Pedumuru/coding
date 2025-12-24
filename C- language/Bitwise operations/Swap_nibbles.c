#include <stdio.h>

int main()
{
    unsigned char x = 100;
    unsigned char y;

    y = ((x & 0x0f) << 4 | (x & 0xf0) >> 4);
    printf("%u", y);
}