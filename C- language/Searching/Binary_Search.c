#include <stdio.h>

int main()
{
    int n,s,i,low,high,middle;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
    
    printf("Enter a number to be searched\n");
    scanf("%d",&s);

    low=0;
    high=n-1;

    while(low<=high)
    {
        middle=(low+high)/2;

        if(arr[middle]<s)
        {
            low=middle+1;
        }
        else if(arr[middle]==s)
        {
            printf("%d is found at the index %d",s,middle);
            break;
        }
        else
        {
            high=middle-1;
            
        }
    }

    if(low>high)
    {
        printf("%d is not found in the array",s);
    }

    return 0;
}
