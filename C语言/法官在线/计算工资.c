#include <stdio.h>
int main()
{
    int profit;
    float salary;

    scanf("%d",&profit);

    if(profit<=1000) salary=500;
    else if(profit>1000&&profit<=5000) salary=500+profit*0.15;
    else if(5000<profit) salary=500+profit*0.2;
    printf("%.2f",salary);
    return 0;

}
