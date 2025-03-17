#include<stdio.h>

#define print(x) _Generic((x), \
        int : print_int, \
        char* : print_str \
)(x);

void print_int(int a)
{
    printf("%d\n",a);
}

void print_str(char *str)
{
    printf("%s\n",*str);
}

int main()
{
    print(4);
    print("Hello");
    return 0;
}