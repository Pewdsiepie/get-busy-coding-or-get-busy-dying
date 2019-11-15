#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x1,x2,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/(a*2);
    x2=(-b-sqrt(d))/(a*2);
    printf("x1=%.2lf x2=%.2lf",x1,x2);
    return 0;
}
