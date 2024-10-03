#include<stdio.h>

int main()
{
    char str[50],ch='#';

    scanf("%[^\n]",str);

    int i;

    for(i=0;str[i]!='\0';i++)
    {
        int a;
        
        if(str[i]==' ')
         {
            str[i]=ch;
         }

    }
    
    puts(str);

}