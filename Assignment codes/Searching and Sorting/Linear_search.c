#include<stdio.h>

int main()
{
    int i,n,s,ind,c=0;

    printf("Enter the size of an array \n");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the elements in the index %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
        if(s==arr[i])
        {
            printf("The searched number %d is found at index %d",s,i);
            c++;
            break;
        }

    }
    if(c==0)
    printf("The number is not in the array");


}
