#include<stdio.h>

int main()
{
    int i,j,r,num=1;

    printf("Enter the rows\n");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
