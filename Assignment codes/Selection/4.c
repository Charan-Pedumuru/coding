#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the age\n");
    scanf("%d",&a);

    if(a>=18)
    printf("You are old enough to drive legally\n");

    else
    {
        b=18-a;
        printf("You still need to wait %d years to drive legally\n",b);
    }

    return 0;
}
