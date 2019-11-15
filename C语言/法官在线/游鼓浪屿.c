#include<stdio.h>
int main()
{
    int N,M=0,a,s,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a);
        if(a<=6) s=0;
        else if(a>=7&&a<=18) s=80*0.8;
        else if(a>=50) s=80*0.6;
        else s=80;
        M=M+s;
    }
    printf("%d",M);
    return 0;

}
