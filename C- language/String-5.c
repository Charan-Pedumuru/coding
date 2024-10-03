#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30],str2[30];
    int ret;

    strcpy(str1,"abcdef");
    strcpy(str2,"ABCDEF");

    ret=strncmp(str1,str2,4);
    printf("%d\n",ret);

    if(ret<0)
    printf("str1 is less than str2");

    else if(ret>0)
    printf("str1 is greater than str2");

    else
    printf("str1 and str2 are equal");

}