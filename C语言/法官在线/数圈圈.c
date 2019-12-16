#include<stdio.h>
int main()
{
    int N,S,count=0,i,j,k,term;
    scanf("%d",&N);
    for ( i = 1; i <= N; i++)
    {
        scanf("%d",&S);
        if (S==0) count=1;
        else
        {
            count=0;
            for ( j= 0; S!=0; j++)
            {
                k=S%10;
                S=S/10;
                if (k==0||k==4||k==6|k==9) 
                count++;
                else if(k==8)
                count=count+2;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
