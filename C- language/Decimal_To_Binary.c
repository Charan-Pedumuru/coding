#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int r,res=0,s=1;

    while(a!=0)
    {
        r=a%2;
        res+=r*s;
        a/=2;
        s*=10;
    }

    printf("%d",res);
}