#include<stdio.h>

int main()
{
    int r,num,flag,i;

    printf("Enter a range\n");
    scanf("%d",&r);

    for(num=1;num<=r;num++)
    {
        flag=0;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && num!=1)
        printf("%d\n",num);
    }

}
