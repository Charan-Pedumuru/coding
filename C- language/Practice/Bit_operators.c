#include<stdio.h>

int main()
{
    int a=2,b=3;

     printf("%d\n",a&b); // bitwise AND             00000010 & 00000011= 00000010~2
     printf("%d\n",a|b); // bitwise Inclusive OR    00000010 | 00000011= 00000011~3
     printf("%d",a^b); // bitwise Exclusive OR      00000010 ^ 00000011= 00000001~1
     return 0;
}
