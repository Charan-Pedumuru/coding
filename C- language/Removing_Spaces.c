#include<stdio.h>

int main()
{
    char str[50];

    scanf("%[^\n]",str);

    int i,j=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
         {
            str[j++]=str[i];
         }

    }
    str[j]='\0';
    
    puts(str);

}