#include <stdio.h>
int main()
{
    int x,i;
    float sum=1;

    scanf("%d",&x);

    for(i=1;i<100;i++)
    {   if ((i+1)%2==0)//实现正负数相加
        {
        sum+=-x/(i+1.0);
        }
        else sum+=x/(i+1.0);
    }

    printf("%.2f",sum);

    return 0;
}
