#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    int len,i,k=1;
    char a[N];
    gets(a);
    len=strlen(a);
    if (len%2==0)
    {
        for ( i = 0; i <len; i++)
        {
            if (a[i]!=a[len-1-i])
            {
               k=0;break;
            }
        }
        
    }
    else
    {
        for ( i = 0; i <= (len-1)/2; i++)
        {
            if (a[i]!=a[len-1-i])
            {
                k=0;break;
            }
            
        }
        
    }
    if (k==0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    
    return 0;
}
