#include<stdio.h>

int main()
{
    int n;
    char c='A';
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",c);
            c++;
        }
        
        printf("\n");
       
    }
}