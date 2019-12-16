#include<stdio.h>
int main()
{
    int x,y,count=0,i,j=0,sum,a[6]={0};
    for ( x = 1; x <= 700; x++)
    {
        sum=0;
        for ( i = 1; i <= x; i++)
        {
            if (x%i==0)
            {
            sum=sum+i;
            }

        }
        if (sum%x==0)
        {
            y=x;
            count++;
            a[j]=x;
            j++;
        
        }
        
    }
    printf("%d\n%d\n",y,count);
        for ( i = 0; i <6; i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
}
