#include<stdio.h>

int main()
{

    a(40,30);

}

void a(int x, int y)
{
    printf("a");
    if(x>y)
        b();
}

void b()
{
    printf("b");
}
