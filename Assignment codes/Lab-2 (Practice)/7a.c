#include<stdio.h>

int main()
{
    float a,b;

    printf("Enter any  number for variable a\n");
    scanf("%f",&a);

    printf("Enter any  number for variable b\n");
    scanf("%f",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%f\n",a);
    printf("b=%f\n",b);

    return 0;

}
