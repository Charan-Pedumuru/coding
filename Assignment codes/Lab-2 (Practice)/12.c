#include<stdio.h>

int main()
{
    int a;
    long l;
    short s;
    float f;
    double d;
    char c,q[10];
    unsigned long u;

    printf("Enter an integer value\n");
    scanf("%d",&a);

    printf("Enter a long integer value\n");
    scanf("%ld",&l);

    printf("Enter a float value\n");
    scanf("%f",&f);

    printf("Enter a double value\n");
    scanf("%lf",&d);

    printf("Enter a character\n");
    scanf("%s",&c);

    printf("Enter a string\n");
    scanf("%s",&q);

    printf("Enter an unsigned integer value\n");
    scanf("%u",&u);

    printf("Enter a short integer value\n");
    scanf("%o",&s);

    printf("The value of integer is %d\n",a);
    printf("The value of long integer is %ld\n",l);
    printf("The value of float is %f\n",f);
    printf("The value of double is %lf\n",d);
    printf("The character is %c\n",c);
    printf("The string is %s\n",q);
    printf("The value of unsigned integer is %u\n",u);
    printf("The value of short integer is %o\n",s);


    return 0;

}
