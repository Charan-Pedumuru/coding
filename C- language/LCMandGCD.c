#include<stdio.h>

int main()
{
    int a,b,max,gcd;
    scanf("%d%d",&a,&b);

    for(int i=1;i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
    }
    printf("%d\t",gcd);

    max=(a>b)?a:b;

    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("%d",max);
            break;
        }
        max++;
    }

    
}