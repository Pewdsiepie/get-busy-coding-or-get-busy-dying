#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    if (x<0)
    {
        y=(x+1)*(x+1)+2*x+1.0/x;
        printf("%.2f",y);
    }
    else
    {
        y=sqrt(x);
        printf("%.2f",y);
    }
    
    return 0;      
}
