#include<stdio.h>

int max(int x, int y) {return x>y ? x :y;}
int main()
{
    int m;
    m=max(4,max(11,6));

    printf("%d",m);
    return 0;
}