#include<stdio.h>

struct timestruct
{
    int hour;
    int minutes;
    int seconds;
}s;

int main()
{
    printf("Enter the hours in 24 hour format\n");
    scanf("%d",&s.hour);

    printf("Enter the minutes\n");
    scanf("%d",&s.minutes);

    printf("Enter the seconds\n");
    scanf("%d",&s.seconds);

    printf("%d:%d:%d",s.hour,s.minutes,s.seconds);

}