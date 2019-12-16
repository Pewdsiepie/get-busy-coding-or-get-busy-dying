#include<stdio.h>
int main()
{
    int i,j;
    char s[100],N,M;
    gets(s);
    for(i=0;i<100;i++)
    {
        if(s[i]>='1'&&s[i]<='9')
        {
            N=s[i];
            break;
        }
    }
    for(j=i+1;j<100;j++)
    {
        if(s[j]>='1'&&s[j]<='9')
        {
            M=s[j];
            break;
        }
    }
    if(N<='4'&&'4'<=M)
        printf("Yes");
    else printf("No");
    return 0;
}
