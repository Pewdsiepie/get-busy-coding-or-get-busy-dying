#include<stdio.h>
int main()
{
    double sum=0,N,term;
    int i,sign=1;
    scanf("%lf",&N);
    for ( i = 1; i <=N; i++)
    {
        term=1*1.0/i*sign;
        sum=sum+term;
        sign=-sign;
    }
    printf("%.2lf",sum);

    return 0;
    
}
