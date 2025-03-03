#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30]="efghijkl";
    char str2[30]="abcd";

    strncat(str1,str2,3);   //Concatenates 3 characters from str2 to str1
    strncpy(str2,str1,4);   //copies 4 characters from str1 to str2


    printf("%s\n",str1);
    printf("%s\n",str2);
}