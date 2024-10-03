#include<stdio.h>

int main()
{
    float a,b;

    printf("Enter any two float values\n");
    scanf("%f%f",&a,&b);

    printf("The quotient of the two numbers is %.2f\n",a/b);
    printf("The remainder of the two numbers is %.2f",a-(a/b)*b);

    return 0;
}
