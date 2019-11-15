#include<stdio.h>
int main()
{
    int x,i,sign=1;
    double sum=1;
    scanf("%d",&x);

    for ( i = 2; i<=100; i++)
    {
        sum=sum+x*1.0/i*sign;
        sign=-sign;
    }
    printf("%.2lf",sum);
    return 0;
    
}
