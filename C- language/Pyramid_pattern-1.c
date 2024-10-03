#include<stdio.h>

int main()
{
    int i,j,k,l,r,m;

    printf("Enter the row\n");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            printf(" ");
        }                                  //1st loop for rows
        m=1;
        for(k=1;k<=i;k++)                 //2nd loop for spaces
        {
            printf("*");                  //3rd loop for incrementation
        }
        m=m-2;                            //4th loop for decrementation
        for(l=1;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}
