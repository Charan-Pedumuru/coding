#include<stdio.h>

int main()
{
    int a=20,b=3;

    //a/=pow(2,b)  //Right shift operator (formula)
    //a*=pow(2,b)  //Left shift operator (formula)


    printf("%d\n",a>>2);   //Right shift operator   00010100 >> 2 = 00000101~5
    printf("%d",a<<2);   //Left shift operator      00010100 << 2 = 01010000~80
    return 0;
}
