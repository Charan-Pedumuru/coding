#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n],*array[n];      // Array of pointers

    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
    array[i]=&arr[i];

    for(int i=0;i<n;i++)
    printf("Value of arr[%d] is %d\n",i,*array[i]);

    printf("\n\n");
    
    for(int i=0;i<n;i++)
    printf("The address of arr[%d] is %d\n",i,array[i]);


}