#include<stdio.h>

typedef struct
{
    float real;
    float imaginary;

}complex;

int main()
{
    complex c1, c2, sum;

    printf("Enter the first real and imaginary numbers\n");
    scanf("%f%f",&c1.real, &c1.imaginary);

    printf("Enter the first real and imaginary numbers\n");
    scanf("%f%f",&c2.real, &c2.imaginary);

    sum.real=c1.real+c2.real;
    sum.imaginary=c1.imaginary+c2.imaginary;

    printf("sum=%.2f + %.2f i",sum.real,sum.imaginary);

}