#include <stdio.h>
int main()
{
    int a,b=0,c=0,n,i;

    scanf("%d %d",&a,&n);

    for(i=1;i<=n;i++)
    {
        b=b+a;
        c=c+b;
        a=a*10;
    }

    printf("%d",c);
    
    return 0;
}
