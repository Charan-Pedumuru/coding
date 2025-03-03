#include<stdio.h>

int main()
{
    char c;
    int acount=0,bcount=0,ccount=0,dcount=0;

    printf("Enter a letter\n");
    scanf("%c",&c);

    switch(c)
    {
       case 'a':
       case 'A':
                ++acount;
                printf("%d",acount);
        break;

       case 'b':
       case 'B':
                ++bcount;
                printf("%d",bcount);
        break;

       case 'c':
       case 'C':
                ++ccount;
                printf("%d",ccount);
        break;

       case 'd':
       case 'D':
                ++dcount;
                printf("%d",dcount);
        break;

       default : printf("Incorrect grade entered\n");
                 printf("Enter a new grade");


    }
}
