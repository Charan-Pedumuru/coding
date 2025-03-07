#include<stdio.h>

int main()
{
    int n,i,ip,p;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be inserted : ");
    scanf("%d",ip);

    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(ip<arr[i])
        {
            p=i;
            break;
        }
    }
    printf("The position is %d\n",p);

    for(i=n;i>=p;i--)
    arr[i]=arr[i-1];

    for(i=0;i<=n;i++)
    {
        printf("%d\n",arr[i]);
        arr[p]=ip;

    }

    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);

}
