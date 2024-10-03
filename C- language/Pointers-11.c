#include<stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int *p;
    p=arr;

    for(int i=0;i<n;i++)
    {
        sum+=*p;
        p++;
    }

    printf("The sum of the elements in the array is %d",sum);
    

}