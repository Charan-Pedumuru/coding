#include<stdio.h>

int main()
{
    char g;
    int s,q,sal;

    printf("Enter the gender\n");
    scanf("%c",&g);

    printf("Enter your experience in years\n");
    scanf("%d",&s);

    printf("Enter your qualification\n1.Graduation\n2.Post graduation\n");
    scanf("%d",&q);

    if(g=='m' && s>=10 && q==2)
    sal=15000;

    else if((g=='m' && s>=10 && q==1) || (g=='m' && s<10 && q==2))
    sal=10000;

    else if(g=='m' && s<10 && q==1)
    sal=7000;

    else if(g=='f' && s>=10 && q==2)
    sal=12000;

    else if(g=='f' && s>=10 && q==1)
    sal=9000;

    else if(g=='f' && s<10 && q==2)
    sal=10000;

    else if(g=='f' && s<10 && q==1)
    sal=6000;

    printf("The salary is %d",sal);
}
