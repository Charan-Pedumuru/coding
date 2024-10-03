#include<stdio.h>
void main()
{
    int x,arr[x],i;
    printf("Enter th size of an array \n");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {printf("Enter the elements in the array\n");
    scanf("%d",&arr[i]);}
    for(i=0;i<x;i++)
    printf("The elements in index %d is %d \n",i,arr[i]);
}
