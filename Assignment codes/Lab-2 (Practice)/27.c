#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,m,t;
    float avg,p;

    printf("Enter the marks of 5 subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    printf("Enter the maximum number of marks \n");
    scanf("%d",&m);

    t=m1+m2+m3+m4+m5;
    avg=t/5;
    p=t/m*100;

    printf("The total marks obtained are %d\n",t);
    printf("The average marks obtained are %f\n",avg);
    printf("The percentage obtained is %f\n",p);

    return 0;

}
