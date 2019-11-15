#include<stdio.h>
int main()
{
    int N,X,Y,s,i;
    char o;
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        scanf("%d %d",&X,&Y);
        s=X*Y;
        if (s>0)
        {
            o='+';
            printf("%c\n",o);
        }
        else if(s<0)
        {
            o='-';
            printf("%c\n",o);
        }
    }
    return 0;
}
