#include<stdio.h>
#include<math.h>
int main()
{
    int T,i,N,term,n;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        N=N%10;
        term=pow(N,N);
        n=term%10;
        printf("%d\n",n);

    }
    return 0;
}
