#include<stdio.h>
int main()
{
    double w,h,BMI;
    scanf("%lf %lf",&w,&h);
    BMI=w/h/h;
    if (BMI<18.5)
    printf("thin");
    else if(BMI<24&&BMI>=18.5)
    printf("health");
    else if(BMI<28&&BMI>=24)
    printf("heavy");
    else if(BMI>=28)
    printf("fat");
    return 0;
    
}
