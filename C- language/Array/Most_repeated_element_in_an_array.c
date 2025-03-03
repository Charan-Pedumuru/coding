#include<stdio.h>


int main()
{
    int a,c=0,i,j;
    printf("Enter the size of an array\n");
    scanf("%d",&a);

    int arr[a];
    printf("Enter the elements in the array\n");

    for(i=0;i<a;i++)
    scanf("%d",&arr[i]);

    printf("The most repeated elements are ");

    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[j]);
                c++;
            }
        }
    }

    return 0;

}
