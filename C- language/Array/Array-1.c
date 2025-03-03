#include<stdio.h>

int main()
{
    int n,i,j;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        arr[i]=pow(i,2);
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}
