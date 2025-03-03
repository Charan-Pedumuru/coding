#include<stdio.h>

int main()
{
    char str[20];

    gets(str);
    int a;

    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
            int count=0,maxcon=0;

            if(str[j]==str[i])
            {
                count++;

                if(count>maxcon)
                {
                    a=str[j];
                }
            }

        }
    }

    printf("%c",a);
}