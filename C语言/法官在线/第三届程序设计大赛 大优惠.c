#include<stdio.h>
    int main()
    {
        int K,M,i;
        scanf("%d %d",&M,&K);
        for(i=1;i<=M;i++)
        {
            if(i%K==0) M=M+1;
        }
        printf("%d",M);
        return 0;
    }
