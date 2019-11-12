#include<stdio.h>

int main()
{
    int a=0,b=0,c=1,d,n,i,sum=1;

    scanf("%d",&n);

    if(n==2||n==1) sum=0;
    else if (n==3) sum=1;
        else if(n>=4){      
    for ( i = 4; i <= n; i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        sum=sum+d;
    }
        }
    printf("%d",sum);
    
    return 0;
}
