#include<stdio.h>

int main()
{
    int n,i,max,a;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

        max=arr[0];

        if(max<arr[i])
        {
            max=arr[i];
            a=i;
        }
    }

    printf("The max element is %d and is at index %d",max,a);
}
