#include<stdio.h>

int main()
{
    int a=1,b;

    b=++a + a++;

    printf("a=%d\nb=%d",a,b);
}
