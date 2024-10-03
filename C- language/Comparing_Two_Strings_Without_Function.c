#include<stdio.h>
#include<string.h>

int main()
{
    char str[10],str1[10];
    int c=0;

    gets(str);
    gets(str1);

    for(int i=0; str[i]!='\0' && str1[i]!='\0';i++)
    {
        if(str[i]==str1[i])
        c++;

    }

    if(c==strlen(str))
    printf("The two string are equal\n");

    else
    printf("The two strings are different\n");


}