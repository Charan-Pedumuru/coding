#include<stdio.h>

int main()
{
    int arr[10],i,j,a=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the price of %d item\n",i);
        scanf("%d",&arr[i]);

         for(j=0;j<10;j++)
         {
            printf("Enter the least price of %d item\n",j);
            scanf("%d",&arr[j]);
                if(arr[i]==arr[j])
                {
                    a++;
                }
         }
    }

    if(a!=1)
    printf("The lest priced its are ",i);

}
