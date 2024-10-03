#include<stdio.h>
#include<stdlib.h>

int coll,roww;

int minpath(int matrix[][coll],int i,int j)
{
    if(i>=roww && j>=coll)
        return 0;
     if(minpath(matrix,i+1,j)<minpath(matrix,i,j+1))
     return minpath(matrix,i+1,j)+matrix[i][j];
     return minpath(matrix,i,j+1)+matrix[i][j];
}
int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    coll=col;
    roww=row;

    int matrix[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        scanf("%d",&matrix[i][j]);
    for(int i=0;i<row;i++,printf("\n"))
        for(int j=0;j<col;j++)
        printf("%d ",matrix[i][j]);
    if(row!=col)
    {
        printf("\nNot a N*N matrix");
        return 0;
    }
    int minimumlen=minpath(matrix,0,0);
    printf("minimum path sum is %d",minimumlen);
}