#include<stdio.h>
 void main()
 {
     int c,f;
     printf("Enter the price of apples in rupees\n");
     scanf("%d",&c);
     if(c<80)
     {
         f=10*c;
         printf("The price of apples is %d\nThe final cost of apples is %d",c,f);
     }
     else if(c>=80 && c<100)
     {
         f=8*c;
         printf("The price of apples is %d\nThe final cost of apples is %d",c,f);

     }
     else
     {
         f=5*c;
         printf("The price of apples is %d\nThe final cost of apples is %d",c,f);
     }
 }
