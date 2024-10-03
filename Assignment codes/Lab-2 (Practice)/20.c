#include<stdio.h>

int main()
{
    float c,f;

    printf("Enter the temperature in fahrenheit\n");
    scanf("%f",&f);

    c=(f-32)*0.5;
    printf("The temperature in celcius is %f",c);

    return 0;
}
