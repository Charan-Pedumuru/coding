#include<stdio.h>
#include<string.h>

int main()
{
    char name[10],name1[10];
    int i;

    scanf("%s",name);
    scanf("%s",name1);

    printf("The length is %d\n",strlen(name));

    for(i=0;name[i]!='\0';i++);
    
    printf("The length is %d\n",i);

    strcpy(name,name1);       //Copies 2nd string to 1st string

    printf("%s\n",name);

    if(strcmp(name,name1)==0)   // compares if two strings are equal
    printf("Both strings are equal");

    else
    printf("Not equal");
}