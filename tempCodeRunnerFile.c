#include <stdio.h>

int a = 2;

int main()
{
   int b = a + 3;

   if(b/2.0 == 2.5)
       printf("if\n");
   else if(b/2 == 2)
       printf("else if\n");
   else
       printf("else\n");

   return 0;
}