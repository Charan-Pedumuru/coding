#include<stdio.h>

int main()
{

    char arr[30],ch;

    int i=0;
    printf("Enter the name\n");

    while(ch!='\n')
    {
        ch=getchar();
        arr[i]=ch;
        i++;
    }
    arr[i]='\0';

    printf("%s",arr);


}