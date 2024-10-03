#include<stdio.h>

int binarysearch(int arr[],int low, int high , int val)
{
    int mid=(low+high)/2;

    if(low>high)
    return -1;

    else if(arr[mid]<val)
    return binarysearch(arr,mid+1,high,val);

    else if(arr[mid]==val)
    return mid;

    else
    return(arr,low,mid-1,val);
}
int main()
{
    int n;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements in the array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            int a;
            
            if(arr[j]>arr[i])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }

    printf("The sorted array is\n");
    for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);

    int s;
    printf("Enter the number to be searched\n");
    scanf("%d",&s);

    if(binarysearch(arr,0,n-1,s)==-1)
    printf("The number is not found\n");

    else
    printf("The searched element is found at index %d",binarysearch(arr,0,n-1,s));

}