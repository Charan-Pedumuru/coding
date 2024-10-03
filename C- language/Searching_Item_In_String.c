#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][50];

    for(int i=0;i<5;i++)
    gets(str[i]);

    int i,f=0;

    char item[10];
    gets(item);

    for(int i=0;i<5;i++)
    {
        int x=strcmp(str[i],item);

        if(x==0)
        {
            f=i;
            printf("The item %s is found at index %d\n",item,f);
            break;
        }

    }

    if(f==0)
    printf("the item %s is not found\n",item);
}