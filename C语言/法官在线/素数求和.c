#include<stdio.h>
int main()
{
    int M,N,sum=0,i,x,count=0;
    scanf("%d %d",&M,&N);
    if (M>=2&&M<N)
    {
        for ( x = M; x <=N; x++)
        {
            for ( i = 2; i <x; i++)
            {
                if (x%i==0) break;
            }
            if (x==i)
            {
                sum=sum+x;
                count++;
            }
            
        }
        printf("%d %d",count,sum);
    }
    else
    {
        printf("输入数据错误");
    }
    
    return 0;
}
