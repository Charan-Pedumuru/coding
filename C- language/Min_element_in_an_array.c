#include<stdio.h>

int main()
{
    int n,i,min,a;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

        min=arr[0];

        if(min>arr[i])
        {
            min=arr[i];
            a=i;
        }
    }

    printf("The min element is %d and is at index %d",min,a);
}
