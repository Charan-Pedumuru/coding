#include<stdio.h>

int main()
{
    int i,j,n,min;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements after sorting are\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {

            if(arr[j]>arr[i])
            {
                min=arr[i];
                arr[i]=arr[j];
                arr[j]=min;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
