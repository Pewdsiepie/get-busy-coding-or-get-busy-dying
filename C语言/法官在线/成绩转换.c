#include<stdio.h>
int main()
{
    int K,i,count=1;
    float t;

    scanf("%d",&K);
    for(i=1;i<=K;i++)
    {
        scanf("%f",&t);
        if(t>100||t<0) printf("Score is error!");
        else
        {
            if(t>=90) printf("A\n");
            else if(t>=80&&t<=89) printf("B\n");
            else if(t>=70&&t<=79) printf("C\n");
            else if(t>=60&&t<=69) printf("D\n");
            else if(t<=59) printf("E\n");           
        }
    }
    return 0;
}
