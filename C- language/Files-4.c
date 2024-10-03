#include<stdio.h>

int main()
{
    FILE *f;
    int a=10;
    f=fopen("sample.txt","w");
    printf("At the begining - %d\n",ftell(f));
    fscanf(f,"%d",a);
     
    printf("Before rewinding - %d\n",ftell(f));
    rewind(f);

    printf("After rewind - %d\n",ftell(f));

}