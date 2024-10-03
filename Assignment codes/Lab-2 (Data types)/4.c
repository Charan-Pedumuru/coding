#include<stdio.h>
#include<string.h>

int main()
{
    char x[3];
    int i;

    printf("Enter any three characters \n");
    scanf("%s",x);
    printf("The reverse order of the characters is\n");

    for(i=strlen(x)-1;i>=0;i--)
    printf("%c",x[i]);

    return 0;
}
