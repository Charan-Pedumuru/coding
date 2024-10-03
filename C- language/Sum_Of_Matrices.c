#include<stdio.h>

int main()
{
    int r,c;

    printf("Enter the rows and columns of a matrices\n");
    scanf("%d%d",&r,&c);

    if(r!=c)
    printf("The matrices can't be added");

    int arr[r][c],arr1[r][c],arr2[r][c];

    printf("Enter the elements in the first matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }

    printf("Enter the elements in the second matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&arr1[i][j]);
    }

    printf("The sum of two matrices is\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr2[i][j]=arr[i][j]+arr1[i][j];
            printf("%d\t",arr2[i][j]);
        }
         printf("\n");
    }

}