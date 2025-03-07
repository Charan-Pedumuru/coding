#include<stdio.h>

int main()
{
    int age;

    do{
        printf("Enter your age\n");
        scanf("%d",&age);
    }while(age<0 || age>110);
}
