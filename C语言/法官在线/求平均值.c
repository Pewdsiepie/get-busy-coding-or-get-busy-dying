#include<stdio.h>
int main()
{
    int N,i;
    float n,term=0,sum;

    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%f",&n);
        term=term+n;
    }
    sum=term/N;
    printf("%.2f",sum);

    return 0;
}
