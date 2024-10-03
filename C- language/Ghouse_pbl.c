#include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,y1,y2;

    printf(" Enter Ranges [x1,x2] for Interval-1 (two space-separated positive numbers): ");
    scanf("%lf%lf",&x1,&x2);

    printf(" Enter Ranges [y1,y2] for Interval-2 (two space-separated positive numbers): ");
    scanf("%lf%lf",&y1,&y2);
    double a=(x1/y2),b=(x2/y1);

    printf("\nInterval-1: I1 = [%lf,%lf]\n",x1,x2);
    printf("Interval-2: I2 = [%lf,%lf]\n",y1,y2);

    printf("Interval after ADDITION: (I1 + I2) = [%lf,%lf]\n",(x1+y1),(x2+y2));
    printf("Interval after SUBTRACTION: (I1 - I2) = [%lf,%lf]\n",(x1-y2),(x2-y1));
    printf("Interval after MULTIPLICATION: (I1 x I2) =[%lf,%lf]\n",(x1*y1),(x2*y2));

    printf(" RECIPROCAL Interval: ~I1 = [%lf,%lf]\n",(1.0/x2),(1.0/x1));
    printf(" RECIPROCAL Interval: ~I2 = [%lf,%lf]\n",(1.0/y2),(1.0/y1));

    printf("Interval after DIVISION: (I1 / I2) = [ %lf, %lf]\n",a,b);

    printf("Interval after CONTINUOUS-UNION: (I1 U I2) = [%lf,%lf]\n",(x1*(x1<=y1)+y1*(x1>y1)),(x2*(x2>=y2)+y2*(x2<y2)));
    printf(" Interval after INTERSECTION: (I1 ^ I2) = [%lf,%lf]\n\n",(y1*(y1<=x1)(y2>x1)+x1(x1<y1)(y2>x1)),y2(y2>=x2)(y2>x1)+x2(x2>y2)*(y2>x1));

    printf(" Complex Interval: C =[%lf,%lf] + [%lf,%lf].i\n",x1,x2,y1,y2);
    printf(" MODULUS of Complex Interval: |C| =[%lf,%lf]\n",sqrt(x1*x1+y1*y1),sqrt(x2*x2+y2*y2));
    printf(" CONJUGATE of Complex Interval: ~C =[%lf,%lf] + [%lf,%lf].i\n",x1,x2,(y2*(-1)),(y1*(-1)));
    printf(" ARGUMENT of Complex Interval: arg(C) =[%lf,%lf]\n", atan(y1/x2), atan(y2/x1));
    printf("SQUARE of Complex Interval: C^2 =[%lf,%lf] + [%lf,%lf].i\n",(x1*x1-y2*y2),(x2*x2-y1*y1),(2*x1*y1),(2*x2*y2));
    printf("CUBE of Complex Interval: C^3 =[%lf,%lf] + [%lf,%lf].i\n",(pow(x1,3)-3*x2*y2*y2),(pow(x2,3)-3*x1*y1*y1),(3*y1*x1*x1-pow(y2,3)),(3*y2*x2*x2-pow(y1,3)));
    a=x1*x1+y1*y1;
    b=x2*x2+y2*y2;

    printf(" RECIPROCAL of Complex Interval: 1/C =[%lf,%lf] + [%lf,%lf].i\n",(x1/b),(x2/a),(y2*(-1)/a),(y1*(-1)/b));

}
