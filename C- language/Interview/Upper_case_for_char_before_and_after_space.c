#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[]="prince of persia";
    //fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == ' ')
        {
            if(i>0 && islower(str[i-1]))
            str[i-1]=toupper(str[i-1]);
            if(str[i+1]!='\0' && islower(str[i+1]))
            str[i+1]=toupper(str[i+1]);
        }
    }
    printf("%s",str);

}