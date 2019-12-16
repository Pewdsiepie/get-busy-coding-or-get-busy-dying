#include<stdio.h>
int main()
{
    int x,y,count=0,i;
    scanf("%d",&x);
    for(count=0;x!=1;count++)
    {
        if(x%2!=0) x=x+1;
        x=x/2;
    }
    printf("%d",count);
    return 0;
}
