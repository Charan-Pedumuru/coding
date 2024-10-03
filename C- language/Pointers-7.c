#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int (*array)[n],*p;
    int arr[n];

    for(int i=0;i<n;i++)
    scanf("%d",&arr[n]);

    p=arr;      // pointer to index 0
    array=&arr;  // pointer to whole array

    printf("p=%p\n",p);
    printf("array=%p\n",array);
    printf("*p=%d\n",*p);
    printf("*array=%d\n",*array);
    printf("*(p+1)=%d\n",*(p+1));
    printf("*(*array+2)=%d\n",*(*array+2));
    printf("sizeof(*p)=%d\n",sizeof(*p));
    printf("sizeof(*array)=%d\n",sizeof(*array));
    

}