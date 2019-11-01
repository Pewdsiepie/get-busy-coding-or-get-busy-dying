#include <stdio.h>
int main()
{
    float salary,profit;

    scanf("%f",&profit);

    if(profit<=1000) salary=500;
    else if(profit>1000&&profit<=5000) salary=500+profit*0.25;
    else if(5000<profit) salary=500+profit*0.5;
    printf("%.2f",salary);
    return 0;

}
