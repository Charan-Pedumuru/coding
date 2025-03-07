#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int temp=0;
    char str[20];
    fgets(str,sizeof(str),stdin);


    for(int i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        temp+=(str[i]-'0');
    }
    printf("%d",temp);
}