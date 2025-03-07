#include<stdio.h>

int main()
{
    int n,i,j;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements in an array\n");

    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int count;
    printf("The unique numbers in the array are \n");

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        printf("%d\n",arr[i]);
    }
}
