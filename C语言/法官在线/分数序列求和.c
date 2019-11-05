#include<stdio.h>
int main()
{
    int n,i;
    float a=2,b=1,c,d;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a/b;
        d=b;
        b=a;
        a=b+d;
        sum=sum+c;
    }
    printf("%.2lf",sum);
    return 0;
}
