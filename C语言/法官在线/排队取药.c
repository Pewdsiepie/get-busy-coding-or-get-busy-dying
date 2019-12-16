#include<stdio.h>
int main()
{
    int m,n,x,i,count=0,term;
    scanf("%d",&m);
    scanf("%d",&n);
    term=m;
    for ( i =1; i <= n; i++)
    {
        scanf("%d",&x);
        term-=x;
        if (term<0)
        {
            term=term+x;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
