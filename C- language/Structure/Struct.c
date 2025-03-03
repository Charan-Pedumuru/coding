#include <stdio.h>

struct Data {
    int i;
    float f;
    char c;
};

int main() {
    struct Data d = {10, 5.5, 'A'};
    printf("i: %d, f: %.1f, c: %c\n", d.i, d.f, d.c);
    return 0;
}
