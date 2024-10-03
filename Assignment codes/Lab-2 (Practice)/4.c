#include<stdio.h>

int main()
{
    int a,b,c;
    int a1,a2,b1,b2,c1,c2;

    printf("Enter any three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    a1=pow(a,2);
    a2=pow(a,3);
    b1=pow(b,2);
    b2=pow(b,3);
    c1=pow(c,2);
    c2=pow(c,3);

    printf("The square of the first number is %d\nThe cube of the first number is %d\n\n",a1,a2);
    printf("The square of the second number is %d\nThe cube of the second number is %d\n\n",b1,b2);
    printf("The square of the third number is %d\nThe cube of the third number is %d\n\n",c1,c2);

    return 0;
}
