#include<stdio.h>

int main()
{
    int opt;

    printf("Choose an option\n");
    printf("1.Harshad number\n2.LCM of two numbers\n\n");
    scanf("%d",&opt);

    do
    {
        if(opt==1)
        {
            int num, sum=0,b;

            printf("Enter any number\n");
            scanf("%d", &num);
            b=num;

            while(num!=0)
           {
             sum += num % 10;
             num = num / 10;
            }

            if(b%sum==0)
            printf("The number %d is a harshad number\n",b);
            else
            printf("The number %d is not harshad number\n",b);
        }

        if(opt==2)
        {
            int n1, n2, max;
            printf("Enter two positive integers\n");
            scanf("%d %d", &n1, &n2);
            max = (n1 > n2) ? n1 : n2;

            while (1) {
            if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d\n", n1, n2, max);
            break;
              }
              ++max;
             }
        }

        printf("Choose an option\n");
        printf("1.Harshad number\n2.LCM of two numbers\n3.Stop the programme\n");
        scanf("%d",&opt);

    }while(opt!=3);

    return 0;

}
