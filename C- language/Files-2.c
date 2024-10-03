#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen( "tset.txt","w");
    putc('A',fp);
    fclose(fp); //used to close file after writing
}