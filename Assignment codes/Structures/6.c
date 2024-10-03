#include<stdio.h>

struct time_difference
{
    int hour;
    int minutes;

}t1,t2;

int main()
{
    struct time_difference t;

    printf("Enter the 1st particular time in hours, minutes in 24 hours format\n");
    scanf("%d%d",&t1.hour,&t1.minutes);

    printf("Enter the 2st particular time in hours, minutes in 24 hours format\n");
    scanf("%d%d",&t2.hour,&t2.minutes);

   if(t2.minutes>t1.minutes)
   {
        t.hour=t2.hour -t1.hour;
        t.minutes=t2.minutes -t1.minutes;
   }
   else
   {
        t.hour=t2.hour -t1.hour-1;
        t.minutes=t2.minutes -t1.minutes+60;

   }

    printf("The time difference is %d:%d",t.hour,t.minutes);

}