#include<stdio.h>
 void main()
 {
     int s,t,n;
     printf("Enter the amount of present salary\n");
     scanf("%d",&s);
     printf("Enter the number of TVs sold\n");
     scanf("%d",&t);
     if(t<5000)
     {
         n=s+(s*0.05);
         printf("The present salary of Vishnu is %d\nThe new salary is %d",s,n);
     }
     else if(t>=5000 && t<6500)
     {
         n=s+(s*0.07);
         printf("The present salary of Vishnu is %d\nThe new salary is %d",s,n);
     }
     else
     {
         n=s+(s*0.09);
         printf("The present salary of Vishnu id %d\nThe new salary is %d",s,n);
     }


 }
