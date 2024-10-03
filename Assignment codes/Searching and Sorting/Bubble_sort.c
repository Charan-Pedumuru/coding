#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,a;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
        }
    }
    }
     printf("The elements after sorting are\n");

    for(i=0;i<n;i++)
    {
       printf("%d\n",arr[i]);
    }
}
