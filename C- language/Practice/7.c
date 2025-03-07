#include<stdio.h>
 void main()
 {
     int g,h,d,c;
     printf("Select the option for gender\n 1.Male\n 2.Female\n");
     scanf("%d",&g);
     if(g==1)
     {
         printf("Enter the type of hostel room\n 1.Two Sharing\n 2.three sharing\n");
         scanf("%d",&h);
         printf("Enter the duration in months\n");
         scanf("%d",&d);
         if(h==1)
         {
             c=10000*d;
             printf("The hostel fee is %d",c);
         }
         else
         {
             c=8000*d;
             printf("The hostel fee is %d",c);
         }
     }
     else
     {
        printf("Enter the duration in months\n");
        scanf("%d",&d);
        c=8000*d;
        printf("The hostel fee is %d",c);
     }
 }
