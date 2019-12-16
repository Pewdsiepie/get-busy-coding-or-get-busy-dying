#include<stdio.h>
int main()
{
    int x,sum;
    scanf("%d",&x);
    if (x<=10) sum=6*x;
    else if(x>=11&&x<=20) sum=60+(x-10)*2;
    else if(x>=21&&x<=40) sum=80+(x-20)*1;
    else if(x>40) sum=100;
    printf("%d",sum);

    return 0;
    
}
