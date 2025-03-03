#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;
    
    d.i = 10;
    printf("i: %d\n", d.i);

    d.f = 5.5;
    printf("f: %.1f\n", d.f);  // Overwrites i

    d.c = 'A';
    printf("c: %c\n", d.c);  // Overwrites f

    return 0;
}
