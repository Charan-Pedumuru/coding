#include<stdio.h>

int main()
{
    int arr[]={3,4,7,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    int temp=0;

    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}