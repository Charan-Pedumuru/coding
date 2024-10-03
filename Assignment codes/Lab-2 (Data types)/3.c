#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter any  number for variable a\n");
    scanf("%d",&a);

    printf("Enter any  number for variable b\n");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;

}
