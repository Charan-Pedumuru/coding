#include<stdio.h>

int main()
{
    char s[10];
    int a;

    printf("Enter the text \n");
    scanf("%s",s);

    a=strlen(s);
    printf("The length of the string is %d",a);

    return 0;
}
