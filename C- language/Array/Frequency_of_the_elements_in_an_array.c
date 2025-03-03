#include<stdio.h>


int main()
{
    int a,i,j,c=0,fr[50];
    printf("Enter the size of an array\n");
    scanf("%d",&a);

    int arr[a];
    printf("Enter the elements to the array\n");

    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        fr[i]=-1;
    }

    for(i=0;i<a;i++)
    {
        c=1;

        for(j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                fr[j]=0;
            }

        }
        if(fr[i]!=0)
        fr[i]=c;
    }
    for(i=0;i<a;i++)
    {
        if(fr[i]!=0)
        printf("The frequency of the number %d is %d\n",arr[i],fr[i]);
    }

}
