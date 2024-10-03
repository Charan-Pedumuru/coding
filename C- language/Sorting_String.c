#include<stdio.h>
#include<string.h>

void Sort(char str[]);

int main()
{

    char str[50];

    gets(str);

    Sort(str);

    puts(str);
}

void Sort(char str[])
{
    int i,j=0;
    char temp;

    do
    {
        i=j;

        for(i=j+1;str[i]!='\0';i++)
        {
            if(str[i]<str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }

        }
        j++;

    } while(str[j]!='\0');
}