#include<stdio.h>
    int main()
    {
        int M,N,n,sum,i;
        scanf("%d %d",&M,&N);
        n=M;sum=n;
        for(i=1;i<N;i++)
        {
            n=n/2;
            sum=sum+n;
        }
        printf("%d %d",n,sum);

        return 0;

    }
