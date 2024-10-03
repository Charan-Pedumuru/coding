#include<stdio.h>
 void main()
 {
     int a,x;
     printf("Enter the cost of purchased items in rupees\n");
     scanf("%d",&a);
     if(a<1000)
     {
         x= a-(a*0.1);
         printf("He will get a discount of 10 percent and the final bill is %d",x);
     }
     else if(a==1000 && a<1500)
     {
         x=a-(a*0.12);
         printf("He will get a discount of 12 percent and the final bill is %d",x);
     }
     else
     {
         x=a-(a*0.14);
         printf("he will get a discount of 14 percent and final bill is %d",x);
     }

 }
