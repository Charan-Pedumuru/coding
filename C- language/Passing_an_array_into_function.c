#include<stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};

    array(arr[2],arr[3]);
}

void array(int a, int b)
{
    printf("%d\n",a);
    printf("%d\n",b);
}