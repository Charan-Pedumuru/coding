#include<stdio.h>

int main()
{
    int a;
   long l;
   short s;
   float f;
   double d;
   char c;
   unsigned long u;

   printf("The size of the integer is %d\n",sizeof(a));
   printf("The size of the long integer is %d\n",sizeof(l));
   printf("The size of the short integer is %d\n",sizeof(s));
   printf("The size of the float is %d\n",sizeof(f));
   printf("The size of the double is %d\n",sizeof(d));
   printf("The size of the character is %d\n",sizeof(c));
   printf("The size of the unsigned long integer is %d\n",sizeof(u));

   return 0;

}
