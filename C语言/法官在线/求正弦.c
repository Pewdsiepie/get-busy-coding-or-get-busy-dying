#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    int count=1,n=1;
    double sum,term;

    scanf("%f",&x);
    sum=x;
    term=x;

    do{
        term=-term*x*x/((n+1)*(n+2));
        sum+=term;
        n=n+2;
        count++;
    }
    while (fabs(term)>=1E-5);//fabs取绝对值
        printf("%.3lf",sum);

    return 0;
}
