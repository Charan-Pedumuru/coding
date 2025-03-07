#include<stdio.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);

    if(r!=c)
    printf("Not a square matrix\n");

    else
    {
        int arr[r][c];

    int f=0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j && arr[i][j]!=1)
            {
                f=-1;
                break;
            }
            else if(i!=j && arr[i][j]!=0)
            {
                f=-1;
                break;
            }
        }
    }

    if(f==0)
    printf("Identity Matrix\n");

    else
    printf("Not an Identity Matrix\n");

    }
}