#include<stdio.h>

int main()
{
    int n,c=0;

    printf("Enter a number\n");
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

    if(c>1)
    printf("The number is not prime\n");
    else
    printf("The number is prime");
}
