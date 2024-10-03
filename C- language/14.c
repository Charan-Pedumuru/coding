#include<stdio.h>

int main()
{
    int a=0,b,i,arr[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the lottery numbers to be stored\n");
        scanf("%d",&arr[i]);

    }
     printf("Enter the lottery number to search\n");
     scanf("%d",&b);
    for(i=0;i<5;i++)
    {

        if(b==arr[i])
        {
            a++;
        }

    }
    if(a==1)
    printf("Congratulations ! you won the lottery\n");
    else
    printf("Sorry! better luck next time\n");


}
