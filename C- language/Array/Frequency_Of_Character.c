#include<stdio.h>

int main()
{
    char str[30],ch;
    int fr=0;

    scanf("%s",str);

    scanf("%c",&ch);
    scanf("%c",&ch);

    for(int i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        fr++;
    }

    printf("The character %c frequency is %d",ch,fr);
}
