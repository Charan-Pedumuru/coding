#include <stdio.h>

int main()
{
int num, count=1, r, s;

while(count <= 500)
{
num = count;
s = 0;

while(num)
{
r = num % 10;
s = s + (r * r * r);
num = num / 10;
}

if(count == s)
{
printf("%d,", count);
}

count++;
}

return 0;
}
