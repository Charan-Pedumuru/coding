#include<stdio.h>

int main()
{
    int a,b,opt;

    printf("Choose an option\n");
    printf("1.addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&opt);

    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);


    do
    {
        switch(opt)
        {
            case 1: printf("\nsum= %d\n",a+b);
            break;

            case 2: printf("\nsubtraction= %d\n",a-b);
            break;

            case 3: printf("\nMultiplication= %d\n",a*b);
            break;

            case 4: printf("\nDivision= %d\n",a/b);
            break;

            default : printf("\nIncorrect input\n");
        }

        printf("\n\nChoose an option\n");
        printf("1.addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
        printf("Or enter option 5 to exit\n");
        scanf("%d",&opt);


    }while(opt!=5);
}
