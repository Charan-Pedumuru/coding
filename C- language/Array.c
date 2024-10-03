#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}
