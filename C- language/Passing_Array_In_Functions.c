#include<stdio.h>

void array(int arr[],int x)
{
    for(int i=0;i<x;i++)
    printf("%d\n",arr[i]);


}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    array(arr,n);
}