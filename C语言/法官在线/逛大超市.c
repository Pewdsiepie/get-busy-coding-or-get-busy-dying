#include<stdio.h>
int main()
{
    int N,a,i;
    double M=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a);
        M=M+a;
    }
    if(M>=500) M=0.8*M;
    else if(M>=300) M=0.9*M;
    else M=M;
    printf("%.2lf",M);
    return 0;

}
