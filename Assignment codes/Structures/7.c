#include<stdio.h>

typedef struct
{
    float real;
    float imaginary;

}complex;

complex add(complex n1, complex n2)
{
    complex temp;

    temp.real=n1.real+n2.real;
    temp.imaginary=n1.imaginary+n2.imaginary;

    return (temp);

}
complex multiplication(complex n1, complex n2)
{
    complex temp;

    temp.real=(n1.real*n2.real)-(n1.imaginary*n2.imaginary);
    temp.imaginary=(n1.real*n2.imaginary)+(n1.imaginary*n2.real);

    return (temp);

}

int main()
{
    complex c1, c2, sum,product;

    printf("Enter the first real and imaginary numbers\n");
    scanf("%f%f",&c1.real, &c1.imaginary);

    printf("Enter the first real and imaginary numbers\n");
    scanf("%f%f",&c2.real, &c2.imaginary);

    sum=add(c1,c2);
    product=multiplication(c1,c2);

    printf("sum=%.2f + %.2f i",sum.real,sum.imaginary);
    printf("Product=%.2f + %.2f i",product.real,product.imaginary);

}