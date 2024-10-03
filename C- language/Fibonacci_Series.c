#include<stdio.h>

int fibonacci(int x)
{
    if(x==0)
    return 0;
    
    if(x==1)
    return 1;
    
    return fibonacci(x-1)+fibonacci(x-2);
    
}

int main()
{
    int a,i;
    scanf("%d",&a);
    
    
    for(i=0;i<a;i++)
    {
       printf("%d\t",fibonacci(i));
    }
    
    return 0;
}