#include<stdio.h>

int main()
{
    float tc,tf;

    printf("Enter the temperature in fahrenheit\n");
    scanf("%f",&tf);

    tc=(tf-32)*0.5;
    printf("The temperature in celcius is %f",tc);

    return 0;
}
