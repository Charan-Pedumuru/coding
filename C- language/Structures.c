#include<stdio.h>
#include<string.h>

struct books
{
    char title[50];
    int id;
};

int main()
{
    struct books b1={"Legend",69};
    struct books b2;

    b2=b1;

    printf("%d\n",b2.id);
    printf("%s\n",b1.title);

    if(strcmp(b1.title,b2.title)==0 &&(b1.id==b2.id))
    printf("The books are same\n");
    


}