#include<stdio.h>
#include<stdlib.h>

int countsmall(char str[],int i);

int main()
{
    char str[32768];
    gets(str);
    int count=countsmall(str,0);
    printf("%d",count);
    return 0;
}
int countsmall(char str[],int i)
{
    if(str[i]=='\0')
        return 0;
    if(str[i]<='z' && str[i]>='a')
        return 1+countsmall(str,i+1);
    return countsmall(str,i+1);
}