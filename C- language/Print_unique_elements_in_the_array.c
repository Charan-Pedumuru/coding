#include<stdio.h>

int main()
{
    int i,j,n;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements into the array\n");

    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("The unique elements in the array are\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            break;
        }
        if(i==j)
        printf("%d\n",arr[i]);
    }
}
