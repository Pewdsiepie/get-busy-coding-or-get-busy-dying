#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;

    scanf("%lf",&x);

    if(x>1&&x<100&&(int)x%2==0)
    {
        y=sin(x+2);
        printf("%.2lf",y);
    }
    else
    {
        if(x>100&&(int)x%2==1)
        {
            y=2*sqrt(x-1);
        printf("%.2lf",y);
        }
        else
        {
            y=x;printf("%.2lf",y);
            }
    }
    return 0;

}
