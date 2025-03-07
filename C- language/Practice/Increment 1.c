#include<stdio.h>

int main()
{
    int a=1,b;

    b= ++a + a++ + a++;

    printf("b=%d\na=%d",b,a);
}
